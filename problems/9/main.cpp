////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Euler problem 9:
// https://projecteuler.net/problem=9
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <concepts>
#include "../math/math.hpp"

// Determines whether the given triplet `t` is a Pythagorean triplet.
template <std::unsigned_integral T>
constexpr bool is_trip(const triplet<T>& t) {
    auto [a, b, c] = t;
    return ((a * a + b * b - c * c) == 0) && (a < b);
}

// Computes the Pythagorean triplet such that a + b + c = `limit`.
template <std::unsigned_integral T>
constexpr triplet<T> get_trip(T limit) {
    const auto half = limit / 2;
    for (T a = 1; a <= half; a++) {
        for (T b = a + 1; b <= half; b++) {
            auto c = limit - b - a;
            if (is_trip<T>({a, b, c}))
                return {a, b, c};
        }
    }
    return {0, 0, 0};
}

int main() {
    /*constexpr*/ auto trip = get_trip(uint64{1000});
    auto [a, b, c] = trip;
    std::cout << (a * b * c) << std::endl;      // 31875000
    return 0;
}
