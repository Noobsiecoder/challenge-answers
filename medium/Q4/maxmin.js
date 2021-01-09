// Function to find the square of {value}
const squareValue = (value) => value.map((x) => Math.pow(x, 2));

// Function to find the cube of {value}
const cubicValue = (value) => value.map((x) => Math.pow(x, 3));

// Function to return the maximum and minimum value with its square and cubic value
const maxMinFunction = (arr) => [
  squareValue([Math.max(...arr), Math.min(...arr)]),
  cubicValue([Math.max(...arr), Math.min(...arr)]),
];

console.log(
  JSON.stringify(maxMinFunction([1, 2, 3])) ===
    JSON.stringify([
      [9, 1],
      [27, 1],
    ])
); // true

console.log(
  JSON.stringify(maxMinFunction([0, 1, 2])) ===
    JSON.stringify([
      [4, 1],
      [1, 8],
    ])
); // false

console.log(
  JSON.stringify(maxMinFunction([1, 2, 3, 4, 5, 6, 7, 8])) ===
    JSON.stringify([
      [64, 1],
      [512, 1],
    ])
); // true

console.log(
    JSON.stringify(maxMinFunction([1, 4, 7, 9])) ===
      JSON.stringify([
        [4, 1],
        [1, 8],
      ])
  ); // false
