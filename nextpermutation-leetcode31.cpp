class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find pivot
        int pivot = -1, n = nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1; i>pivot; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        int i = pivot+1, j = n-1;
        while(i <= j){
            swap(nums[i++], nums[j--]);
        }
    }
};