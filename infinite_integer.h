#ifndef _INF_INT_H_
#define _INF_INT_H_

#include <iostream>

class inf_int {
private:
    char* digits;          // Array to store digits in reverse order
    unsigned int length;    // Length of the number
    bool thesign;           // true if positive, false if negative

    void initFromString(const char* str); // Helper function to initialize from string

public:
    inf_int();                     // Default constructor
    inf_int(int);                  // Integer constructor
    inf_int(const char*);          // String constructor
    inf_int(const inf_int&);       // Copy constructor
    ~inf_int();                    // Destructor

    inf_int& operator=(const inf_int&);   // Assignment operator

    friend std::ostream& operator<<(std::ostream&, const inf_int&);
};

#endif
