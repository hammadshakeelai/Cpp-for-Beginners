#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    int deck[52];

    srand(time(NULL));

    while (true) {
        // Initialize deck (cards in order)
        for (int i = 0; i < 52; i++)
            deck[i] = i;

        // Shuffle the deck
        for (int i = 51; i > 0; i--) {
            int j = rand() % (i + 1);
            swap(deck[i], deck[j]);
        }

        // Ask user to pick a card number
        int chosenCard;
        do {
            cout << "Enter your card number (1-52, 0 to quit): ";
            cin >> chosenCard;

            if (chosenCard == 0)
                break;  // exit immediately if 0 entered

            if (chosenCard < 1 || chosenCard > 52) {
                cout << "Invalid card number. Try again.\n";
            }
        } while (chosenCard < 1 || chosenCard > 52);

        if (chosenCard == 0)
            break;  // Exit the program if user inputs 0

        chosenCard--;  // Adjust index (0-based)

        // Start drawing cards randomly
        int remaining = 52;
        bool cardFound = false;

        while (!cardFound && remaining > 0) {
            int drawIndex = rand() % remaining;

            cout << "Drawn: " << ranks[deck[drawIndex] % 13] << " of " 
                 << suits[deck[drawIndex] / 13] << endl;

            if (deck[drawIndex] == chosenCard) {
                cout << "You won! Your card (" << ranks[deck[drawIndex] % 13] 
                     << " of " << suits[deck[drawIndex] / 13] << ") was drawn!\n";
                cardFound = true;
                cout << "Cards remaining: " << (remaining - 1) << "\n\n";
            }

            // Remove drawn card from deck
            swap(deck[drawIndex], deck[remaining - 1]);
            remaining--;
        }
    }

    cout << "Game over. Goodbye!\n";
    return 0;
}
