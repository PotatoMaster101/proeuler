////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 3:
// https://projecteuler.net/problem=3
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Returns the largest prime factor of `n`.
template <std::unsigned_integral T>
constexpr T large_prime(T n) {
    T ret = 0;
    for (T i = 2; i * i <= n; i++) {
        ret = (n % i == 0) ? i : ret;
        while (n % i == 0)
            n /= i;
    }
    return (n > 1) ? n : ret;
}

int main() {
    // fibonacci numbers above 33rd will exceed 4 million
    constexpr auto ans = large_prime(uint64{600851475143});
    std::cout << ans << std::endl;      // 6857
    return 0;
}
