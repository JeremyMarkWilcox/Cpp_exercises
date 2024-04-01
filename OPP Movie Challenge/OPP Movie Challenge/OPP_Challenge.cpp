#include "Movies.h"
#include <iostream>

int main() {
    Movies my_movies;
    std::cout << "Adding movies..." << std::endl;

    if (my_movies.add_movie("Big", "PG-13", 2)) {
        std::cout << "Added 'Big'" << std::endl;
    }
    else {
        std::cout << "Failed to add 'Big'" << std::endl;
    }

    if (my_movies.add_movie("Star Wars", "PG", 5)) {
        std::cout << "Added 'Star Wars'" << std::endl;
    }
    else {
        std::cout << "Failed to add 'Star Wars'" << std::endl;
    }

    std::cout << "Displaying movies:" << std::endl;
    my_movies.display();

    return 0;
}
