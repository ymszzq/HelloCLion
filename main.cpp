#include <iostream>
#include "gcd.hpp"

// Greatest Common Denominator
// PRE : a is a positive integer
// PRE : b is a positive integer
// POST : a and b are unchanged
// RETURN : the greatest common denominator of
// a and b.
int gcd ( const int a, const int b){
    int temp = a;
    while(temp>0){
        if(a%temp==0&&b%temp==0)
            return temp;
        temp--;
    }

}
int main() {
    std::cout << gcd(35,20) << std::endl;

    return 0;
}