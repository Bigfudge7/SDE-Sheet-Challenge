#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    map<int,int>ans;
        int x=0,n=arr.size();
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            x=arr[i];
            ans[x]++;
        }
        for(auto it : ans){
            if(it.second>(n/3)){
                v.push_back(it.first);
            }
        }
        return v;
    

}