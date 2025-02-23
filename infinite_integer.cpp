#include "inf_int.h"
#include <cstring>
#include <cstdlib>

// Helper function to initialize from a string
void inf_int::initFromString(const char* str) {
    length = strlen(str);
    thesign = true;  // assume positive

    if (str[0] == '-') {
        thesign = false;
        length--;
        str++;
    }

    digits = new char[length + 1];
    for (unsigned int i = 0; i < length; i++) {
        digits[i] = str[length - i - 1];
    }
    digits[length] = '\0';
}

// Default constructor (sets to zero)
inf_int::inf_int() {
    digits = new char[2];
    digits[0] = '0';
    digits[1] = '\0';
    length = 1;
    thesign = true;
}

// Integer constructor
inf_int::inf_int(int num) {
    if (num == 0) {
        inf_int();
        return;
    }
    thesign = (num >= 0);
    num = std::abs(num);

    length = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        length++;
    }

    digits = new char[length + 1];
    for (unsigned int i = 0; i < length; i++) {
        digits[i] = '0' + (num % 10);
        num /= 10;
    }
    digits[length] = '\0';
}

// String constructor
inf_int::inf_int(const char* str) {
    initFromString(str);
}

// Copy constructor
inf_int::inf_int(const inf_int& other) {
    length = other.length;
    thesign = other.thesign;
    digits = new char[length + 1];
    strcpy(digits, other.digits);
}

// Destructor
inf_int::~inf_int() {
    delete[] digits;
}

// Assignment operator
inf_int& inf_int::operator=(const inf_int& other) {
    if (this == &other) {
        return *this;
    }

    delete[] digits;
    length = other.length;
    thesign = other.thesign;
    digits = new char[length + 1];
    strcpy(digits, other.digits);

    return *this;
}

// Output operator to print inf_int
std::ostream& operator<<(std::ostream& os, const inf_int& num) {
    if (!num.thesign) {
        os << '-';
    }
    for (int i = num.length - 1; i >= 0; i--) {
        os << num.digits[i];
    }
    return os;
}
