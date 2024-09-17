//Moore's Voting Algorithm -- most optimised O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int freq=0, ans=0;
        for(int i=0;i<n;i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]) freq++;
            else freq--;
        }
        return ans;
    }
};

// //Brute force O(n^2)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val : nums){
//             int f = 0;
//             for(int el : nums){
//                 if(el==val){
//                     f++;
//                 }
//             }
//             if(f > n/2){
//                 return val;
//             }
//         }
//         return -1;
//     }
// };

// //Optimised-Sorting O(nlogn)
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         //sort array
//         sort(nums.begin(), nums.end());
//         //count freq
//         int freq = 1, ans = nums[0];
//         for(int i=1;i<n;i++){
//             if(nums[i]==nums[i-1]){
//                 freq++;
//             }
//             else{
//                 freq=1;
//                 ans=nums[i];
//             }
//             if(freq>n/2){
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };