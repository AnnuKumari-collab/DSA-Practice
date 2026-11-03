#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& arr, int n){
    for(int i = 1; i<=n-1;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

}
int main(){

 int size;
 cout<<"Enter Size of Array : ";
 cin>>size;
 vector<int>arr(size);
 for(int i = 0; i<size; i++){
    cout<<"Enter "<<i+1<<" Element : ";
    cin>>arr[i];
 }
 
 insertion_sort(arr,size);
 for(int i = 0; i<size; i++){
     cout<<arr[i]<<" ";
 }
}