#ifndef CONCERTSHOW_H
#define CONCERTSHOW_H

#include "show.h"
#include <string>

namespace show {
    class ConcertShow : public Show {
    private:
        std::string artist;

    public:
        ConcertShow(const std::string& name, const std::string& description, const std::string& artist)
            : Show(name, description, ShowType::CONCERT), artist(artist) {}

        std::string getArtist() const { return artist; }
    };
}

#endif // CONCERTSHOW_H