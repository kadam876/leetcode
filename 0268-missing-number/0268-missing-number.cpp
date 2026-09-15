class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int add=0;
        int sum=0;
        for(int i=0;i<=n;i++){
            add+=i;
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return add-sum;
    }
};