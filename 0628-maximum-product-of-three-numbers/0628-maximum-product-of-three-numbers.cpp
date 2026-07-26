class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN ;
        int sec = INT_MIN;
        int third = INT_MIN;
        int small1= INT_MAX;
        int small2 =INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first){
                third=sec;
                sec=first;
                first=nums[i];
            }
            else if(nums[i]>sec){
                 third=sec;
                 sec=nums[i];
            }
            else if(nums[i]>third){
                 third=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<small1){
                small2=small1;
                small1=nums[i];
            }
            else if(nums[i]<small2){small2=nums[i];}
        }
         return max(first*sec*third ,first*small1*small2);
    }
};