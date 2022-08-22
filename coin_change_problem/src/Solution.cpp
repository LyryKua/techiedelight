/*

Given an unlimited supply of coins of given denominations, find the minimum number of coins required to get the desired change.

Input: S = [1, 3, 5, 7], target = 15
Output: 3
Explanation: The minimum number of coins required is 3 (7 + 7 + 1) or (5 + 5 + 5) or (3 + 5 + 7)

Input: S = [1, 3, 5, 7], target = 18
Output: 4
Explanation: The minimum number of coins required is 4 (7 + 7 + 3 + 1) or (5 + 5 + 5 + 3) or (7 + 5 + 5 + 1)

If desired change is not possible, the solution should return -1.

Input: S = [2, 4, 6, 8], target = 15
Output: -1

*/

// #include <bits/stdc++.h>
#include "Solution.hpp"

int Solution::findMinCoins(vector<int> const &S, int target)
{
	vector<int> results(target + 1);
	for (auto i = 1; i <= target; i++)
		results[i] = INT_MAX;

	for (auto i = 1; i <= target; i++)
	{
		int new_result = INT_MAX;
		for (auto x : S)
		{
			if (i - x >= 0)
				new_result = results[i - x];
			if (new_result != INT_MAX)
				results[i] = min(new_result + 1, results[i]);
		}
	}

	return results[target] == INT_MAX ? -1 : results[target];
}
