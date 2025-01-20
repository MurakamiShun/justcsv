/*
 * justcsv: https://github.com/MurakamiShun/justcsv
 * Copyright (c) 2025 MurakamiShun
 * 
 * Released under the MIT License.
 */
#pragma once
#include <type_traits>
#include <tuple>
#include <string_view>
#include <string>
#include <sstream>

#ifndef JUSTCSV_MAX_MEMBER_COUNT
#define JUSTCSV_MAX_MEMBER_COUNT 32
#endif

namespace jcsv{

namespace tuptup{ // https://github.com/MurakamiShun/tuptup/
    namespace detail{
        template<typename T>
        constexpr auto make_reference_tuple([[maybe_unused]]T&, [[maybe_unused]] std::integral_constant<std::size_t, 0>) noexcept {
            return std::tuple<>{};
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 1>) noexcept {
            auto& [a0] = arg;
            return std::tie(a0);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 2>) noexcept {
            auto& [a0,a1] = arg;
            return std::tie(a0,a1);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 3>) noexcept {
            auto& [a0,a1,a2] = arg;
            return std::tie(a0,a1,a2);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 4>) noexcept {
            auto& [a0,a1,a2,a3] = arg;
            return std::tie(a0,a1,a2,a3);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 5>) noexcept {
            auto& [a0,a1,a2,a3,a4] = arg;
            return std::tie(a0,a1,a2,a3,a4);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 6>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 7>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 8>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 9>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8);
        }
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 10>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
        }
        #if JUSTCSV_MAX_MEMBER_COUNT > 10
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 11>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 11
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 12>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 12
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 13>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 13
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 14>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 14
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 15>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 15
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 16>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 16
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 17>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        );
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 17
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 18>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 18
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 19>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 19
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 20>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 20
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 21>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 21
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 22>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 22
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 23>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 23
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 24>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 24
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 25>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 25
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 26>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 26
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 27>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 27
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 28>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 28
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 29>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 29
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 30>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 30
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 31>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 31
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 32>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 32
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 33>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        );
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 33
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 34>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 34
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 35>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 35
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 36>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 36
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 37>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 37
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 38>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 38
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 39>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 39
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 40>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 40
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 41>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 41
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 42>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 42
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 43>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 43
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 44>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 44
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 45>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 45
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 46>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 46
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 47>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 47
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 48>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 48
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 49>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        );
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 49
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 50>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 50
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 51>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 51
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 52>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 52
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 53>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 53
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 54>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 54
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 55>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 55
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 56>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 56
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 57>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 57
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 58>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 58
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 59>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 59
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 60>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 60
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 61>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 61
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 62>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 62
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 63>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62);
        }
        #endif
        #if JUSTCSV_MAX_MEMBER_COUNT > 63
        template<typename T>
        constexpr auto make_reference_tuple(T& arg, [[maybe_unused]] std::integral_constant<std::size_t, 64>) noexcept {
            auto& [a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62,a63] = arg;
            return std::tie(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16
                        ,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32
                        ,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48
                        ,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62,a63);
        }
        #endif
    }

    template<typename T, typename std::enable_if<std::is_aggregate<T>::value, std::nullptr_t>::type = nullptr>
    struct struct_as_tuple {
    private:
        template<auto>
        struct anything {
            template<typename Type>
            operator Type && () const&& noexcept;
        };

        template<auto>
        struct any_base {
            template<typename Type, typename std::enable_if<std::is_base_of<Type, T>::value, std::nullptr_t>::type = nullptr>
            operator Type && () const&& noexcept;
        };

        template<template<auto>class Any, std::size_t... I>
        static constexpr auto initializable(std::index_sequence<I...>, int) noexcept
            -> decltype(T{ (Any<I>{})... }, bool{}) {
            return true;
        }
        template<template<auto>class Any, std::size_t... I>
        static constexpr auto initializable(std::index_sequence<I...>, char) noexcept {
            return false;
        }

        template<template<auto>class Any, std::size_t N>
        static constexpr std::size_t max_initializable_arg_count() noexcept {
            if constexpr(!initializable<Any>(std::make_index_sequence<N>{}, 0)) return N-1;
            else return max_initializable_arg_count<Any, N+1>();
        }
    public:
        static constexpr std::size_t base_class_num = []() constexpr noexcept {
            return max_initializable_arg_count<any_base, 0>();
        }();

        static constexpr std::size_t variable_num = []() constexpr noexcept {
           return max_initializable_arg_count<anything, base_class_num>();
        }() - base_class_num;

        using type = decltype(detail::make_reference_tuple(std::declval<T&>(), std::integral_constant<std::size_t, variable_num>{}));
    };

    namespace detail{
        struct make_tuple_from_struct_impl{
            template<typename Tup, std::size_t... I>
            static auto make_tuple_by_move_impl(Tup& tup, std::index_sequence<I...>){
                return std::make_tuple(std::move(std::get<I>(tup)...));
            }
            template<typename Tup>
            static auto make_tuple_by_move(Tup& tup) {
                return make_tuple_by_move_impl(tup, std::make_index_sequence<std::tuple_size_v<Tup>>{});
            }
            template<typename Tup, std::size_t... I>
            static auto make_tuple_impl(Tup& tup, std::index_sequence<I...>){
                return std::make_tuple(std::get<I>(tup)...);
            }
            template<typename Tup>
            static auto make_tuple(Tup& tup) {
                return make_tuple_impl(tup, std::make_index_sequence<std::tuple_size_v<Tup>>{});
            }
        };
    }

    template<typename T>
    constexpr auto tie_as_tuple(T&& t) noexcept {
      return detail::make_reference_tuple(t, std::integral_constant<std::size_t, struct_as_tuple<std::remove_cv_t<std::remove_reference_t<T>>>::variable_num>{});
    }

    template<typename T>
    constexpr auto make_as_tuple(T&& t){
        auto member_ref_tuple = tie_as_tuple(t);
        if constexpr(std::is_rvalue_reference_v<T>){
            return detail::make_tuple_from_struct_impl::make_tuple_by_move(member_ref_tuple);
        }
        else{
            return detail::make_tuple_from_struct_impl::make_tuple(member_ref_tuple);
        }
    }


    // tuptup/member_name.hpp
    #ifdef __clang__
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wundefined-var-template"
    #endif
    namespace detail{
        template<auto D>
        class value_name {
        private:
            static constexpr auto impl(){
                #ifdef _MSC_VER
                constexpr auto str_ptr = __FUNCTION__;
                constexpr auto offset = std::char_traits<char>::length("detail::value_name<");
                constexpr auto begin = str_ptr + offset + std::char_traits<char>::length(str_ptr[offset] == 's' ? "struct " : "class ");
                
                constexpr auto end_pos = std::string_view(str_ptr).rfind("}>::impl");
                constexpr auto end = std::addressof(str_ptr[end_pos]);
                #elif defined(__clang__)
                constexpr auto str_ptr = __PRETTY_FUNCTION__;
                constexpr auto begin = std::char_traits<char>::find(str_ptr, std::char_traits<char>::length(str_ptr), '[') + std::char_traits<char>::length("D = ");
                constexpr auto end = std::char_traits<char>::find(str_ptr, std::char_traits<char>::length(str_ptr), ']');
                #elif defined(__GNUC__)
                constexpr auto str_ptr = __PRETTY_FUNCTION__;
                constexpr auto begin = std::char_traits<char>::find(str_ptr, std::char_traits<char>::length(str_ptr), '[') + std::char_traits<char>::length(" with auto D = ");
                constexpr auto end = std::char_traits<char>::find(str_ptr, std::char_traits<char>::length(str_ptr), ']');
                #endif
                return std::string_view(begin, std::distance(begin, end));
            }
        public:
            static constexpr auto value = impl();
        };


        #ifdef _MSC_VER
        template<typename T>
        constexpr T fake_obj = {};
        #else 
        template<typename T>
        extern const T fake_obj;
        #endif

        template <typename T>
        struct fake_member_ptr{const T* ptr;};
    }

    template <std::size_t N, typename T>
    constexpr auto get_name(){
        constexpr auto& p = std::get<N>(tie_as_tuple(detail::fake_obj<std::remove_cvref_t<T>>));
        constexpr auto ptr_str = detail::value_name<detail::fake_member_ptr<std::remove_cvref_t<decltype(p)>>{std::addressof(p)}>::value;
        #ifdef _MSC_VER
        constexpr auto begin = ptr_str.rfind(">.") + 2;
        constexpr auto end = ptr_str.length();
        #elif defined(__clang__)
        constexpr auto begin = ptr_str.rfind("{&fake_obj.") + 11;
        constexpr auto end = ptr_str.rfind("}");
        #elif defined(__GNUC__)
        constexpr auto begin = ptr_str.rfind("::") + 2;
        constexpr auto end = ptr_str.rfind(")}");
        #endif
        return ptr_str.substr(begin, end - begin);
    }

    #ifdef __clang__
    #pragma clang diagnostic pop
    #endif

}// namespace tuptup

