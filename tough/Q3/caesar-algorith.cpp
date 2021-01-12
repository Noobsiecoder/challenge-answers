#include <bits/stdc++.h>

// Function to encrypt string {str} using caesar encryption
std::string encrypt_message(std::string str, int shift)
{
    std::string encrypted_string; // To store the encrypted string
    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) == 32) // Checking if the character is a whitespace which is equivalent to 32 in ASCII
            encrypted_string += str[i];
        else if (isupper(str[i])) // Checking if the character is Uppercase
            encrypted_string += char((int(str[i]) + shift - 65) % 26 + 65);
        else
            encrypted_string += char((int(str[i]) + shift - 97) % 26 + 97);
    }
    return encrypted_string;
}

// Function to decrypt string {str} using caesar encryption
std::string decrypt_message(std::string str, int shift)
{
    std::string decrypted_string; // To store the decrypted string
    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) == 32) // Checking if the character is a whitespace which is equivalent to 32 in ASCII
            decrypted_string += str[i];
        else if (isupper(str[i])) // Checking if the character is Uppercase
            decrypted_string += char(((str[i] - shift - 65) + 26) % 26 + 65);
        /* 
             * Since C++ modulo operation wants to efficient for all hardwares, the result can be negative 
             * This result depends on the dividend
             * To ensure that the modulo operation returns positive only, we add it with 26 before starting the modulo operation
             * The same is carried in the {else} block
        */
        else
            decrypted_string += char(((str[i] - shift - 97) + 26) % 26 + 97);
    }
    return decrypted_string;
}

int main()
{
    std::string str = "The quick brown fox jumped over the lazy dog"; // Test string
    std::cout.setf(std::ios::boolalpha);                              // Format flag used for printing true/ false and not 1/0 respectively
    std::cout << (encrypt_message(str, 25) == "Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf") << std::endl;
    str = "Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf";                                                   // true
    std::cout << (decrypt_message(str, 25) == "The quick brown fox jumped over the lazy dog") << std::endl; // true
    return 0;
}