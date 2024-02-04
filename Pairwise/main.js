function pairwise(arr, arg) {
  let res = 0;
  const ss = new Set();
  arr.forEach((e, i) => {
    arr.forEach((ee, j) => {
      if (j > i && e + ee === arg) {
        if (!ss.has(i) && !ss.has(j)) {
          res += i + j;
          ss.add(i);
          ss.add(j);
        }
      }
    });
  });
  return res;
}
console.log(pairwise([0, 0, 0, 0, 1, 1], 1));
