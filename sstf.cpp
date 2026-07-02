//
// Created by Zakaria Abdullahi on 6/27/26.
#include "diskAlgorithms.h"
#include <vector>
using namespace std;

int sstf(const vector<int>& requests, int start) {
    vector<int> remaining = requests;
    int current = start;
    int totalDistance = 0;

    while (!remaining.empty()) {
        int closestIndex = 0;
        int closestDistance = abs(current - remaining[0]);

        // Find the request closest to the current head position
        for (int i = 1; i < remaining.size(); i++) {
            int distance = abs(current - remaining[i]);
            if (distance < closestDistance) {
                closestDistance = distance;
                closestIndex = i;
            }
        }
        totalDistance += closestDistance;
        current = remaining[closestIndex];

        // Remove the completed request
        remaining.erase(remaining.begin() + closestIndex);
    }
    return totalDistance;
}

