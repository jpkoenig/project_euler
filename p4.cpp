#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using std::cout;
using std::vector;
using std::string;

bool isPalindrome( int value);

int main( ) {
    int max = 0;
    for ( int i = 999; i > 99; --i ) {
        for ( int y = i; y > 99; --y ) {
            int mult = i * y;
            if ( isPalindrome ( mult ) && max < mult ) {
                cout << "\n" << i << " * "  << y << " = " << i * y << "\n";
                max = mult;
            }
        }
    }
    return 0;
}

bool isPalindrome( int value ) {
    string s_value = std::to_string( value );
    size_t length = s_value.size( );
    for ( size_t i = 0; i < length / 2; ++i ) {
        if ( s_value[ i ] != s_value[ length - i - 1 ] ) {
          return false;
        }
    }
    return true;
}