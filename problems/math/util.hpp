////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Util functions for doing Project Euler.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef UTIL_HPP
#define UTIL_HPP
#include <concepts>

// Determines whether `n` is even.
template <std::integral T>
[[nodiscard]] constexpr bool is_even(T n) noexcept {
    return (n % 2) == 0;
}

// Calculates the sum from 1 to `n`.
template <std::unsigned_integral T>
[[nodiscard]] constexpr T sum(T n) noexcept {
    return (n * (n + 1)) / 2;
}

// Calculates the factorial of `n`.
template <std::unsigned_integral T>
[[nodiscard]] constexpr T factorial(T n) noexcept {
    T ret = n;
    while (n > 1)
        ret *= (--n);
    return ret;
}

#endif    // UTIL_HPP
