class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sum(nums.size());
        int j=0;
        sum[0]=nums[0];
        for (int i=1;i<nums.size();i++){
            sum[i]=sum[i-1]+nums[i];
        }
        if(j==0){if(sum[sum.size()-1]-nums[0]==0)
        return j;}
        for(j=1;j<nums.size();j++){
            if(sum[j-1]==sum[sum.size()-1]-sum[j])
            return j;
        }
        return -1;
    }
};