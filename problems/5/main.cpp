////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 5:
// https://projecteuler.net/problem=5
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <numeric>      // std::lcm
#include <concepts>
#include "../math/math.hpp"

// Computes the smallest multiple of all numbers from `low` to `up`.
template <std::unsigned_integral T>
constexpr T small_mul(T low, T up) {
    T ret = low;
    for (auto i = low; i <= up; i++)
        ret = std::lcm(ret, i);
    return ret;
}

int main() {
    constexpr auto ans = small_mul(uint64{1}, uint64(20));
    std::cout << ans << std::endl;      // 232792560
    return 0;
}
