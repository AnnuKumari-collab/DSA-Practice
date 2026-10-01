#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxsubarray(vector<int>& nums) {
    int current_sum = 0,maxsum = INT_MIN;
for(int val : nums){
    current_sum += val;
    maxsum = max(maxsum, current_sum);
    if(current_sum < 0){
        current_sum = 0;
    }
    return maxsum;
}
}