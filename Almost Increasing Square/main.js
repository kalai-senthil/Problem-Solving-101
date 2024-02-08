function solution(s) {
  if (le === 1) return true;
  const le = s.length;
  let inc = true;
  for (let i = 0; i < le; i++) {
    inc = true;
    for (let j = 0; j < le - 1; ) {
      if (j === i) {
        j++;
        continue;
      }
      if (j + 1 === i) {
        if (s[j + 2] <= s[j]) {
          inc = false;
          break;
        }
        j++;
        continue;
      }
      if (s[j + 1] <= s[j]) {
        inc = false;
        break;
      }
      j++;
    }
    if (inc) {
      return true;
    }
  }
  return false;
}
