#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x+=1; }

bool isOdd(int x) { if (x%2=0) { 
    return false;} }

int floatToInt(float x) { 
    int x_int=static_cast<int>(std::round(x));   // If I understud corectly it was so it should be done to convert a float number to an int number
    return 0; 



}

int factorial(int n) { 
    l=1
    (if n<0) {
    return -1};

    (if n==1){return l};
    (if n > 1)
        while n >1
        {l = l*n; (n-=1);};
    return l }                         // The best I could findout this time

}; // namespace homework
