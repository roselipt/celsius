//  This program reads a week of temperatures in Fahrenheit
//  and converts them to celsius.

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main () {
    //  This is the basic try/catch for file reading from class notes
    //  This isn't what you meant by "don't copy code" is it?
    try {
        ifstream inFile("input.txt");
        if (!inFile.good())
            throw string("Failure opening input.txt");
        ofstream outFile("output.txt");
        if (!outFile)
            throw string("Failure opening output.txt");
        int num;
        inFile >> num;
        while (!inFile.eof()) {
            int celsius;
            celsius = (5.0/9.0)*(num-32);
            outFile << num << " degress F is " << celsius << "degrees C." << endl;
            
            //  Reads the next number to repeat the while loop
            inFile >> num;
        } // Close while loop for each number input

        inFile.close();
        outFile.close();
        cout << "And if my grandmother had wheels, she'd be a wagon." << endl;
        return 0;
    
    } catch(string message) {
        cerr << message << endl;
        exit(0);
    }


//    cout << "Here tis." << endl;
}

