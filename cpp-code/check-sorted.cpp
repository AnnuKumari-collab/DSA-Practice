#include <iostream>
#include <vector>

using namespace std;

int sorted(vector<int>& arr, int n) {

    
    for(int i = 0; i < n-1; i++) {
       if(arr[i]>arr[i+1]){
         return false;
       }
    
    }
    return true;
    
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " Element: ";
        cin >> arr[i];
    }

    

    
    if(sorted(arr,n)){
        cout<<"This is Sorted Array"<<endl;
   
}
else{
    cout<<"This is not sorted array"<<endl;
}
    cout << endl;

    return 0;
}
