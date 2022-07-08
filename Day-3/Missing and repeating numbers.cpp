#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    long long int len = n;

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<arr.size(); i++){
       S -= (long long int)arr[i];
       P -= (long long int)arr[i]*(long long int)arr[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;
    
    int a1=missingNumber;
    int a2=repeating;
    pair<int,int>ans(a1,a2);
    //ans.push_back(repeating);
    //ans.push_back(missingNumber);

    return ans;
}
