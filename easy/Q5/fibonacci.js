// Function to store fibonacci series in a list
const fibonacci = (size) => {
  let term1 = 0,
    term2 = 1,
    series = [];
  for (let i = 0; i < size; i++) {
    series.push(term1);
    var nthTerm = term1 + term2;
    term1 = term2;
    term2 = nthTerm;
  }
  return jsonStringify(series)
};

const jsonStringify = (value) => JSON.stringify(value);

console.log(fibonacci(5) === jsonStringify([0, 1, 1, 2, 3])); // true
console.log(fibonacci(5) === jsonStringify([0, 1, 1, 2, 3, 5, 8])); // false
console.log(fibonacci(12) === jsonStringify([0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89])); // true
console.log(fibonacci(12) === jsonStringify([0, 1, 1, 2, 3])); // false
