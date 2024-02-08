function solution(matrix) {
  let sum = matrix[0].reduce((v, s) => (s += v), 0);
  for (let i = 1; i < matrix.length; i++) {
    for (let j = 0; j < matrix[0].length; j++) {
      let a = true;
      for (let z = i - 1; z >= 0; z--) {
        if (matrix[z][j] === 0) {
          a = false;
          break;
        }
      }
      if (a) {
        sum += matrix[i][j];
      }
    }
  }
  return sum;
}
