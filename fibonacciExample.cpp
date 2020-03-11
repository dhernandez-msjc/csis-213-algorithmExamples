// David C Hernandez
// Fibonacci Sequence

#include <iostream>
using namespace std;

// prototype functions
unsigned fibonacciNumber(unsigned nthTerm);

int main() {
    // simulate fibonacci calculation
    cout << "Enter nth term: ";
    int nthTerm;
    cin >> nthTerm;

    // error check for invalid entry
    if (nthTerm < 0) {
        cout << "Invalid entry ..." << endl;
        return -1;
    }

    // display value
    cout << "f(" << nthTerm << ") = " << fibonacciNumber(nthTerm) << endl;

    return 0;
}

// Fibonacci Number
// Determines the fibonacci value of the given nth term.
// @param: nthTerm is the index of the term in the fib sequence to obtain.
//         domain: {0, 1, 2, ...}
// @return: an unsigned integer representing the value of the nth term
//         range: {0, 1, 1, 2, 3, 5, ... }
unsigned fibonacciNumber(unsigned nthTerm) {
    // declare and initialize an array of recent terms for n = 0, n = 1, n = 2
    unsigned recentTerms [] = {0, 1, 1};

    // determine if the value entered is 2 or less
    if (nthTerm <= 2) return recentTerms[nthTerm];

    // iterate through terms to find nth term
    for (unsigned term = 3; term <= nthTerm; ++term) {
        // shift terms to the left
        recentTerms[0] = recentTerms[1];
        recentTerms[1] = recentTerms[2];

        // calculate next sequence value
        recentTerms[2] = recentTerms[0] + recentTerms[1];
    }

    // return the nth term
    return recentTerms[2];
}

