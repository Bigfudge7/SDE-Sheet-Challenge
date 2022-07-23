#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    
    vector<vector<int>> merged;
    for(auto interval:intervals){
        if(merged.empty() || merged.back()[1]<interval[0]) merged.push_back(interval);
        
        else{ merged.back()[1]=max(merged.back()[1],interval[1]);}
    }
    return merged;
}
