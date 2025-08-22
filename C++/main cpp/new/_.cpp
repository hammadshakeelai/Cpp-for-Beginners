#include <iostream> // Added for std::cout
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("Unknown exception");
    }
    catch (const std::exception& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}
