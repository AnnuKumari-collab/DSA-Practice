#include <iostream>
using namespace std;
int linearsearch(int arr[], int sz, int target){
    for(int i =0; i<sz; i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
}
int main (){
    int sz;
    int target;
    cout<<"enter size of array: "<<endl;
    cin>>sz;
    int arr[sz];
    for(int i = 0; i<= sz; i++){
        cout<<"enter "<< i+1 <<" element of array : "<<endl;
        cin>>arr[i];
    }
    cout<<"enter which number you want to search : ";
    cin>>target;
    cout<<endl;
    cout<<linearsearch(arr,sz,target)<<endl;
}