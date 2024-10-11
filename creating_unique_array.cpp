#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,4,5,5,6,6};
    set<int> ans(arr.begin(),arr.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    
    return 0;
}
