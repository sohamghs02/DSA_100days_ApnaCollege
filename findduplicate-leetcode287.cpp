//Slow-Fast pointer approach - SC O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

//Hashing approach - TC O(n) SC O(n)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_set<int>s;
//         for(int val: nums){
//             if(s.find(val) != s.end()){
//                 return val;
//             }
//             s.insert(val);
//         }
//         return -1;
//     }
// };