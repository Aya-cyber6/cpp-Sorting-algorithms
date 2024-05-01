#include <iostream>
#include <fstream>
#include <random>

int main() {
    // Open the file for writing
    std::ofstream outFile("random_numbers.txt");

    // Check if the file opened successfully
    if (!outFile) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }

    // Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister pseudo-random generator

    // Define the distribution
    std::uniform_int_distribution<int> dis(1, 1000); // Range from 1 to 100

    // Generate and write 10 random numbers to the file
    for (int i = 0; i < 1000; ++i) {
        int randomNum = dis(gen); // Generate a random number
        outFile << randomNum << std::endl; // Write the random number to the file
    }

    // Close the file
    outFile.close();

    std::cout << "Random numbers have been written to 'random_numbers.txt'." << std::endl;

    return 0;
}
