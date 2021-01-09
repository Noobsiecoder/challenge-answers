#include <bits/stdc++.h>

// Boolean function to check if given string {str} is an isogram
bool check_isogram(std::string str)
{
    std::string new_str;
    // Using STL, converting to lower-case
    // parameters - (str.begin() = str[0], str.end() = str[str.length() - 1], variable to store the transformed data, function)
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    // Using STL, sorting {str}
    std::sort(str.begin(), str.end());
    new_str = str;
    // Using STL, erasing the duplicate characters in {str}
    std::unique(new_str.begin(), new_str.end()), new_str.end();
    return new_str == str;
}

int main()
{
    std::cout.setf(std::ios::boolalpha);                           // Format flag used for printing true/ false and not 1/0 respectively
    std::cout << check_isogram("Hey!") << std::endl;               // true
    std::cout << check_isogram("moOse") << std::endl;              // false
    std::cout << check_isogram(std::to_string(1234)) << std::endl; // true
    std::cout << check_isogram(std::to_string(1000)) << std::endl; // true
    return 0;
}