namespace detail{
    template<typename Head, typename... Tail>
    void format(std::ostringstream& oss, const std::tuple<Head, Tail...>& ref_tup, char split_char){
        if constexpr(sizeof...(Tail) == 0){
            oss << std::get<0>(ref_tup) << std::endl;
        } else {
            oss << std::get<0>(ref_tup) << split_char;
            format(
                oss,
                [&]<std::size_t... I>(std::index_sequence<I...>){
                    return std::make_tuple(std::get<I+1>(ref_tup)...);
                }(std::make_index_sequence<sizeof...(Tail)>{}),
                split_char
            );
        }
    }
}

struct cfg{
    char split = ',';
    char header = false;
};

template<typename T>
requires std::is_aggregate_v<typename std::remove_cvref_t<T>::value_type>
std::string format(T&& container, cfg c){
    using entry_t = typename std::remove_cvref_t<T>::value_type;

    std::ostringstream oss;
    if(c.header){
        [&]<std::size_t... I>(std::index_sequence<I...>){
            const std::string_view member_names[sizeof...(I)] = {
                tuptup::get_name<I, entry_t>()...,
            };
            for(std::size_t i = 0; i < sizeof...(I); ++i){
                oss << member_names[i];
                if(i != sizeof...(I) - 1){
                    oss << c.split;
                } else {
                    oss << std::endl;
                }
            }
        }(std::make_index_sequence<std::tuple_size_v<typename tuptup::struct_as_tuple<entry_t>::type>>{});
    }

    for(const auto& entry : container){
        const auto ref_tup = tuptup::tie_as_tuple(entry);
        detail::format(oss, ref_tup, c.split);
    }

    return std::move(oss.str());
}


} // namespace jcsv