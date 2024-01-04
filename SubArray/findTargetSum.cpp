// Smallest Subarray with a Given Sum:
// Given an array of positive integers and a target sum, find the length of the smallest subarray with a sum greater than or equal to the target sum.

// Example:

// makefile
// Copy code
// Input: [2, 1, 3, 4, 1, 2, 1, 5, 3, 2], Target Sum = 7
// Output: 2 (subarray [4, 1] or [5, 3])

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int smallestSubarrayWithSum(vector<int>& nums, int targetSum) {
    int n = nums.size();
    int minLength = INT_MAX;
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < n; ++end) {
        currentSum += nums[end];

        while (currentSum >= targetSum) {
            minLength = min(minLength, end - start + 1);
            currentSum -= nums[start];
            ++start;
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    vector<int> nums = {2, 1, 3, 4, 1, 2, 1, 5, 3, 2};
    int targetSum = 7;

    int result = smallestSubarrayWithSum(nums, targetSum);

    cout << "Output: " << result << endl;

    return 0;
}