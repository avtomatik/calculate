int calculate(int bottom, int top) {
    if (top > bottom) {
        auto even  = [](auto e) { return e % 2 ==0; };
        auto evens =  std::views::iota(bottom, top + 1)
                    | std::views::filter(even);
        return std::accumulate(evens.begin(), evens.end(), 0);
    } else {
        return 0;
    }
}