/*

Given a binary array, in-place sort it in linear time and constant space. The output should contain all zeroes, followed by all ones.

Input : [1, 0, 1, 0, 1, 0, 0, 1]
Output: [0, 0, 0, 0, 1, 1, 1, 1]

Input : [1, 1]
Output: [1, 1]

*/

#include "Solution.hpp"

void Solution::sortArray(vector<int> &nums)
{
    int i = 0, j = nums.size() - 1;

    while (i < j)
    {
        if (nums[i] > nums[j])
            swap(nums[i], nums[j]);
        if (!nums[i])
            i++;
        if (nums[j])
            j--;
    }
}
