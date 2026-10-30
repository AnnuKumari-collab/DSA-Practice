#include<iostream>
#include <vector>
using namespace std;
vector<int> Remove_same(vector<int>arr, int n){
    int j = 0;
    vector<int> arr1(n);
   
    for(int i =0; i<n ; i++){
      if(i==0){
       arr1[j]=arr[i];
       j++;
        }
        else{
            if(arr[i]!=arr[i-1]){
                arr1[j] = arr[i];
                j++;
            }
        }
    }
    
   
    return arr1;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
    vector<int> result = Remove_same(arr,n);
    

    for(int value:result){
        if(value==0){
        break;
        }
        cout<<value ;
    }

}
