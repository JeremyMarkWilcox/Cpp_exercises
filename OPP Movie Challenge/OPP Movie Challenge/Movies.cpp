#include "Movies.h"
#include <iostream>

Movies::Movies() {
}

Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const auto& movie : collection) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    collection.emplace_back(name, rating, watched);
    return true; 
}

bool Movies::increment_watched(std::string name) {
    for (auto& movie : collection) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true; 
        }
    }
    return false;
}

void Movies::display() const {
    if (collection.empty()) {
        std::cout << "No movies to display." << std::endl;
    }
    else {
        for (const auto& movie : collection) {
            movie.display();
        }
    }
}