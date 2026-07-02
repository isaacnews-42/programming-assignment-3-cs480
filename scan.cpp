//
// Created by Zakaria Abdullahi and Issac Afram on 6/29/26.
//
#include "diskAlgorithms.h"
#include <vector>
#include <algorithm>
using namespace std;

int scan(const vector<int>& requests, int start) {
    vector<int> sortedRequests = requests;
    sort(sortedRequests.begin(), sortedRequests.end());

    int current = start;
    int totalDistance = 0;

    for (int request : sortedRequests) {
        if (request >= start) {
            totalDistance += abs(current - request);
            current = request;
        }
    }
    // Move to the end of the disk before reversing
    totalDistance += abs(current - 999);
    current = 999;

    for (int i = sortedRequests.size() - 1; i >= 0; i--) {
        if (sortedRequests[i] < start) {
            totalDistance += abs(current - sortedRequests[i]);
            current = sortedRequests[i];
        }
    }
    return totalDistance;
}
