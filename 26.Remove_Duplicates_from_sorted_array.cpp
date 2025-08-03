class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        vector<int> result;
        int num = nums[0];
        result.push_back(num);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == num)
                continue;
            else {
                result.push_back(nums[i]);
                count++;
                num = nums[i];
            }
        }
        for (int i = 0; i < result.size(); i++) {
            nums[i] = result[i];
        }
        return result.size();
    }
};
