#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main() {
    int n;
    cout<<"enter size :  ";
    cin>>n;
    vector<int> arr(n) ;
    for(int i =0; i<n ; i++){
        
        cout<<"Enter "<<i<<" Element : ";
        cin>>arr[i];
    }
    int largest = arr[0];
     int secondLargest = INT_MIN;
   

    for (int i = 0; i < n; i++) {
        if(arr[i]>largest){
            secondLargest = largest;
               largest = arr[i];
        }
       
        else if(arr[i]<largest && arr[i]>secondLargest){
                   secondLargest = arr[i];
        }
       
    }
   if(secondLargest==INT_MIN){
    cout<<"There is no secondlargest element"<<endl;
   }
   else{
    
    cout << "Second largest element is: " << secondLargest << endl;
   }
    return 0;
}