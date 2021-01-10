// Function to find the union and intersection of array
const arrayFunctions = (array1, array2) => [
  [...new Set([...array1, ...array2])], // Using spread operator, joining two arrays as one
  array1.filter((x) => array2.includes(x)), // Filtering array by checking if {arr of [x]} exits in {arr2}
];

console.log(
  JSON.stringify(arrayFunctions([1, 2, 3], [3, 6, 7])) ===
    JSON.stringify([[1, 2, 3, 6, 7], [3]])
); // true

console.log(
  JSON.stringify(arrayFunctions([1, 2, 3], [5, 6, 7])) ===
    JSON.stringify([
      [1, 2, 3, 5, 6, 7],
      [5, 6],
    ])
); // false

console.log(
  JSON.stringify(arrayFunctions([], [5, 6])) === JSON.stringify([[5, 6], []])
); // true

console.log(
  JSON.stringify(arrayFunctions([8, 7, 6], [5, 4, 3])) ===
    JSON.stringify([
      [8, 7, 6, 5],
      [4, 3],
    ])
); // false*/
