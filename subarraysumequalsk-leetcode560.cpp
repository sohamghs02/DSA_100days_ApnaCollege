//Optimal Approach - O(n) -- Prefix Sum Approach
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> pSum(n, 0);
        pSum[0] = nums[0];
        for(int i=1; i<n; i++){
            pSum[i] = pSum[i-1] + nums[i];
        }
        unordered_map<int, int> m;
        for(int j=0; j<n; j++){
            if(pSum[j] == k) count++;
            int val = pSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }
            if(m.find(pSum[j]) == m.end()){
                m[pSum[j]] = 0;
            }
            m[pSum[j]]++;
        }
        return count;
    }
};

//Brute Force - O(n^2)
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
//         for(int i=0; i<n; i++){
//             int sum = 0;
//             for(int j=i; j<n; j++){
//                 sum += nums[j];
//                 if(sum == k) count++;
//             }
//         }
//         return count;
//     }
// };