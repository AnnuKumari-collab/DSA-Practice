#include <iostream>
#include <vector>
using namespace std;
int while_palindrome(vector<int>arr, int n){
    int left = 0;
    int right = n-1;
    while(left<right){
        if(arr[left]!= arr[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;

}
int for_palindrome(vector<int> arr, int n){
    for(int i =0; i<n; i++){
        if(i<(n-(i+1))){
            if(arr[i]!=arr[n-(i+1)]){
                return false;
            }
        }
    }
 return true;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cout<<"Enter "<<(i+1)<<" Element : ";
        cin>>arr[i];
    }
   int choice;
cout << "Enter 1 check palindrome using for loop" << endl;
cout << "Enter 2 check palindrome using while loop" << endl;
cout << "Enter your choice : ";
cin >> choice;
bool result;
switch (choice)
{
case 1:
    result = for_palindrome(arr, n);
    if(result==true){
        cout<<"This array is palindrme";
    }
    else{
        cout<<"This array is not palindrome";
    }
    break;
case 2:
     result = while_palindrome(arr, n);
    if(result==true){
        cout<<"This array is palindrme";
    }
    else{
        cout<<"This array is not palindrome";
    }
    break;

default:
    break;
}
}