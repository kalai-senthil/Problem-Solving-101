function insertionSort(a) {
  // Only change code below this line
  let s = 1,
    len = a.length,
    j,
    val;
  while (s < len) {
    j = s - 1;
    val = a[s];
    while (j >= 0 && a[j] > val) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = val;
    s++;
  }
  return a;
  // Only change code above this line
}

console.log(
  insertionSort([
    1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92,
  ])
);
