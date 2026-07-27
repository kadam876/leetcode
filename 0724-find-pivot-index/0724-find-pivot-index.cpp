class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> res;
        res.resize(nums.size());
        res[0]=nums[0];
        int n= nums.size();
        for(int i=1;i<nums.size();i++){
            res[i]=res[i-1]+nums[i];
        }
         for(int i=0;i<nums.size();i++){
           int left_sum = (i == 0) ? 0 : res[i - 1];
           int right_sum=res[n-1]-res[i];
           if(left_sum==right_sum){return i;}
        }
        return -1;
    }
};