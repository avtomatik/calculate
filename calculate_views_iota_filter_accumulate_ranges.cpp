int calculate(int bottom, int top) {
    if (top > bottom) {
        auto even = [](auto e) { return e % 2 ==0; };
        return ranges::accumulate(
            std::views::iota(bottom, top+1) |
            std::views::filter(even), 0
        );
    } else {
        return 0;
    }
}