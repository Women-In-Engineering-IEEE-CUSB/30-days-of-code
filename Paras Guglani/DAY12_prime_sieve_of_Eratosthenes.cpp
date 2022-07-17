#include <iostream>
using namespace std;

// We will find all primes in the range 1 to 120
int const N = 121;
int is_prime[N];

bool sieve() {
    // We cross out all composites from 2 to sqrt(N)
    int i=2;
    // This will loop from 2 to int(sqrt(x))
    while(i*i <= N) {
        // If we already crossed out this number, then continue
        if(is_prime[i] == 0) {
            i++;
            continue;
        }
        int j = 2*i;
        while(j < N) {
            // Cross out this as it is composite
            is_prime[j] = 0;
            // j is incremented by i, because we want to cover all multiples of i
            j += i;
        }
        i++;
    }
}

int main() {
    // is_prime[i] = 1 means that i is prime and is_prime[i] = 0 means that i is composite
    // Initially, we say all of them are prime
    for(int i=0; i<N; i++) {
        is_prime[i] = 1;
    }
    // We know 0 and 1 are composites
    is_prime[0] = 0;
    is_prime[1] = 0;
    sieve();
    // Print all the primes in between 1 and 121
    for(int i=1; i<N; i++) {
        if(is_prime[i] == 1) {
            cout << i << " ";
        }
    }
    // Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113
    return 0;
}
