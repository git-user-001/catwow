#include <time.h>
#include <random>
#include <iostream>
const int runs = 10;

void oldRng(){
    srand(time(nullptr));
    for (unsigned short i = 0; i < runs; i++) {
        std::cout << i << ": " << rand() << std::endl;
    }
}

void cpp11Rng() {
//    std::random_device rd;
//    std::mt19937 mt(rd);
//    std::uniform_int_distribution distribution(0, 10);
//    std::uniform_int_distribution<int> distribution(1,6);
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(1.0, 10.0);

    for (unsigned short i = 0; i < runs; i++) {
        std::cout << i << ": " << dist(mt) << std::endl;
    }
}

int randTest() {
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl;
    std::cout << "short: " << sizeof(short) << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "long: " << sizeof(long) << std::endl;
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    oldRng();
    cpp11Rng();
}
