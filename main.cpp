#include "inf_int.h"
#include <iostream>

using namespace std;

int main() {
    inf_int b(100);
    inf_int c("321111111111122222222222233333333333444444444445555555555111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");
    inf_int d("123451987651234572749499923455022211");

    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;

    return 0;
}
