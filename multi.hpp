//
// Created by brian on 4/15/15.
//
#ifndef MULTI_HPP
#define MULTI_HPP
#include <array>
#include <vector>

namespace multi
{
    template <class T, size_t N, size_t ... Ns>
    struct array_helper;

    template <class T, size_t N>
    struct array_helper <T, N>
    {
        using type = std::array<T, N>;
    };

    template <class T, size_t N, size_t ... Ns>
    struct array_helper
    {
        using type = std::array<typename array_helper<T, Ns...>::type, N>;
    };

    template <class T, size_t ... Ns>
    using array = typename array_helper<T, Ns...>::type;


    template <class T, size_t N>
    struct vector_helper;

    template <class T>
    struct vector_helper <T, 1>
    {
        using type = std::vector<T>;
    };

    template <class T, size_t N>
    struct vector_helper
    {
        using type = std::vector<typename vector_helper<T, N - 1>::type>;
    };

    template <class T, size_t N>
    using vector = typename vector_helper<T, N>::type;
}

#endif //MULTI_HPP
