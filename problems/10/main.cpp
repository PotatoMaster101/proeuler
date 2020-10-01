////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 10:
// https://projecteuler.net/problem=10
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Finds the sum of all primes below `limit`.
constexpr uint64 prime_sum(int limit) {
    if (limit < 2)
        return 0;

    uint64 ret = 2;
    for (index i = 3; i < static_cast<index>(limit); i += 2)
        ret += is_prime(i) ? i : 0;
    return ret;
}

int main() {
    /*constexpr*/ auto ans = prime_sum(2000000);
    std::cout << ans << std::endl;       // 142913828922
    return 0;
}
