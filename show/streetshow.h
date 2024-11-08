#ifndef STREETSHOW_H
#define STREETSHOW_H

#include "show.h"
#include <string>
#include <vector>

namespace show {
    class StreetShow : public Show {
    private:
        std::vector<std::string> performers;

    public:
        StreetShow(const std::string& name, const std::string& description, const std::vector<std::string>& performers)
            : Show(name, description, ShowType::STREET_SHOW), performers(performers) {}

        std::vector<std::string> getPerformers() const { return performers; }
    };
}

#endif // STREETSHOW_H