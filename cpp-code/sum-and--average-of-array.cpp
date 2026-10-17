#include <iostream>
#include <vector>
using namespace std;
vector<int> Sum_average(vector<int>arr,int n){
    int count = arr[0];
    for(int i =1; i<n ; i++){
        count=count+arr[i];
    }
    float average = count/n;
    cout<<"Sum of the array : "<<count<<endl;
    cout<<"Average of the number : "<<average<<endl; 


}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
    vector<int> result = Sum_average(arr,n );
    // for(int value : result)
}