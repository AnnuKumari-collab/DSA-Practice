#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector<int> arr,int  n, int target){
for(int i=0; i<n; i++){
    if(target==arr[i]){
        return i;
    }
}
return -1;
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
    int target;
    cout<<"Enter your target : ";
    cin>>target;
    int result = linear_search(arr,n,target );
    cout<<result<<endl;
    
}