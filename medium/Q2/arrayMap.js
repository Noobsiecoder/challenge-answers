const reduceArray = (array) =>
  Math.pow(
    array.reduce((total, num) => total + num),
    2
  );

console.log(reduceArray([1, 2, 3]) === 36); // true
console.log(reduceArray([1, 2, 3, 4]) === 128); // false
console.log(reduceArray([1, 2, 3, 4, 5, 6, 7]) === 784); // true
console.log(reduceArray([1, 2, 3, 4, 5, 6, 7]) === 360); // false
