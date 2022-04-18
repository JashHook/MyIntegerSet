#include <iostream>
using namespace std;
#include "setOperation.h"
#include "myIntegerSet.h"

// �󽻼�
MyIntegerSet set_intersection(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet setRes;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arrRes = setRes.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			arrRes[k] = arr1[i];
			k++;
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	setRes.eleCount = k;
	return setRes;
};

// �󲢼�
MyIntegerSet set_union(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet setRes;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arrRes = setRes.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			arrRes[k] = arr1[i];
			k++;
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			arrRes[k] = arr1[i];
			k++;
			i++;
		}
		else
		{
			arrRes[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < len1)
	{
		arrRes[k] = arr1[i];
		k++;
		i++;
	}
	while (j < len2)
	{
		arrRes[k] = arr2[j];
		k++;
		j++;
	}
	setRes.eleCount = k;
	return setRes;
};



// ��
MyIntegerSet set_difference(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet setRes;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arrRes = setRes.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			arrRes[k] = arr1[i];
			k++;
			i++;
		}
		else
		{
			j++;
		}
	}
	while (i < len1)
	{
		arrRes[k] = arr1[i];
		k++;
		i++;
	}
	setRes.eleCount = k;
	return setRes;
};



// �󲹼����ԳƲ��
MyIntegerSet set_symmetric_difference(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet setRes;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arrRes = setRes.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			arrRes[k] = arr1[i];
			k++;
			i++;
		}
		else
		{
			arrRes[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < len1)
	{
		arrRes[k] = arr1[i];
		k++;
		i++;
	}
	while (j < len2)
	{
		arrRes[k] = arr2[j];
		k++;
		j++;
	}
	setRes.eleCount = k;
	return setRes;
};


