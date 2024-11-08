#include <string>
#include <iostream>
#include "./../show/ishow.h"
#include "./../show/theatershow.h"
#include "./../show/movieshow.h"
#include <vector>

namespace customer {

    class Spectator {
    private:
        std::string firstName;
        std::string lastName;

    public:
        Spectator(const std::string& firstName, const std::string& lastName)
            : firstName(firstName), lastName(lastName) {}

        std::string getFirstName() const { return firstName; }
        std::string getLastName() const { return lastName; }

        void watch(const show::IShow& show) const {
            std::cout << "Spectateur: " << firstName << " " << lastName << std::endl;
            std::cout << " Show regardé: " << show.getName() << std::endl;
            std::cout << "Description: " << show.getDescription() << std::endl;
            std::cout << "Type: " << static_cast<int>(show.getShowType()) << std::endl;

            if (const auto* theaterShow = dynamic_cast<const show::TheaterShow*>(&show)) {
                std::cout << "Director: " << theaterShow->getDirector() << std::endl;
                std::cout << "Actors: ";
                for (const auto& actor : theaterShow->getActors()) {
                    std::cout << actor << " ";
                }
                std::cout << std::endl;
            } else if (const auto* movieShow = dynamic_cast<const show::MovieShow*>(&show)) {
                std::cout << "Director: " << movieShow->getDirector() << std::endl;
                std::cout << "Year of Release: " << movieShow->getYearOfRelease() << std::endl;
                std::cout << "Movie Type: " << movieShow->getMovieType().getName() << std::endl;
            }

            std::cout << std::endl;
        }
    };

} // namespace customer