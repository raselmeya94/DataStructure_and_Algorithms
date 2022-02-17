class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>set_items;
        for(int i=0; i<nums.size();i++){
            set_items.insert(nums[i]);
        }
        if (set_items.size()==nums.size()){
            return false;
        }
        else 
            return true;
    }
};
