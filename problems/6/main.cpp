////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 6:
// https://projecteuler.net/problem=6
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Computes the squared sum from 1 to `n`.
template <std::unsigned_integral T>
constexpr T sq_sum(T n) {
    T ret = 0;
    for (T i = 1; i <= n; i++)
        ret += i * i;
    return ret;
}

int main() {
    constexpr auto s = sum(uint64{100});
    constexpr auto ans = (s * s) - sq_sum(uint64{100});
    std::cout << ans << std::endl;      // 25164150
    return 0;
}
