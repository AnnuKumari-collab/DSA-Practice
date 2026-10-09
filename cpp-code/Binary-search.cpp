#include <iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>arr, int tar){
    int st =0, end = arr.size()-1;
    while(st<=end){
        int mid =st+((end-st)/2);
        if(tar>arr[mid]){
               st = mid+1;
        }
        else if (tar<arr[mid]){
            end = mid -1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int target;
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>arr[i];
    }
    cout<<"Enter Target : ";
    cin>>target; 
    cout<<binary_search(arr,target);
}
// time complexity  = Big O (LOG(n))