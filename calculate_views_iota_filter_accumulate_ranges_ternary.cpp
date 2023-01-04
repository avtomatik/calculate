namespace rv = std::views;

int calculate(int bottom, int top) {
    return top <= bottom ? 0 :
        ranges::accumulate(
            rv::iota(bottom, top + 1) |
            rv::filter([](auto e) { return e % 2 == 0; }), 0
        );
}