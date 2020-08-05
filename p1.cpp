#include <iostream>

using std::cout;

int main() {

    static const int MAXVAL = 1000;
    int sum = 0;

    for (int i = 1; i < MAXVAL; ++i){

        // cout << "\n" << sum << "\n";

        if ( i % 3 == 0 ) {
            sum += i;
        }
        else {
            sum += ( i % 5 == 0 ? i : 0);
        }

    }
    cout << "\n" << sum << "\n";

    return 0;
}