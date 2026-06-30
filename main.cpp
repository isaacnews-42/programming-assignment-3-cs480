//
// Created by Zakaria Abdullahi on 6/27/26.
//
#include "diskAlgorithms.h"
#include <iostream>
#include <vector>
using namespace std;

const int minCylinder = 0;
const int maxCylinder = 999;
const int startPosition = 100;


int main(int argc, char* argv[]) {
    // Make sure the user enters the sequence length
    if (argc != 2) {
        cout << "Usage: ./simarm <number_of_requests>" << endl;
        return 1;
    }
    int sequenceLength = atoi(argv[1]);

    if (sequenceLength <= 0) {
        cout << "Sequence length must be positive." << endl;
        return 1;
    }

    // Seed random number generator
    srand(time(nullptr));
    vector<int> requests;

    // Generate random cylinder requests between 0 and 999
    for (int i = 0; i < sequenceLength; i++) {
        int cylinder = minCylinder + rand() % (maxCylinder - minCylinder + 1);
        requests.push_back(cylinder);
    }

    cout << "Sequence length: " << sequenceLength << endl;
    cout << "Starting position: " << startPosition << endl;
    cout << "Requests: ";
    for (int request : requests) {
        cout << request << " ";
    }
    cout << endl << endl;
    cout << "SSTF total distance: " << sstf(requests, startPosition) << endl;
    return 0;
}