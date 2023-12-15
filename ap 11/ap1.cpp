
#include <iostream>

int main() {
    int X = 10;
    int Y = 23;
    int temp;

    std::cout << "Sebelum ditukar: X = " << X << ", Y = " << Y << std::endl;

    temp = X;
    X = Y;
    Y = temp;

    std::cout << "Setelah ditukar: X = " << X << ", Y = " << Y << std::endl;

    return 0;
}