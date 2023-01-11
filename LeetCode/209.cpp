class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int sum=0, result=INT32_MAX;
        for(int j=0;j<nums.size();j++){
            sum += nums[j];
            while(sum>=target){
                int sub = j-i+1;
                result = sub < result ? sub : result;
                sum-=nums[i++];
            }
        }
        return result==INT32_MAX ? 0 : result;
    }
};
