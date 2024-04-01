#include <algorithm> 
#include <cctype>    

class Mystring {
private:
    char* str; 

public:
    Mystring operator-() const {
        Mystring temp{ *this }; 
        std::transform(temp.str, temp.str + std::strlen(temp.str), temp.str,
            [](unsigned char c) { return std::tolower(c); });
        return temp;
    }

    bool operator==(const Mystring& rhs) const {
        return std::strcmp(str, rhs.str) == 0;
    }

    bool operator!=(const Mystring& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Mystring& rhs) const {
        return std::strcmp(str, rhs.str) < 0;
    }

    bool operator>(const Mystring& rhs) const {
        return rhs < *this;
    }

    Mystring operator+(const Mystring& rhs) const {
    }

    Mystring& operator+=(const Mystring& rhs) {
        return *this;
    }

    Mystring operator*(int n) const {
    }

    Mystring& operator*=(int n) {
        return *this;
    }

    Mystring& operator++() {
        return *this;
    }

    Mystring operator++(int) {
        Mystring temp{ *this }; 
        ++(*this);           
        return temp;        
    }
};

int main() {

    return 0;
}
