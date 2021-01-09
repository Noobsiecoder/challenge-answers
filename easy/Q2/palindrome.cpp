#include <iostream>

// Boolean function to check whether {str} is palindrome
bool check_palindrome(std::string str)
{
    std::string lowercase_string, reversed_string = "";
    // Loop to convert str to lower-case and store them in a new variable {lowercase_string}
    for (int i = 0; i <= str.length() - 1; i++)
        lowercase_string += tolower(str[i]);
    // Loop to reverse str from {lower_string} and store them in a new variable {reversed_string}
    for (int i = lowercase_string.length() - 1; i >= 0; i--)
        reversed_string += lowercase_string[i];
    // Returns either true or false accordingly
    return lowercase_string == reversed_string;
}

int main()
{
    std::cout.setf(std::ios::boolalpha);                                 // Format flag used for printing true/ false and not 1/0 respectively
    std::cout << check_palindrome("Madam") << std::endl;                 // true
    std::cout << check_palindrome("Radiator") << std::endl;              // false
    std::cout << check_palindrome(std::to_string(1234321)) << std::endl; // true
    std::cout << check_palindrome(std::to_string(1000)) << std::endl;    // false
    return 0;
}