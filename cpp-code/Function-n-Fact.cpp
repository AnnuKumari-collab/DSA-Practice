#include <iostream>
using namespace std;

    int Fact(int n){
        int fact = 1;
        for(int i=1; i<=n; i++){
            fact = i*fact;
        }
        return fact;

    }
    int main(){
        int num;
        cout<< "Enter number"<< endl;
        cin>>num;
        cout<<Fact(num)<<endl;
    }