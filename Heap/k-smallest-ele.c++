#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthSmallest(vector<int>& nums, int k) {
       int val;
        priority_queue<int> maxh;
        int n= nums.size();
        for (int i=0;i<n;i++)
        {
            maxh.push(nums[i]);
            {
                if (maxh.size()>k)
                    maxh.pop();
            }
        }
        cout << maxh.top() << endl;
        return maxh.top();
        
    }
};
 
int main() {

    vector<int> nums;
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(20);
    nums.push_back(15);

    // Declare an object of class geeks
    Solution obj1;
 
    // accessing data member
    // obj1.geekname = "Abhi";

 
    // accessing member function
    obj1.findKthSmallest(nums,3);
    return 0;
}