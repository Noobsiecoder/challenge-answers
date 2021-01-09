#include <bits/stdc++.h>

// String function to sort a given list
std::string sorted_string(std::string sort_str)
{
    std::sort(sort_str.begin(), sort_str.end());
    return sort_str;
}

int main()
{
    std::cout.setf(std::ios::boolalpha);                                                      // Format flag used for printing true/ false and not 1/0 respectively
    std::cout << (sorted_string("mamba") == sorted_string("AmaMB")) << std::endl;             // true
    std::cout << (sorted_string("mamba") == sorted_string("memaB")) << std::endl;             // false
    std::cout << (sorted_string(std::to_string(1234)) == sorted_string("3124")) << std::endl; // true
    std::cout << (sorted_string(std::to_string(1001)) == sorted_string("1000")) << std::endl; // true
    return 0;
}