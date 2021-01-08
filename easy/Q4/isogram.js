const checkType = (value) =>
  typeof value === "string" ? value : value.toString();
const isIsogram = (value) =>
  [
    ...new Set(
      checkType(value)
        .toLowerCase()
        .split("")
        .sort((a, b) => a.localeCompare(b))
    ),
  ].join("") ===
  [
    ...checkType(value)
      .toLowerCase()
      .split("")
      .sort((a, b) => a.localeCompare(b)),
  ].join("");

console.log(isIsogram("Hey!")); // true
console.log(isIsogram("moOSe")); // false
console.log(isIsogram(1243)); // true
console.log(isIsogram(1000)); // false
