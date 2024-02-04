import 'dart:io';

void main() {
  stdout.write("Enter n: ");
  int n = int.parse(stdin.readLineSync() ?? "0");
  int i = 1, sum = 0;
  while (i <= n) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
    i++;
  }
  stdout.writeln("Sum: $sum");
}
