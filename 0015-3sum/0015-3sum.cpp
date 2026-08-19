class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j=0;
        int k=0;
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            j=i+1;
            int sum=-nums[i];
            k=nums.size()-1;
             if(i > 0 && nums[i] == nums[i - 1])
                continue;
            while(j<k){
              vector<int>temp;
              if(nums[j]+nums[k]==sum){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    j++;
                    k--;
                 while(j<k&&nums[j]==nums[j-1]){j++;}
                while(j<k&&nums[j]==nums[j-1]){k--;}
              }
              else if(nums[j]+nums[k]<sum)
                    j++;
                else {
                    k--;
                }
            }
        }
        return ans;
    }
};