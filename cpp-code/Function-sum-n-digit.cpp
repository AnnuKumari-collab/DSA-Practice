#include <iostream>
using namespace std;
int Sum_digit(int n){
    int sum =0;
    int digits;
    while(n>0){
        digits = n%10;
        sum = sum+digits;
        n = n/10;
        
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;
    cout<<Sum_digit(num)<<endl;
}