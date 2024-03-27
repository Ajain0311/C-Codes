#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result(2);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    result[0] = i;
                    result[1] = j;
                    return result;
                 }
            }
        }
        return {};
    }
};
int main()
{
    Solution solution;
    int n,target;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the "<<n<<" Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    vector<int> result = solution.twoSum(arr,target);
    for(int i=0;i<2;i++)
    {
        cout<<result[i]<<" ";
    }
}
