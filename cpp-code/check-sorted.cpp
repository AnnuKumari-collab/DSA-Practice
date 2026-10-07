#include <iostream>
#include <vector>

using namespace std;

vector<int> sorted(vector<int>& arr, int n) {
    vector<int> arr1 = arr;  
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr1[i] > arr1[j]) {   
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    return arr1;
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

    vector<int> ans = sorted(arr, n);

    
    if(ans == arr){
        cout<<"This is Sorted Array"<<endl;
    for(int x : ans) {
        cout << x << " ";
    }
}
else{
    cout<<"This is not sorted array"<<endl;
}
    cout << endl;

    return 0;
}
