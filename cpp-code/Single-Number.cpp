#include <iostream>
using namespace std;
#include <vector>
int Single_Element(vector<int>&num){
    int ans =0;
    for(int val : num){
    ans^=val;
    }
    return ans;
}