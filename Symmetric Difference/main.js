function sym(...args) {
  let length = args.length;
  let set1, set2;
  if (length === 2) {
    [set1, set2] = args;
    if (set2.length > set1.length) {
      let start = set1;
      set1 = set2;
      set2 = start;
    }
    const common = set1.filter((e) => set2.includes(e));
    const result = Array.from(new Set([...set1, ...set2]));
    const res = result.filter((e) => !common.includes(e));
    return res;
  }
  [set1, set2, ...rem] = args;
  const common = set1.filter((e) => set2.includes(e));
  const result = Array.from(new Set([...set1, ...set2])).filter(
    (e) => !common.includes(e)
  );
  return sym(result, ...rem);
}

sym([1, 2, 5], [2, 3, 5], [3, 4, 5]);
