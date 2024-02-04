function selectionSort(a) {
  // Only change code below this line
  let min, idx;
  for (let i = 0; i < a.length; i++) {
    min = a[i];
    idx = i;
    for (let j = i + 1; j < a.length; j++) {
      if (min > a[j]) {
        min = a[j];
        idx = j;
      }
    }
    let t = a[i];
    a[i] = min;
    a[idx] = t;
  }
  return a;
  // Only change code above this line
}

console.log(
  selectionSort([
    1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92,
  ])
);
