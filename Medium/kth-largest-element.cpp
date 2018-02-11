#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    /*
     * @param n: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
    int kthLargestElement(int n, vector<int> &nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - n];
    }
};

int main() {
    Solution s;
    vector<int> nums = {9, 3, 2, 4, 8};
    cout << s.kthLargestElement(3, nums);
    return 0;
}