// filename.cpp
// your name
// submission date
// one line summary of program's purpose, do not exceed 80 columns

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// A simple struct to hold the Celsius and Fahrenheit values
struct TemperaturePair {
    double Celsius;
    double Fahrenheit;
};

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    // Immutable input vector of temperatures in Celsius
    const vector<double> celsiusTemperatures = {0.0, 10.0, 20.0, 30.0, 40.0};

    // Vector to store the converted temperatures
    vector<TemperaturePair> temperaturePairs(celsiusTemperatures.size());

    // Use std::transform with a lambda expression to populate temperaturePairs
	// add your code here
    // ...

    // Output the results using another lambda in a for_each
    for_each(temperaturePairs.begin(), temperaturePairs.end(),
             [](const TemperaturePair& tempPair) {
        cout << tempPair.Celsius << " deg C is " <<
            tempPair.Fahrenheit << " deg F" << endl;
    });

    return 0;
}
