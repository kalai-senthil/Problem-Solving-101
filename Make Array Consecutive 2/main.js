function solution(statues) {
  let needed = 0;
  statues = statues.sort((a, b) => {
    return a - b;
  });
  for (let i = 1; i < statues.length; i++) {
    const next = statues[i];
    const cur = statues[i - 1];
    const val = next - cur;
    if (val > 1) {
      needed += val - 1;
    }
  }
  return needed;
}
