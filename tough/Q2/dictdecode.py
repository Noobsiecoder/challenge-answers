def decrypt(string, shift):
    return "".join([chr(ord(char) ^ (shift + 26 % (ord(char) + 5))) for char in string])


if __name__ == "__main__":
    ''' Don't edit the below lines! '''
    person_info = {
        '*%>?8"-!)': '#$"',
        ' -?8"-!)': "#)",
        ")!-% ": "? -5&#$\"(#)< -5)>}tz+!-% b/#!", # If this line is highlighted in red color, ignore it (No issues)
        "<-??;#>(": "$#;(%(5#9*%\"(%8s",
    }
    cracked_data = {}
    ''' Don't edit the above lines! '''

    '''
    - In the given dictionary, an unknown person's credentials are given. The problem is, it is encrypted. Decrypt it by reverse engineering the encryption algorithm used.
    
    - After decrypting store it in another dictionary named {cracked_data}
    '''

    '''
    Encryption Algorithm :-
        - From a string, a character's ASCII value is taken bitwise XOR with given shift key where, shift key is first added with the total numbers of alphabets in english language and also taken modulus with the ASCII value of the character from 5 places after. 

        - The {shift} value is a number which lies between :
            - 1 to 100
            - {shift} % {secret_num} = 16 and {shift} % {(secret_num * 2)} = 16 
            - The {secret_value} value whose binary signed 2's complement is {0000000000010001}

        - Psuedo-code for Encryption Algorithm :
            - for {character} inside {string}
                - ASCII_value of {character} bitwise XOR with ({shift} add {total_alphabets_in_english} modulo with {ASCII_value of {character} add {5})
                - Join with {Encrypted_string}
            - return {Encrypted_string}
    ''' 
