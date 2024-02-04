function main() {
    let val = 1, sum = 0, prev = 1, next = 1;
    while (val <= 4000000) {
        val = next + prev;
        if (val % 2 == 0) {
            sum += val;
        }
        prev = next;
        next = val;
    }
    console.log("Sum:", sum)
}
main()