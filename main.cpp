#include <iostream>
using namespace std;

// Function to calculate the weight based on mass
double calculateWeight(double mass) {
    double weight = mass * 9.8; // Weight = Mass * 9.8
    return weight;
}

int main() {
    double mass;

    // Prompt the user to enter the mass of the object
    cout << "Enter the mass of the object (in kilograms): ";
    cin >> mass;

    // Call the function to calculate the weight
    double weight = calculateWeight(mass);

    // Output the calculated weight
    cout << "The weight of the object is: " << weight << " newtons" << endl;

    return 0;
}

