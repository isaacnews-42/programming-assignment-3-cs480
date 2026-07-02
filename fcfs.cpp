/* 
Created by Isaac Afram on 6/29/26
*/

#include "diskAlgorithms.h"
#include <vector>
#include <cmath> 

int fcfs(const vector<int>& requests, int start) {
  int current = start;
  int totalDistance = 0;

  for(int request: requests){
    totalDistance += abs(current - request);
    current = request;
  }
  return totalDistance;
}
