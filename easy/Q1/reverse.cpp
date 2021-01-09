#include <iostream>

// String function to reverse {str}
std::string reverse_value(std::string str)
{
    std::string reversed_string = "";
    // Loop to reverse str from {str} and store them in a new variable {reversed_string}
    for (int i = str.length() - 1; i >= 0; i--)
        reversed_string += str[i];
    // Returning a string type of variable {reversed_string}
    return reversed_string;
}

int main()
{
    std::cout.setf(std::ios::boolalpha);                                           // Format flag used for printing true/ false and not 1/0 respectively
    std::cout << (reverse_value("Hello, World!") == "!dlroW ,olleH") << std::endl; // true
    std::cout << (reverse_value("Hello") == "!dlroW ,olleH") << std::endl;         // false
    std::cout << (reverse_value(std::to_string(1234)) == "4321") << std::endl;     // true
    std::cout << (reverse_value(std::to_string(1342)) == "4321") << std::endl;     // false
    return 0;
}