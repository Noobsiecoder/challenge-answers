const encrypt = (string, shift) => {
  let encrypted_string = "";
  string.split("").map((char, i) => {
    if (char === " ") encrypted_string += char;
    else if (char === char.toUpperCase() && char != " ") {
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

const decrypt = (string, shift) => {
  let decrypted_string = "";
  string.split("").map((char, i) => {
    if (char === " ") decrypted_string += char;
    else if (char === char.toUpperCase()) {
      decrypted_string += String.fromCharCode(
        ((string.charCodeAt(i) - shift - 65) % 26) + 65
      );
    } else {
      decrypted_string += String.fromCharCode(
        ((string.charCodeAt(i) - shift - 97) % 26) + 97
      );
    }
  });
  return decrypted_string;
};

console.log(encrypt("The quick brown fox jumped over the lazy dog", 25));
console.log(decrypt("Sgd pthbj aqnvm enw itlodc nudq sgd kzyx cnf", 25));
