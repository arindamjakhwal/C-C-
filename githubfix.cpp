#include <iostream>
#include <random> // Core library for modern C++ random numbers

int main() {
    // 1. Obtain a random seed from the hardware
    std::random_device rd;

    // 2. Initialize the Mersenne Twister pseudo-random number generator engine with the seed
    std::mt19937 gen(rd());

    // 3. Define the distribution range [inclusive, inclusive]
    // Change these values to set your own custom range
    int min_val = 1;
    int max_val = 100;
    std::uniform_int_distribution<int> distrib(min_val, max_val);

    std::cout << "Generating 5 random numbers between " << min_val << " and " << max_val << ":\n";

    // 4. Generate and print the random numbers
    for (int i = 0; i < 5; ++i) {
        int random_num = distrib(gen);
        std::cout << "Number " << (i + 1) << ": " << random_num << "\n";
    }

    return 0;
}
