#include <iostream>
#include <vector>
using namespace std;
int recBinarySearch(vector<int>arr, int tar, int st, int end){
      int mid = st +(end-st)/2;
    if(st<=end){
     
       if(tar<arr[mid]){
        return recBinarySearch(arr,tar,st,mid-1);
       }
       else{
        return recBinarySearch(arr,tar,mid+1,end);
       }
    }
    return mid;
}
int main(){
 int target;
 int size;
 cout<<"Enter Size of Array : ";
 cin>>size;
 vector<int>arr(size);
 for(int i = 0; i<size; i++){
    cout<<"Enter "<<i+1<<" Element : ";
    cin>>arr[i];
 }
 int st = 0; 
 int end = arr.size()-1;
 cout<<"Enter Target : ";
 cin>>target;
 cout<<recBinarySearch(arr,target,st,end);
}