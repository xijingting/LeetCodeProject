// LeedCodeProject.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include <algorithm>
#include <Windows.h>
#include <vector>
#include <iostream>

#include "AddTwoNumber.h"
#include "LengthOfLongestSubstring.h"
#include "FindMedianSortedArrays.h"
#include "LongestPalindrome.h"
#include "intReverse.h"
#include "StringAtoi.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//两数相加
	AddTwoNumber tn;
	ListNode l1(5);
	ListNode l2(5);
	ListNode l3(5);
	l1.next = &l2;
	l2.next = &l3;
	cout << tn.addTwoNumbers(&l1, &l1);

	//求最长无重复子串
	LengthOfLongestSubstring ls;
	ls.lengthOfLongestSubstring("pwwkew");

	//寻找两个有序数组的中位数
	FindMedianSortedArrays fsa;

	vector<int> nums1{1,2,3};
	vector<int> nums2{6,8};
	double a = fsa.findMedianSortedArrays(nums1, nums2);

	//最长回文子串
	LongestPalindrome lp;
	string lpss = lp.longestPalindrome("babad");

	//整数翻转
	intReverse ir;
	int irret = ir.reverse(964632435);

	//string to int
	StringAtoi sa;
	int sares = sa.strAtoi("2147483646");

	system("pause");

	return 0;
}

