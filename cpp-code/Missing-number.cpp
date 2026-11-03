#include <iostream>
#include <vector>
using namespace std;
int missing_number(vector<int>arr, int low , int heigh){
    if(low<=heigh){
        int mid  = (low+heigh)/2;
       
        if(arr[mid] == arr[mid+1]){
            for(int i = mid+1; i<=heigh; i++){
                if(i!=arr[i]){
                    return i;
                }
            }
        }
        else{
            for(int i =low; i<mid+1;i++ ){
                if(i!=arr[i]){
                    return i;
                }
            }
           
        }
    }

}