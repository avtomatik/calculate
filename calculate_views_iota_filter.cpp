int calculate(int bottom, int top) {
    if (top > bottom) {
        int sum = 0;
        auto even = [](auto e) { return e % 2 ==0; }
        for (int number : std::views::iota(bottom, top + 1)
                        | std::views::filter(even)) {
            sum += number;
        }
        return sum;
    } else {
        return 0;
    }
}