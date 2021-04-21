#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int left, int right) {
		auto dummy = new ListNode(-1);
		dummy->next = head;
		auto a = dummy;
		for (int i = 0; i<left - 1; i++) a = a->next;
		auto b = a->next, c = b->next;
		for (int i = 0; i<right - left; i++)
		{
			auto d = c->next;
			c->next = b;
			b = c, c = d;
		}
		a->next->next = c;
		a->next = b;
		return dummy->next;
	}
};