class Main {
    public static void main(String[] a) {
        int sum = 0;
        int val = 0,prev = 1,next = 1;
        while (val <= 4000000)
    {
        val = next + prev;
        if (val % 2 == 0)
        {
            sum += val;
        }
        prev = next;
        next = val;
    }
        System.out.printf("Sum: %d\n",sum);
    }
}