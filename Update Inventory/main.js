function updateInventory(arr1, arr2) {
  const current = arr1.map((e) => e.at(1));
  arr2.forEach((item) => {
    const idx = current.indexOf(item[1]);
    if (idx === -1) {
      arr1.push(item);
    } else {
      arr1[idx][0] += item[0];
    }
  });
  return arr1.sort((a, b) => (a[1] > b[1] ? 1 : -1));
}

// Example inventory lists
var curInv = [
  [21, "Bowling Ball"],
  [2, "Dirty Sock"],
  [1, "Hair Pin"],
  [5, "Microphone"],
];

var newInv = [
  [2, "Hair Pin"],
  [3, "Half-Eaten Apple"],
  [67, "Bowling Ball"],
  [7, "Toothpaste"],
];

console.log(
  updateInventory(
    [
      [21, "Bowling Ball"],
      [2, "Dirty Sock"],
      [1, "Hair Pin"],
      [5, "Microphone"],
    ],
    [
      [2, "Hair Pin"],
      [3, "Half-Eaten Apple"],
      [67, "Bowling Ball"],
      [7, "Toothpaste"],
    ]
  )
);
