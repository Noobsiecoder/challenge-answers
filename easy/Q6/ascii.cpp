#include <bits/stdc++.h>

// Function to convert each ASCII value to corresponding string
void ascii_to_string(int arr[], std::string &string, int size)
{
    for (int i = 0; i < size; i++)
        string += char(arr[i]);
}

// Function to convert String to corresponding ASCII values
void string_to_ascii(std::string str, char arr[], int ascii_code[], int size)
{
    // Copying string each elemenst and stroing them in an array
    strcpy(arr, str.c_str());
    for (int i = 0; i < size; i++)
        ascii_code[i] = int(arr[i]);
}

int main()
{
    // String {str}
    std::string str = "Hello";
    // Array {str_arr} to store each elements of a string
    char str_arr[str.length()];
    // Array {str_to_ascii} to store each element's ASCII value from {str_arr}
    int str_to_ascii[str.length()], check_ascii[] = {72, 101, 108, 108, 111};
    // Function to convert String to corresponding ASCII values
    string_to_ascii(str, str_arr, str_to_ascii, str.length());
    std::cout.setf(std::ios::boolalpha); // Format flag used for printing true/ false and not 1/0 respectively
    /* Test Case */
    bool check_case = false;
    for (int i = 0; i < str.length(); i++)
        // To check if both array's element is unequal, if the condition satisfies, it returns false
        if (str_to_ascii[i] != (check_ascii[i]))
            check_case = false;
        else
            check_case = true; // Inside for loop
    std::cout << check_case << std::endl;

    // Array {ascii} containing ASCII values
    int ascii[] = {111, 108, 108, 101, 72};
    // String {ascii_to_str} to store the string equivalent of ASCII value from each {ascii} array elements.
    std::string ascii_to_str = "", check_string = "olleH";
    // Function to convert each ASCII value to corresponding string
    ascii_to_string(ascii, ascii_to_str, sizeof(ascii) / sizeof(ascii[0]));
    /* Test Case */
    // Compares two string, if it returns zero, then given two strings are equal
    if (ascii_to_str.std::string::compare(check_string) == 0)
        std::cout << true << std::endl;
    else
        std::cout << false << std::endl;
}