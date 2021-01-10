// Function to convert an array to set
const arrayToSet = (arr) => new Set(arr);

console.log(
  JSON.stringify([...arrayToSet([1, 2, 3, 4, 5, 2, 4, 1, 3, 2, 5])]) ===
    JSON.stringify([1, 2, 3, 4, 5])
); //true
