#ifndef THEATERSHOW_H
#define THEATERSHOW_H

#include "show.h"
#include <string>
#include <vector>

namespace show {
    class TheaterShow : public Show {
    private:
        std::string director;
        std::vector<std::string> actors;

    public:
        TheaterShow(const std::string& name, const std::string& description, const std::string& director, const std::vector<std::string>& actors)
            : Show(name, description, ShowType::THEATER), director(director), actors(actors) {}

        std::string getDirector() const { return director; }
        std::vector<std::string> getActors() const { return actors; }
    };
}

#endif // THEATERSHOW_H