#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(), arr.end());
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            res=arr[i];
        }
    }
    return res;
}
