#include <iostream>
#include <cmath>
int main()
{

    std::cout << std::max(7,9) << std::endl; // Outputs: 9
    std::cout << std::min(3,4) << std::endl; // Outputs: 3
    std::cout << abs(-3.14) << std::endl; // Outputs: 3
    std::cout << sqrt(16.0) << std::endl; // Outputs: 4
    std::cout << pow(2.0, 3.0) << std::endl; // Outputs: 8
    std::cout << ceil(3.14) << std::endl; // Outputs: 4
    std::cout << floor(3.14) << std::endl; // Outputs: 3
    std::cout << round(3.14) << std::endl; // Outputs: 3
    std::cout << fmod(5.5, 2.0) << std::endl; // Outputs: 1.5
    std::cout << log(10.0) << std::endl; // Outputs: 2.30259
    std::cout << log10(100.0) << std::endl; // Outputs: 2
    std::cout << exp(1.0) << std::endl; // Outputs: 2.71828
    std::cout << sin(3.14 / 2) << std::endl; // Outputs: 1
    std::cout << cos(3.14) << std::endl; // Outputs: -0.999999
    std::cout << tan(3.14 / 4) << std::endl; // Outputs: 0.999204
    std::cout << asin(1.0) << std::endl; // Outputs: 1.5708
    std::cout << acos(0.0) << std::endl; // Outputs: 1.5708
    std::cout << atan(1.0) << std::endl; // Outputs: 0.785398
    std::cout << atan2(1.0, 1.0) << std::endl; // Outputs: 0.785398
    std::cout << hypot(3.0, 4.0) << std::endl; // Outputs: 5
    std::cout << std::sqrt(pow(3,2)+pow(4,2)) << std::endl; // Outputs: 5
    
    std::cout << std::to_string(42) << std::endl; // Outputs: "42"
    std::cout << std::stoi("123") << std::endl; // Outputs: 123
    std::cout << std::stod("3.14") << std::endl; // Outputs: 3.14
    std::cout << std::stof("2.71") << std::endl; // Outputs: 2.71
    std::cout << std::string("Hello, World!") << std::endl; // Outputs: "Hello, World!"
    std::cout << std::string("Hello, World!").length() << std::endl; // Outputs: 13
    std::cout << std::string("Hello, World!").substr(0, 5) << std::endl; // Outputs: "Hello"
    std::cout << std::string("Hello, World!").find("World") << std::endl; // Outputs: 7
    std::cout << std::string("Hello, World!").replace(0, 5, "Hi") << std::endl; // Outputs: "Hi, World!"
    std::cout << std::string("Hello, World!").append(" How are you?") << std::endl; // Outputs: "Hello, World! How are you?"
    std::cout << std::string("Hello, World!").c_str() << std::endl; // Outputs: "Hello, World!"
    std::cout << std::string("Hello, World!").find_first_of("o") << std::endl; // Outputs: 4
    std::cout << std::string("Hello, World!").find_last_of("o") << std::endl; // Outputs: 8
    std::cout << std::string("Hello, World!").find_first_not_of("H") << std::endl; // Outputs: 1
    std::cout << std::string("Hello, World!").find_last_not_of("!") << std::endl; // Outputs: 11
    std::cout << std::string("Hello, World!").compare("Hello, World!") << std::endl; // Outputs: 0
    std::cout << std::string("Hello, World!").compare("Hello") << std::endl; // Outputs: 8
    std::cout << std::string("Hello, World!").compare("Hello, World!!") << std::endl; // Outputs: -1
    std::cout << std::string("Hello, World!").find("World") << std::endl; // Outputs: 7
    std::cout << std::string("Hello, World!").find("Universe") << std::endl; // Outputs: 18446744073709551615

    return 0;
}
