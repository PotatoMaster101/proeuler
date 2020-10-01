////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Custom types for doing Project Euler.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TYPE_HPP
#define TYPE_HPP
#include <concepts>
#include <utility>
#include <tuple>
#include <cstdint>
#include <cstddef>

// Templates.
template <std::integral T>
using triplet = std::tuple<T, T, T>;

// Types.
using int32 = std::int32_t;
using uint32 = std::uint32_t;
using int64 = std::int64_t;
using uint64 = std::uint64_t;
using index = std::size_t;
using index2d = std::pair<index, index>;
using index3d = triplet<index>;

#endif    // TYPE_HPP
