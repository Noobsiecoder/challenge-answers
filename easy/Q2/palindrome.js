// Function to reverse the {value}
const reverse = (value) =>
  checkType(value)
    ? value.toLowerCase().split("").reverse().join("")
    : value.toString().toLowerCase().split("").reverse().join("");

// Function to check type of the {value}
const checkType = (checkValue) => typeof checkValue === "string";

// Function to check if {value} is palindrome
const isPalindrome = (string) =>
  reverse(string) === string.toString().toLowerCase();

console.log(isPalindrome("Madam")); // true
console.log(isPalindrome("Radiator")); // false
console.log(isPalindrome(1234321)); // true
console.log(isPalindrome(1234)); // false
