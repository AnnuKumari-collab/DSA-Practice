#include <iostream>
#include <vector>
using namespace std;
int missing_number(vector<int>arr, int low , int heigh){
    if(low<=heigh){
        int mid  = (low+heigh)/2;
        // if(arr[mid]!=arr[mid+1]){
        //     return (mid+1);
        // }
        if(arr[mid] == arr[mid+1]){
            missing_number(arr,mid+1,heigh);
        }
        else{
            for(int i =0; )
            missing_number(arr,low,mid-1);
        }
    }

}