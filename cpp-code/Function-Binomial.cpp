#include <iostream>
using namespace std;
int fact(int n){
    int factt = 1;
    for (int i =1; i<=n; i++){
        factt = factt*i;
    }
    return factt;
}
int ncr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_ncr = fact(n-r);
    
    int bino_ncr = fact_n / (fact_r*fact_ncr);

    return bino_ncr;
}
int main(){
    int num;
    int rr;
    cout<<"Enter n:"<<endl;
    cin>>num;
    cout<<"Enter r:"<<endl;
    cin>> rr;
    cout<<ncr(num , rr)<<endl;
}