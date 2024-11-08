#include "show/concertshow.h"
#include "show/streetshow.h"
#include "show/theatershow.h"
#include "show/movieshow.h"
#include <iostream>
#include <vector>

using namespace show;

int main(int argc, char* argv[]) {
    // Example usage
    ConcertShow concert("Les Guignols en tournée d'Europe", "La comédie à son paroxysme", "Guignol");
    StreetShow street("Les Arts martiaux au cœur de l'Europe", "Performance sportive", {"Bruce Lee", "Van Damme", "Jackie Chan"});
    TheaterShow theater("Le Comédie Show", "La désertification", "Jamel Debbouze", {"Amir", "Brahim", "Beyoncé"});
    MovieShow movie("Shrek", "Le meilleur film de tous les temps", "Jacques Tati", "2014", MovieType::COMEDY);

    std::vector<IShow*> shows = {&concert, &street, &theater, &movie};

    for (const auto& show : shows) {
        std::cout << "Name: " << show->getName() << std::endl;
        std::cout << "Description: " << show->getDescription() << std::endl;
        std::cout << "Type: " << static_cast<int>(show->getShowType()) << std::endl;
        std::cout << std::endl;
    }

    return 0;
}