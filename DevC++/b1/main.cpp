// Build/Compile Instructions:
// In your Makefile or shell, set:
//   CPP       = g++
//   LINKOBJ   = main.o         # or your object files
//   BIN       = inventory_app  # desired executable name
//   LIBS      =                # any libraries, e.g. -lstdc++
// Then run:
//   $(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)
// Or directly compile with:
//   g++ inventory.cpp -o inventory_app

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <limits>
#include <cstdlib>  // for std::system

// Structure to represent an inventory item
struct Item {
    std::string name;
    int quantity;
    double costPrice;
};

// Clear console screen
static void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

// Pause for user
static void pause() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Input validation helpers
double getValidatedDouble(const std::string& prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) break;
        std::cout << "Invalid input. Please enter a number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return value;
}

int getValidatedInt(const std::string& prompt, int minVal, int maxVal) {
    int value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value >= minVal && value <= maxVal) break;
        std::cout << "Invalid input. Enter integer between " << minVal << " and " << maxVal << ".\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return value;
}

std::string getLineInput(const std::string& prompt) {
    std::string line;
    while (true) {
        std::cout << prompt;
        if (std::getline(std::cin, line) && !line.empty()) break;
        std::cout << "Input cannot be empty. Please try again.\n";
    }
    return line;
}

// File I/O for inventory
static std::vector<Item> loadInventory(const std::string& filename) {
    std::vector<Item> items;
    std::ifstream file(filename);
    if (!file) return items;
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string name, qtyStr, costStr;
        if (std::getline(ss, name, ',') && std::getline(ss, qtyStr, ',') && std::getline(ss, costStr)) {
            items.push_back({name, std::stoi(qtyStr), std::stod(costStr)});
        }
    }
    return items;
}

static void saveInventory(const std::vector<Item>& items, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& i : items) {
        file << i.name << ',' << i.quantity << ',' << i.costPrice << '\n';
    }
}

static void viewInventory(const std::vector<Item>& items) {
    std::cout << "\nCurrent Inventory:\n";
    for (const auto& i : items) {
        std::cout << "  " << i.name << " | Qty: " << i.quantity << " | Cost: " << i.costPrice << "\n";
    }
}

int main() {
    const std::string invFile  = "inventory.txt";
    const std::string prevFile = "previous_net.txt";
    const std::string currFile = "current_net.txt";

    // Load previous net worth
    double previousNetWorth = 0.0;
    std::ifstream in(prevFile);
    if (in >> previousNetWorth) {
        // ok
    }
    in.close();

    // Prompt for current financial balances
    double cash        = getValidatedDouble("Enter current cash: ");
    double receivable  = getValidatedDouble("Enter current accounts receivable: ");
    double liquidCash  = getValidatedDouble("Enter current liquid cash: ");
    double liabilities = getValidatedDouble("Enter current liabilities: ");
    double debt        = getValidatedDouble("Enter current debt: ");
    double loan        = getValidatedDouble("Enter current loan: ");

    // Load inventory & compute its initial value
    auto inventory = loadInventory(invFile);
    double inventoryValue = 0.0;
    for (const auto& it : inventory) {
        inventoryValue += it.quantity * it.costPrice;
    }

    int choice;
    do {
        clearScreen();
        // Header and summary
        std::cout << "=== Inventory Management System ===\n";
        std::cout << "Cash: " << cash << " | Inventory Value: " << inventoryValue << "\n";
        std::cout << "1. Add New Item\n2. Sell Item\n3. View Inventory\n4. View Financials\n5. Exit\n";
        choice = getValidatedInt("Select option (1-5): ", 1, 5);
        switch (choice) {
            case 1: {
                // Add item and update inventory value
                Item ni;
                ni.name      = getLineInput("Item name: ");
                ni.quantity  = getValidatedInt("Quantity: ", 0, INT_MAX);
                ni.costPrice = getValidatedDouble("Cost price: ");
                inventory.push_back(ni);
                inventoryValue += ni.quantity * ni.costPrice;
                saveInventory(inventory, invFile);
                std::cout << "\nItem '" << ni.name << "' added successfully!\n";
                pause();
                break;
            }
            case 2: {
                // Sell item
                std::string name = getLineInput("Sell item name: ");
                int qty          = getValidatedInt("Sell quantity: ", 1, INT_MAX);
                double sp        = getValidatedDouble("Sell price per unit: ");
                bool found = false;
                for (auto& it : inventory) {
                    if (it.name == name) {
                        found = true;
                        if (it.quantity >= qty) {
                            it.quantity -= qty;
                            double revenue = qty * sp;
                            double cost    = qty * it.costPrice;
                            double profit  = revenue - cost;
                            cash += revenue;
                            inventoryValue -= cost;
                            saveInventory(inventory, invFile);
                            std::cout << "\nSold " << qty << " of '" << name << "'. Profit: " << profit << "\n";
                        } else {
                            std::cout << "\nNot enough stock to sell.\n";
                        }
                        break;
                    }
                }
                if (!found) std::cout << "\nItem not found in inventory.\n";
                pause();
                break;
            }
            case 3:
                viewInventory(inventory);
                pause();
                break;
            case 4: {
                double currentNetWorth = (cash + receivable + liquidCash + inventoryValue)
                                         - (liabilities + debt + loan);
                double change = currentNetWorth - previousNetWorth;
                // Save current net worth
                std::ofstream outCurr(currFile);
                if (outCurr) outCurr << currentNetWorth;
                std::cout << "\n--- Financial Summary ---\n";
                std::cout << "Previous Net Worth: " << previousNetWorth << "\n";
                std::cout << "Current Net Worth:  " << currentNetWorth << "\n";
                std::cout << "Change:             " << change << "\n";
                pause();
                break;
            }
            case 5:
                // Update previous_net.txt for next session
                {
                    double finalNet = (cash + receivable + liquidCash + inventoryValue)
                                      - (liabilities + debt + loan);
                    std::ofstream outPrev(prevFile);
                    if (outPrev) outPrev << finalNet;
                }
                std::cout << "Exiting application. Goodbye!\n";
                break;
        }
    } while (choice != 5);
    return 0;
}
