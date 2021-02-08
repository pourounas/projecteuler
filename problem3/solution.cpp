#include <iostream>
#include <cmath>


bool isPrime (long n) {
    if ((n == 2) or (n == 3)) {
	return true;
    }
    std::cout << "isPrime checking " << n << '\n';
    bool isPrime = true;
    for (auto j = 2; j < n/2; j++) {
	if (n % j == 0) {
	    isPrime = false;
	    break;
	}
    }
    return isPrime;
}


void largestPrimeFactor(long n) {
    // We start with the largest factor
    // Get this by diving with 2 and so on
    // Check if the factor is prime
    for (auto i = 2; i < n; i++) {
	if (n % i != 0) {
	    continue;
	}
	auto number = n / i;
	std::cout << "checking " << number << " (" << i <<")" << '\n';
	bool prime = isPrime(number);
	if (prime) {
	    std::cout << "Largest prime factor of " << n << " is " << number <<'\n';
	    return;
	}
    }
    std::cout << "Largest prime factor of " << n << " is 1" << '\n';
}


int main() {
    long n = 0;
    while ((1) or (n != 0)) {
	std::cout << "Enter a number: "; 
	std::cin >> n;
	if (std::cin.fail()) {
	    std::cout << "That wasnt a number" << '\n';
	    return 0;
	}
	largestPrimeFactor(n);
    }
    return 0;
}
