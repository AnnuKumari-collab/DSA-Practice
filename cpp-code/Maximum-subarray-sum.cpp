#include <iostream>
#include <climits>   
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int max_sunM = INT_MIN;

    for(int start = 0; start<n; start++){
        int currsum = 0;
        for(int end = start; end<n; end++){
            currsum += arr[end];
            max_sunM = max(currsum, max_sunM);
        }
    }

    cout << "Maximum Subarray Sum = " << max_sunM << endl;
    return 0;
}
