#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int maxArea(vector<int>& height) {
		int res = 0;//��
		int i = 0, j = height.size() - 1;//����ָ��
		while (i<j)
		{
			res = max(res, min(height[i], height[j])*(j - i));//���´𰸣�min�е���˼��ȡ��С�������Ե�
			if (height[i]>height[j])j--;//�����ߵ��������ұߵ�����j������
			else i++;
		}
		return res;
	}
};