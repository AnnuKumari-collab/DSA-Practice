#include<iostream>
#include <vector>
using namespace std;
vector<int> Remove_same(vector<int>arr, int n){
    int j = 1;
    vector<int> arr1(j);
   
    for(int i =0; i<n ; i++){
      if(i==0){
       arr1[i]=arr[i];
        }
        else{
            if(arr[i]!=arr1[i-1]){
                arr1[i] = arr[i];
                j++;
            }
        }
    }
    
    cout << "Updated count: " << j << endl;
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
        cout<<value ;
    }

}
