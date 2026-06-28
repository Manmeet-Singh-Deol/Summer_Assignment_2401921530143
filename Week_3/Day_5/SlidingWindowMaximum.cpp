class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores indices
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            // Remove smaller elements from back
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            // Remove elements outside the window
            if (dq.front() <= i - k) {
                dq.pop_front();
            }
            
            // Record max for current window
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }
        
        return ans;
    }
};
