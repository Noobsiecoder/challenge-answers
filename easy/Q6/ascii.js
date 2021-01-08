// Function to convert {value} from string to its ASCII code or vice versa
const conversion = (value) =>
  typeof value === "string"
    ? value.split("").map((_, i) => value.charCodeAt(i))
    : value.map((asciiCode) => String.fromCharCode(asciiCode)).join("");

console.log(
  conversion("Hello, World!").join("") ===
    [72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33].join("")
); // true
console.log(
  conversion("Hello, World!").join("") ===
    [33, 100, 108, 114, 111, 87, 32, 44, 111, 108, 108, 101, 72].join("")
); // false
console.log(
  conversion([72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33]) ===
    "Hello, World!"
); // true
console.log(
  conversion([33, 100, 108, 114, 111, 87, 32, 44, 111, 108, 108, 101, 72]) ===
    "Hello, World!"
); // false
