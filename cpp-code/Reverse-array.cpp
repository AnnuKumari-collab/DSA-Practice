#include <iostream>
using namespace std;
int Reverse_Array(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int size=7;
int arr[]={4,2,7,8,9,5,6};
Reverse_Array(arr,size);
for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}