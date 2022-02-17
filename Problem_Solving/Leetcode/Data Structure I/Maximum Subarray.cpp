class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int max_sum = INT_MIN;
        int max_sum_ending_here = 0;
        for (int i=0; i<v.size(); i++){
            max_sum_ending_here += v[i];
            max_sum = max(max_sum, max_sum_ending_here);
            if(max_sum_ending_here < 0)
                max_sum_ending_here = 0;
        }
        return max_sum;
    }
};
