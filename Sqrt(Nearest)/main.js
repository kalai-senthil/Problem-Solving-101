function sqrt(number) {
  let start = 0;
  let result, mid;
  let end = number;
  while (start <= end) {
    mid = start + Number.parseInt((end - start) / 2);
    if (mid * mid > number) {
      end = mid - 1;
    } else if (mid * mid < end) {
      start = mid + 1;
      result = mid;
    } else return mid;
  }
  return result;
}

console.log(sqrt(800000000));
