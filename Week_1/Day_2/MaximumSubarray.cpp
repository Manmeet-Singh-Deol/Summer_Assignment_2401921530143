class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum, max=LONG_MIN;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(sum>max)
            {
                max=sum;
            }
            else if(sum<0)
            {
                sum=0;
            }  
            else if(nums.size()==1)
            {
                max=nums[0];
            }     
        }
    return max;
    }
};