#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        int val;
        priority_queue<int, vector<int>, greater<int>> minh;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            minh.push(nums[i]);
            {
                if (minh.size() > k)
                    minh.pop();
            }
        }
        cout<<minh.top()<< endl;
        return minh.top();
    }
};

int main()
{

    vector<int> nums;
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(20);
    nums.push_back(15);

    // Declare an object of class geeks
    Solution obj1;

    obj1.findKthLargest(nums, 3);
    return 0;
}
