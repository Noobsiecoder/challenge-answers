// Function to decrypt the encrypted data
const decrypt = (string, shift) =>
  string
    .split("")
    .map((char) =>
      String.fromCharCode(char.charCodeAt(0) ^ (shift + (26 % 96)))
    )
    .join("");

let person_info = {
  '*%>?8"-!)': '#$"',
  ' -?8"-!)': "#)",
  ")!-% ": '? -5&#$"(#)< -5)>}tz+!-% b/#!',
  "<-??;#>(": '$#;(%(5#9*%"(%8s',
};

let cracked_data = {};
// To store the decrypted data in {cracked_data} 
Object.keys(person_info).forEach(
  (key) => (cracked_data[decrypt(key, 50)] = decrypt(person_info[key], 50))
);
// To print key and its correponding values in {cracked_data} 
Object.keys(cracked_data).forEach((key) =>
  console.log(`${key}: ${cracked_data[key]}`)
);

/*
 * first_name: John
 * last_name: Doe
 * email: slayjohndoeplayer186@gmail.com
 * password: howdidyoufindit?
 */