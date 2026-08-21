class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double sum=0;
        double current_avg=0;
        double max_avg=-DBL_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            if((j-i+1)<k){
                j++;
            }
            else{
            current_avg=sum/k;
            max_avg=max(current_avg,max_avg);
            sum-=nums[i];
            j++;
            i++;
            }
        }
            return max_avg;
    }
};