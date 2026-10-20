#include <iostream>
#include <vector>
using namespace std;
vector<int> revese(vector<int>arr , int n){
    vector<int>arr1(n);
    for(int i = n; i>=0; i--){
        arr1[n-i] = arr[i-1];
    }
    return arr1;
    
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
   
   vector<int>result = revese(arr, n );
   cout<<"Reverse array : ";
   for(int value:result){
    cout<<value<<" ";
   }
   

}
