#include <iostream>
using namespace std;

// Function to find GCD
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long n1, n2;
    cin >> n1 >> n2;

    cout << gcd(n1, n2);

    return 0;
}
