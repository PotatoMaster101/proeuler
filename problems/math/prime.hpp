////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Some prime number calculations for doing Project Euler.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef PRIME_HPP
#define PRIME_HPP
#include <concepts>
#include <numeric>
#include <set>
#include "util.hpp"

// Determines whether `n` is a prime number.
template <std::unsigned_integral T>
[[nodiscard]] constexpr bool is_prime(T n) noexcept {
    if (n == 2)
        return true;
    if (n < 2 || is_even(n))
        return false;

    for (index i = 3; (i * i) <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

// Generates primes upto `max` using Sieve of Eratosthenes.
template <std::unsigned_integral T>
[[nodiscard]] std::set<T> esieve(T max) {
    std::set<T> ret;
    for (T i = 2; i < max; i++)
        ret.insert(i);

    for (auto i = ret.begin(); i != ret.end(); ++i) {
        auto curr = *i;
        auto del = i;
        ++del;

        while (del != ret.end()) {
            if ((*del) % curr == 0)
                ret.erase(del);
            ++del;
        }
    }
    return ret;
}

#endif    // PRIME_HPP
