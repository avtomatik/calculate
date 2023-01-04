int calculate(int bottom, int top) {
    if (top > bottom) {
        int sum = 0;
        for (int number : std::views::iota(bottom, top + 1)) {
            if (number % 2 == 0) {
                sum += number;
            }
        }
        return sum;
    } else {
        return 0;
    }
}