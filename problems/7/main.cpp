////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 7:
// https://projecteuler.net/problem=7
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Returns the `n`-th prime number.
template <std::unsigned_integral T>
constexpr T prime(T n) {
    T ret = 2;
    for (T i = 0; ; ret++)
        if (is_prime(ret) && ((++i) == n))
            return ret;
}

int main() {
    /*constexpr*/ auto ans = prime(uint64{10001});
    std::cout << ans << std::endl;      // 104743
    return 0;
}
