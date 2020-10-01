////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 1:
// https://projecteuler.net/problem=1
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Adds up all the numbers that is a multiple of 3 or 5 from 1 to `n`.
template <std::unsigned_integral T>
constexpr T calc_sum(T n) {
    T ret = 0;
    for (T i = 1; i < n; i++)
        ret += ((i % 3 == 0) || (i % 5 == 0)) ? i : 0;
    return ret;
}

int main() {
    constexpr auto ans = calc_sum(uint64{1000});
    std::cout << ans << std::endl;      // 233168
    return 0;
}
