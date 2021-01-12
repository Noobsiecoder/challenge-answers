// Function to encrypt string {string} using caesar encryption
const encrypt = (string, shift) => {
  let encrypted_string = ""; // To store the encrypted string
  string.split("").map((char, i) => {
    // Checking if the character is a whitespace
    if (char === " ") encrypted_string += char;
    // Checking if the character is Uppercase
    else if (char === char.toUpperCase()) {
      encrypted_string += String.fromCharCode(
        ((string.charCodeAt(i) + shift - 65) % 26) + 65
      );
    } else {
      encrypted_string += String.fromCharCode(
        ((string.charCodeAt(i) + shift - 97) % 26) + 97
      );
    }
  });
  return encrypted_string;
};

// Function to decrypt string {string} using caesar encryption
const decrypt = (string, shift) => {
  let decrypted_string = ""; // To store the decrypted string
  string.split("").map((char, i) => {
    // Checking if the character is a whitespace
    if (char === " ") decrypted_string += char;
    // Checking if the character is Uppercase
    else if (char === char.toUpperCase()) {
      decrypted_string += String.fromCharCode(
        ((string.charCodeAt(i) - shift - 65 + 26) % 26) + 65
      );
      /*
       * Since C++ modulo operation wants to efficient for all hardwares, the result can be negative
       * This result depends on the dividend
       * To ensure that the modulo operation returns positive only, we add it with 26 before starting the modulo operation
       * The same is carried in the {else} block
       */
    } else {
      decrypted_string += String.fromCharCode(
        ((string.charCodeAt(i) - shift - 97 + 26) % 26) + 97
      );
    }
  });
  return decrypted_string;
};

console.log(
  encrypt("The quick brown fox jumped over the lazy dog", 25) ===
    "Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf"
); // true
console.log(
  decrypt("Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf", 25) ===
    "The quick brown fox jumped over the lazy dog"
); // true
