#include <iostream>
#include <vector>
#include <math.h>
#include <set>

using std::cout;
using std::vector;
using std::sqrt;

bool isPrime( int value );

std::set<int> primes{2,3,5,7};

int main() {

    long bigNum = 13195;// 600851475143;

    int largePrime = 2;
    for ( int i = 3; i <= bigNum; i += 2 ) {
        if ( isPrime( i ) && bigNum % i ==0 ) {
            bigNum /= i;
            largePrime = i;
        }      
    }
    cout << "\n" << largePrime << "\n";
    return 0;
}

bool isPrime( int value ) {
    if ( primes.find( value ) != primes.end( ) ) {
        return true;
    } else {
        for ( auto itor = primes.begin( ); itor != primes.end( ) 
                    && *itor <= std::floor(sqrt(value)); ++itor ) {
            if ( value % *itor == 0 ) {
                return false;
            }
        }
        cout << "\n Adding prime: " << value  << "\n";
        primes.insert(value);
        return true;
    } 
}