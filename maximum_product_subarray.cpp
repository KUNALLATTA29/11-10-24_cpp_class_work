#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,3,-4,3};
    int maxi = arr[0];
    for(int i=0;i<arr.size();i++){
        int current = 1;
        for(int j=i;j<arr.size();j++){
            current*=arr[j];
            maxi = max(current,maxi);
        }
    }
    cout<<maxi;
    
    
    return 0;
}
