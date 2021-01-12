// Function to break list according to the given algorithm
const break_list = (size, digit, testString) =>
  digit == 0
    ? (testString = testString.splice(0, size)) // If digit is zero, only consider list as from pivot {0} to half of {test_str} length
    : (testString = testString.splice(size, testString.length)); // Else consider list as from pivot half of {test_str} length till its end

// Function to convert encoded binary to string
const encoder = (encode) => {
  let decoded = []; // To store the required elements
  encode = encode.match(/.{1,4}/g); // Placing 4 bits of binary separately
  encode.map((binary) => {
    let testString = [];
    for (let i = 97; i < 113; i++) testString.push(String.fromCharCode(i));
    let pivot = 8; // Pivot used for partionioning using the given algorithm
    for (let digit of binary) {
      testString = break_list(pivot, digit, testString);
      pivot /= 2;
    }
    decoded.push(testString); // Pushes the last character which was returned from {break_list} function
  });
  return decoded.join(""); // Using spread operator to unpack all elements from the list {decoded} and then converting to a string with elements joined togther
};

console.log(encoder("1111") === "p"); // true
console.log(encoder("11110000") === "pa"); // true
console.log(encoder("1001") === "j"); // true
