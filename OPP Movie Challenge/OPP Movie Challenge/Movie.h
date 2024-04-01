#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name, std::string rating, int watched);
    Movie(const Movie& source);
    ~Movie();

    void increment_watched();
    void display() const;
    std::string get_name() const;
    int get_watched() const;
};

#endif
