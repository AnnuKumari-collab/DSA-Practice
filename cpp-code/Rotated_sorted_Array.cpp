#include <iostream>
using namespace std;
#include <vector>
int search(vector<int>&A, int target){
    int st =0 , end = A.size()-1;
    while(st<=end)
    {
       int mid =st+ (end-st)/2;
       if(A[mid] == target){
             return mid;
       }
       if(A[st]<= A[mid]){
        if(A[st]<=target && target <=A[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
        
        else{
            if(A[mid]<=target && target <= A[end])
            {
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
       
    }
    return -1;
}
int main(){
   int target;
   int size;
   
   cout<<"Enter Size of array : ";
   cin>>size;
   vector<int>arr(size);
   cout<<"Enter Target : ";
   cin>>target;
   for(int i = 0; i<size; i++){
    cout<<"Enter "<<i+1<<" Element : ";
    cin>>arr[i];
   }
   cout<<search(arr, target);
}