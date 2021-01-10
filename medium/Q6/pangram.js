// Function to check if a string is pangram
const isPangram = (string) =>
  /* {String} case is lowered and characters are globally replaced by '' other than alphabets in {string} and then converted to Set to get only unique value of characters. Then the size of character is checked. */
  new Set(string
    .toLowerCase()
    .replace(/[^a-z]/g, "")
    ).size === 26; // There are only 26 alphabets in English language.

console.log(isPangram("A quick brown fox jumps over the lazy dog.")); // true
console.log(isPangram("A quick brown fox jumps over the lazy cat.")); // false
