#include "show/concertshow.h"
#include "show/streetshow.h"
#include "show/theatershow.h"
#include "show/movieshow.h"
#include "customer/Spectator.h"
#include <vector>
using namespace show;
using namespace customer;

int main() {
    Spectator *jad = new Spectator("Jean-Aymeric", "DIET");
    std::vector<IShow *> shows;

    ConcertShow concert("Les Guignols en tournée d'Europe", "La comédie à son paroxysme", "Guignol");
    StreetShow street("Les Arts martiaux au cœur de l'Europe", "Performance sportive", {"Bruce Lee", "Van Damme", "Jackie Chan"});
    TheaterShow theater("Le Comédie Show", "La désertification", "Jamel Debbouze", {"Amir", "Brahim", "Beyoncé"});
    MovieShow movie("Shrek", "Le meilleur film de tous les temps", "Jacques Tati", "2014", MovieType::COMEDY);

    shows.push_back(&concert);
    shows.push_back(&street);
    shows.push_back(&theater);
    shows.push_back(&movie);

    for (IShow *show : shows) {
        jad->watch(*show);
    }

    delete jad;

    return 0;
}