#include <iostream>
using namespace std;

// Function to calculate sum of digits
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int sumDigits = digitSum(n);
    int sumPrimeFactors = 0;

    // Check for prime factors
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            sumPrimeFactors += digitSum(i);
            n /= i;
        }
    }

    // Check if number is composite and Boston
    if (sumDigits == sumPrimeFactors && original != 1) {
        cout << original << " is a Boston Number.";
    } else {
        cout << original << " is not a Boston Number.";
    }

    return 0;
}
