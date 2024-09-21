//two pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {        
        int maxWater = 0;
        int lp = 0, rp = height.size()-1;
        while(lp<rp){
            int wgt = rp-lp;
            int hgt = min(height[lp], height[rp]);
            int currWgt = wgt * hgt;
            maxWater = max(maxWater, currWgt);
            height[lp]<height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};

// //brute force
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int maxWater = 0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int wt = j-i;
//                 int hgt = min(height[i],height[j]);
//                 int area = wt*hgt;
//                 maxWater = max(maxWater, area);
//             }
//         }
//         return maxWater;
//     }
// };
// //note brute force will give TLE