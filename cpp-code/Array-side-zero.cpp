#include <iostream>
using namespace std;
#include <vector>
vector<int> side_zero(vector<int>arr, int n){
    int j = 0;
    for(int i =0; i<n; i++){
        if(arr[i]!=0){
            int temp = arr[i];       
            arr[i] = arr[j];
            arr[j] = temp;
            j++; 
        }
        
                        
            
        }
    
    return arr;

}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" element : ";
         cin>>arr[i];
    }
    vector<int> result = side_zero(arr,n);
    for(int value : result){
        cout << value << " ";
    }
}