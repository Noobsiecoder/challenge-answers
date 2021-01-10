// Function to return a list of elements from {arr1} that aren't in {arr2}
const arrayDifference = (arr1, arr2) =>
  arr1.filter((item) => !arr2.includes(item));

console.log(
  JSON.stringify(arrayDifference([1, 2], [2])) === JSON.stringify([1])
); // true
console.log(
  JSON.stringify(arrayDifference([1, 2, 3], [1, 8, 3])) === JSON.stringify([2])
); // true
console.log(JSON.stringify(arrayDifference([], [3, 4])) === JSON.stringify([])); // true
