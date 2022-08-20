/*

Given an integer array, check if it contains a contiguous subarray having zero-sum.

Input : [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
Output: true
Explanation: The subarrays with zero-sum are

[3, 4, -7]
[4, -7, 3]
[-7, 3, 1, 3]
[3, 1, -4]
[3, 1, 3, 1, -4, -2, -2]
[3, 4, -7, 3, 1, 3, 1, -4, -2, -2]

Input : [4, -7, 1, -2, -1]
Output: false
Explanation: The subarray with zero-sum doesn't exist.

*/

#include "Solution.hpp"

bool Solution::hasZeroSumSubarray(vector<int> const &nums)
{
    int zero_sum;

    for (auto j = 0; j < nums.size(); j++)
    {
        zero_sum = 0;
        for (auto i = j; i < nums.size(); i++)
        {
            zero_sum += nums.at(i);
            if (zero_sum == 0)
                return true;
        }
    }

    return false;
}
