class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = INT_MIN;
        int sec = INT_MIN;
        int firstindex = INT_MIN;
        int secindex = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>first){
                sec = first;
                secindex =firstindex;
                first =nums[i];
                firstindex = i;
            }
            else if(nums[i]>sec){
                sec=nums[i];
                secindex =i;
            }
        }
        return (nums[firstindex]-1)*(nums[secindex]-1);
    }
};