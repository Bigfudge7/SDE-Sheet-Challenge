#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    
    map<int,int>mpp;
    int maxi=0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        mpp[x]++;
        if(mpp[x]>mpp[maxi]){
            maxi=x;
        }
    }
    int res=n/2;
    if(res<mpp[maxi]) return maxi;
    return -1;
}