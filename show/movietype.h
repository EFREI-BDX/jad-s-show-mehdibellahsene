#ifndef MOVIETYPE_H
#define MOVIETYPE_H

#include <string>

namespace show {
    class MovieType {
    public:
        static const MovieType ACTION;
        static const MovieType ADVENTURE;
        static const MovieType COMEDY;
        static const MovieType DRAMA;
        static const MovieType ROMANCE;
        static const MovieType SCIENCE_FICTION;
        static const MovieType THRILLER;

        [[nodiscard]] std::string getName() const { return name_; }

    private:
        std::string name_;
        std::string description_;
        MovieType(const std::string &name);
    public:
        ~MovieType() = default;
    };
}

#endif // MOVIETYPE_H