function bubbleSort(ar) {
  // Only change code below this line
  let t;
  for (let i = 0; i < ar.length; i++) {
    for (let j = 0; j < ar.length - i - 1; j++) {
      if (ar[j] > ar[j + 1]) {
        t = ar[j];
        ar[j] = ar[j + 1];
        ar[j + 1] = t;
      }
    }
  }
  return ar;
  // Only change code above this line
}
console.log(
  bubbleSort([
    1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92,
  ])
);
