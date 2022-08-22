/*

Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.

Input : [0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2]

*/

#include "Solution.hpp"

void Solution::sortArray(vector<int> &nums)
{
	int zero_counter = 0, one_counter = 0, two_counter = 0;

	for (auto num : nums)
	{
		if (num == 0)
			zero_counter++;
		if (num == 1)
			one_counter++;
		if (num == 2)
			two_counter++;
	}
	this->fillArray(nums, 0, zero_counter, 0);
	this->fillArray(nums, zero_counter, one_counter, 1);
	this->fillArray(nums, zero_counter + one_counter, two_counter, 2);
}

void Solution::fillArray(vector<int> &nums, int start, int times, int val)
{
	for (auto i = start; i < start + times; i++)
		nums[i] = val;
}
