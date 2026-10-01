#include <iostream>
using namespace std;
#include <vector>
vector<int> pairsum(vector<int> arr, int target,int n){
    vector<int> ans;
    int i = 0;
    int j = n-1;
     while (i<j)
     {
          if(arr[i]+arr[j]>target){
                j--;
            }
           else if(arr[i]+arr[j]<target){
                i++;
            }
            else{
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;

            }
            
     }
     return ans;
    }
    int main(){
        vector<int> arr = {2,7,11,15};
        int target =26;
        int n = arr.size();
        vector<int> result = pairsum(arr, target, n);
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        return 0;
    }
     
          
            
