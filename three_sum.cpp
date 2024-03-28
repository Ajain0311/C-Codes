#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(i != j){
                    for(int k=0;k<len;k++){
                        if(j !=k){
                            if(nums[i] + nums[j] + nums[k] == 0)
                            {
                                vector<int> triplet = {nums[i],nums[j],nums[k]};
                                result.push_back(triplet);
                            }
                        }
                    }
                }
            }
        }
        return result;
    }
};
int main() {
    Solution ob; // Assuming Solution is the name of your class
    vector<int> nums = {-1, 0, -1, 1, 2};
    vector<vector<int>> result;
    result = ob.threeSum(nums);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

