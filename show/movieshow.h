#ifndef MOVIESHOW_H
#define MOVIESHOW_H

#include "show.h"
#include <string>

#include "movietype.h"

namespace show {


    class MovieShow : public Show {
    private:
        std::string director;
        std::string yearOfRelease;
        MovieType movieType;

    public:
        MovieShow(const std::string& name, const std::string& description, const std::string& director, const std::string& yearOfRelease, MovieType movieType)
            : Show(name, description, ShowType::MOVIE), director(director), yearOfRelease(yearOfRelease), movieType(movieType) {}

        std::string getDirector() const { return director; }
        std::string getYearOfRelease() const { return yearOfRelease; }
        MovieType getMovieType() const { return movieType; }
    };
}

#endif // MOVIESHOW_H