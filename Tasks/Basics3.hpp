#pragma once

///////////////////////////
///        DOCS         ///
///////////////////////////

/**
 *  \file Basics3.hpp
 *  \brief Desc
 *
 *  \since 1.0
 */

///////////////////////////
///        CODE         ///
///////////////////////////

#include <algorithm>
#include <cstdio>
#include <functional>
#include <vector>

inline void run(const std::function<std::vector<int>(std::vector<int>)>& func) {
    std::vector vec = {8, 1, 5, 19, 20, 11, 9, 2, 6, 3, 15, 16, 21};
    std::vector<int> cmp = vec;
    std::sort(cmp.begin, cmp.end);
    vec = func(vec);
    if (cmp == vec) {
        printf("You did it!!! You wrote a sorter!!!");
        exit(0);
    } else {
        printf("You didn't sort correctly.");
        exit(-1);
    }
}