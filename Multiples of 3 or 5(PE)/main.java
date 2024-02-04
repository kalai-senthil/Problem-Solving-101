import java.util.Scanner;
class Main {
    public static void main(String[] a) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter n:");
        int n = sc.nextInt();
        int sum = 0;
        int i = 1;
        while (i <= n) {
            if (i % 3 == 0 | i % 5 == 0) {
                sum += i;
            }
            i++;
        }
        System.out.printf("Sum: %d\n",sum);
    }
}