#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("Random.txt");

    // Check if the file was opened successfully
    if (!inputFile) {
        std::cerr << "Error opening file 'Random.txt'" << std::endl;
        return 1;
    }

    int number;
    int count = 0;
    int sum = 0;

    // Read numbers from the file and calculate count and sum
    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close(); // Close the file

    // Check if there were any numbers in the file
    if (count == 0) {
        std::cout << "No numbers found in the file." << std::endl;
        return 0;
    }

    // Calculate the average
    double average = static_cast<double>(sum) / count;

    // Display results
    std::cout << "Number of numbers: " << count << std::endl;
    std::cout << "Sum of the numbers: " << sum << std::endl;
    std::cout << "Average of the numbers: " << average << std::endl;

    return 0;
}
