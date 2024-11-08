//
// Created by BELLAHSENE Mehdi Redha on 08/11/2024.
//
#include "movietype.h"
#include <iostream>

namespace show {
    MovieType::MovieType(const std::string &name)
        : name_(name) {}

    const MovieType MovieType::ACTION("Action");
    const MovieType MovieType::ADVENTURE("Adventure");
    const MovieType MovieType::COMEDY("Comedy");
    const MovieType MovieType::DRAMA("Drama");
    const MovieType MovieType::ROMANCE("Romance");
    const MovieType MovieType::SCIENCE_FICTION("Science Fiction");
    const MovieType MovieType::THRILLER("Thriller");
}