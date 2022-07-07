class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==0) c0++;
        if(nums[i]==1) c1++;
        if(nums[i]==2) c2++;
    }
    //cout<<c0<<endl;
        int i=0;
    for(i=0;i<c0;i++){
        nums[i]=0;
    }
    for(i;i<c0+c1;i++){
        nums[i]=1;
    }
    for(i;i<c0+c1+c2;i++){
        nums[i]=2;
    }
    
    }
};