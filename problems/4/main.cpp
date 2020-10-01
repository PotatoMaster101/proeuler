////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 4:
// https://projecteuler.net/problem=4
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>        // std::max
#include <concepts>
#include "../math/math.hpp"

// Checks whether `n` is a palindrome.
template <std::unsigned_integral T>
constexpr bool is_palin(T n) {
    T forward = n, reverse = 0;
    while (n != 0) {
        auto digit = n % 10;
        n /= 10;
        reverse = reverse * 10 + digit;
    }
    return reverse == forward;
}

// Bruteforce the maximum palindrome.
template <std::unsigned_integral T>
constexpr T max_palin(T low, T up) {
    T ret = 0;
    for (auto i = up; i >= low; i--) {
        for (auto j = i; j >= low; j--) {
            auto prod = i * j;
            if (is_palin(prod))
                ret = std::max(prod, ret);
        }
    }
    return ret;
}

int main() {
    /*constexpr*/ auto ans = max_palin(uint64{100}, uint64(999));
    std::cout << ans << std::endl;      // 906609
    return 0;
}
