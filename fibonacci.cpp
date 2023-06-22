#include <iostream>
#include <vector>

std::vector<unsigned int> fib;

unsigned int fibonacci(unsigned int n) {
    if (fib[n] != 0) {
        return fib[n];
    }

    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}

int main() {
    unsigned int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Initializing the Fibonacci cache
    fib.resize(n + 1, 0);
    fib[0] = 0;
    fib[1] = 1;

    // Calculate the nth Fibonacci number
    unsigned int result = fibonacci(n);

    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}