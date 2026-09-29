#include <iostream>
using namespace std;
int main(){
    int marks[] = {67,34,57,68,56};
    int max = marks[0];
    int max_i;
    int min = marks[0];
    int min_i;
    for(int i =0; i<5; i++){
        if(marks[i]>=max){
           max = marks[i];
           max_i = i;
        }
        if(marks[i]<=min){
            min = marks[i];
            min_i = i;
        }
    }
    cout<<"maximum number : "<<max<< "and index"<<max_i<<endl;
    
    cout<<"minimum number: "<<min<<"index number"<<min_i<<endl;
}