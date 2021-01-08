// Function to check the datatype of {value}
const checkType = (value) =>
  typeof value === "string"
    ? value.toLowerCase()
    : value.toString().toLowerCase();

// Function to check if {value} is anagram
const isAnagram = (value) =>
  checkType(value)
    .split("")
    .sort((a, b) => a.localeCompare(b))
    .join("");

console.log(isAnagram("mamba") === isAnagram("AmaMB")); // true
console.log(isAnagram("mamba") === isAnagram("memaB")); // false
console.log(isAnagram(12154) === isAnagram(14521)); // true
console.log(isAnagram(1234) === isAnagram(5678)); // false
