// Function to reverse the value
const reverse = (stringValue) => stringValue.split("").reverse().join("");

// Function to check type of the value
const checkType = (value) =>
  typeof value === "string" ? reverse(value) : reverse(value.toString());

console.log(checkType("Hello, World")); // dlroW ,olleH
console.log(checkType(1234)); // 4321
