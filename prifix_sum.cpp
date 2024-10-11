#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans ; 
    ans.push_back(arr[0]);
    
    for(int i=1;i<arr.size();i++){
        ans.push_back(ans[i-1]+arr[i]);
    }
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    
    
    return 0;
}
