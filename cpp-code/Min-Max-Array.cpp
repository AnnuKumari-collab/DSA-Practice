#include<iostream>
#include <vector>
using namespace std;
vector<int> Min_Max(vector<int> arr, int n){
    int min = arr[0];
    int max = arr[0];
    for(int i =1; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"Minimum Element in the array : "<<min<<endl;
    cout<<"Maximum Element in the array : "<<max<<endl;

}
int main(){
    int n;
    cout<<"Enter size of array  : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
    vector<int> result = Min_Max(arr,n );
   
}