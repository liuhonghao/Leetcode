#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int maxArea(vector<int>& height) {
		int res = 0;//答案
		int i = 0, j = height.size() - 1;//两个指针
		while (i<j)
		{
			res = max(res, min(height[i], height[j])*(j - i));//更新答案，min中的意思是取最小的数乘以底
			if (height[i]>height[j])j--;//如果左边的数大于右边的数，j往左走
			else i++;
		}
		return res;
	}
};