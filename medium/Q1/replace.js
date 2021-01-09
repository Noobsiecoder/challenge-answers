// Function to replace characters that repeat more than once using regular expression
const replaceString = (string) => {
  new_arr = [];
  string = string.toLowerCase(); // Converting string to lowercase
  for (char of string) {
    var regexp = new RegExp(`[^${char}]`, "g"); // Storing regexp values as RegExp Object
    if (string.replace(regexp, "").length > 1) {
      /* Pushing regexp that occur more than once */
      new_arr.push(String(regexp).replace(regexp, ""));
    }
    if (new Set(new_arr).has(char)) {
      // Coverting array to set and then replacing all occurence
      string = string.replace(char, "*");
    }
  }
  return string;
};

console.log(replaceString("Missisippi") === "m*********"); // true
console.log(replaceString("Computer") === "C*mp*t*r"); // false
console.log(replaceString("MisSisIpPi") === "m*********"); // true
console.log(
  replaceString("Hello, World! I love C++") === "h*ll*,*w*rld!*i***v**c**"
); // false
