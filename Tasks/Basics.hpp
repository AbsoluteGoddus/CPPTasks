#pragma once

///////////////////////////
///        DOCS         ///
///////////////////////////

/**
 *  \file Basics.hpp
 *  \brief Basics Task.
 *
 *  \since 1.0
 */

///////////////////////////
///        CODE         ///
///////////////////////////

#include <cstdio>

inline bool BasicTask(const int a) {
    printf("Evaluating argument... ");
    if (a == 6) {
        printf("You did it!");
    } else {
        printf("You failed :(");
    }

    return a != 6;
}