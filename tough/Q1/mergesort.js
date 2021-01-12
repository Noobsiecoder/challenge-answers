// Function to merge sub-arrays together and also to sort them
const merge = (left, right) => {
  let arr = [];
  // Break out of loop if any one of the array gets empty
  while (left.length && right.length) {
    // Pick the smaller among the smallest element of left and right sub arrays
    if (left[0] < right[0]) {
      arr.push(left.shift());
    } else {
      arr.push(right.shift());
    }
  }

  // Concatenating the leftover elements
  // (in case we didn't go through the entire left or right array)
  return [...arr, ...left, ...right];
};

// Function to sort {array} using merge sort algorithm
const mergeSort = (array) => {
  const half = array.length / 2;

  // Base case or terminating case
  if (array.length < 2) {
    return array;
  }

  const left = array.splice(0, half);
  return merge(mergeSort(left), mergeSort(array));
};

console.log(
  JSON.stringify(mergeSort([9, 7, 6, 5, 1, 4, 8, 3, 2])) ===
    JSON.stringify([1, 2, 3, 4, 5, 6, 7, 8, 9])
); // true

console.log(
  JSON.stringify(mergeSort([54, 26, 93, 17, 77, 31, 44, 55, 20])) ===
    JSON.stringify([17, 20, 26, 31, 44, 54, 55, 77, 93])
); // true

console.log(JSON.stringify(mergeSort([])) === JSON.stringify([])); // true
