#include <iostream>
#include <vector>
using namespace std;
int times_x(vector<int> arr, int n, int target){
    int count =0;
  for(int i =0; i<n; i++){
    if(target == arr[i]){
        count = count +1;

    }
  }
  return count;
}
int main(){
    int n, target;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
    cout<<"Enter which number count : ";
    cin>>target;
    int result = times_x(arr, n, target);
    cout<<target<<" is "<< result << " times in array";

}
