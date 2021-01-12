// Function to calculate the value at the given time
const strangeCounter = (time) => {
  let value = 3;
  while (time > value) {
    time = time - value;
    value *= 2;
  }
  return value - time + 1;
};

console.log(strangeCounter(4) === 6); // true
console.log(strangeCounter(65));
console.log(strangeCounter(1234321));
console.log(strangeCounter(999999997668));
