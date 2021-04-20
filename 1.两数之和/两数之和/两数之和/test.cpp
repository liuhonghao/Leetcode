#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
/*
±©Á¦Ð´·¨ O(n^2)
*/
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		for (int i = 0; i<nums.size(); i++)
		{
			for (int j = 0; j<i; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					res = vector<int>({ j, i });
					break;
				}
			}
			if (res.size()>0)break;
		}
		return res;
	}
};
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> res;
		unordered_map<int, int> heap;
		for (int i = 0; i < nums.size(); i++)
		{
			int another = target - nums[i];
			if (heap.count(another))
			{
				res = vector<int>({ heap[another], i });
				break;
			}
			heap[nums[i]] = i;
		}
		return res;
	}
}