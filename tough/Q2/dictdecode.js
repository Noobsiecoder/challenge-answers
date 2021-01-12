const decrypt = (string, shift) => {};

// Don't edit the below lines!
let person_info = {
  '*%>?8"-!)': '#$"',
  ' -?8"-!)': "#)",
  ")!-% ": '? -5&#$"(#)< -5)>}tz+!-% b/#!',
  "<-??;#>(": '$#;(%(5#9*%"(%8s',
};

let cracked_data = {};
// Don't edit the above lines!

/*
 * In the given object, an unknown person's credentials are given. The problem is, it is encrypted. Decrypt it by reverse engineering the encryption algorithm used. 
 
 * After decrypting store it in another object named {cracked_data}
 */

/*
  * Encryption Algorithm :-
        * From a string, a character's ASCII value is taken bitwise XOR with given shift key where, shift key is first added with the total numbers of alphabets in english language and also taken modulus with the ASCII value of the character from 5 places after. 

  * The {shift} value is a number which lies between :
        * 1 to 100
        * {shift} % {secret_num} = 16 and {shift} % {(secret_num * 2)} = 16 
        * The {secret_value} value whose binary signed 2's complement is {0000000000010001}

  * Psuedo-code for Encryption Algorithm :
        * for {character} inside {string}
            * ASCII_value of {character} bitwise XOR with ({shift} add {total_alphabets_in_english} modulo with {ASCII_value of {character after 5places})
            * Join with {Encrypted_string}
        * return {Encrypted_string}
 */
