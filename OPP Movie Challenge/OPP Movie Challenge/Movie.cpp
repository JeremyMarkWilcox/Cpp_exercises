#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {
}

Movie::Movie(const Movie& source)
    : name(source.name), rating(source.rating), watched(source.watched) {
}

Movie::~Movie() {
}

void Movie::increment_watched() {
    ++watched;
}

std::string Movie::get_name() const {
    return name;
}

void Movie::display() const {
    std::cout << "Name: " << name << ", Rating: " << rating << ", Watched: " << watched << std::endl;
}
