#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {

    static const int MAXVAL = 4000000;
    vector<int> fib{1,2};
    // starting fib with 2 already. Sum must reflect this
    int sum = 2;

    for ( int i = 2; fib.back() < MAXVAL; ++i ) {
        int nextFib = fib[i-1] + fib[i-2];
        sum += ( ( nextFib % 2 == 0 ) ? nextFib : 0 );
        fib.emplace_back ( nextFib );
    }
    cout << "\n" << sum << "\n";

    return 0;
}