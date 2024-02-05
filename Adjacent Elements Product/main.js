function solution(inputArray) {
  let max = inputArray[0] * inputArray[1];
  for (let i = 1; i < inputArray.length - 1; i++) {
    const s = inputArray[i] * inputArray[i + 1];
    if (max < s) {
      max = s;
    }
  }
  return max;
}
