#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

int main() {
    int min = {};
    int max = {};

    std::cout << "Input smallest Number: \n";
    std::cin >> min;
    std::cout << "Input biggest Number: \n";
    std::cin >> max;
    std::cout << "Smallest number: " << min << "\n Biggest number: " << max << "\n";
    std::cout << "--------------------------------------------------- \n";


    // Random number from range
    int randomNum = rand() % (max - min + 1) + min;

    std::cout << "Your random number is: " << randomNum << "\n";
    std::cout << "--------------------------------------------------- \n";
    std::cout << "The app will close in 3 sec!";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "BYE BYE!" << "\n";



}