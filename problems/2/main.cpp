////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 2:
// https://projecteuler.net/problem=2
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Adds up all the even fibonacci numbers for first `n` terms.
template <std::unsigned_integral T>
constexpr T calc_sum(T n) {
    T ret = 0, a = 1, b = 1;
    for (T i = 0; i < n; i++) {
        auto curr = a + b;
        ret += is_even(curr) ? curr : 0;
        a = b;
        b = curr;
    }
    return ret;
}

int main() {
    // fibonacci numbers above 33rd will exceed 4 million
    constexpr auto ans = calc_sum(uint64{33});
    std::cout << ans << std::endl;      // 4613732
    return 0;
}
