#include <iostream>
#include <vector>
using namespace std;
vector<int> even_odd(vector<int> arr, int n){
    int count_even = 0;
    int count_odd = 0;
    for(int i =0; i<n; i++){
        if(arr[i]%2==0){
            count_even=count_even+1;
        }
        else{
            count_odd=count_odd+1;
        }
    }
    cout<<"Total even element : "<<count_even<<endl;
    cout<<"Total odd element : "<<count_odd<<endl;

}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
    vector<int> result = even_odd(arr,n );
    
}