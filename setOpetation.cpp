#include <iostream>
using namespace std;
#include "setOperation.h"
#include "myIntegerSet.h"

// 求交集
MyIntegerSet set_intersection(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet set3;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arr3 = set3.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			arr3[k] = arr1[i];
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
	set3.eleCount = k;
	return set3;
};

// 求并集
MyIntegerSet set_union(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet set3;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arr3 = set3.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			arr3[k] = arr1[i];
			k++;
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < len1)
	{
		arr3[k] = arr1[i];
		k++;
		i++;
	}
	while (j < len2)
	{
		arr3[k] = arr2[j];
		k++;
		j++;
	}
	set3.eleCount = k;
	return set3;
};



// 求差集
MyIntegerSet set_difference(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet set3;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arr3 = set3.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
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
		arr3[k] = arr1[i];
		k++;
		i++;
	}
	set3.eleCount = k;
	//MyIntegerSet set3(arr3,k);
	return set3;
};



// 求补集（对称差集）
MyIntegerSet set_symmetric_difference(MyIntegerSet set1, MyIntegerSet set2) {
	MyIntegerSet set3;
	int i = 0;
	int j = 0;
	int k = 0;
	int len1 = set1.size();
	int len2 = set2.size();
	int *arr1 = set1.arr;
	int *arr2 = set2.arr;
	int *arr3 = set3.arr;
	while (i < len1 && j < len2)
	{
		if (arr1[i] == arr2[j])
		{
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < len1)
	{
		arr3[k] = arr1[i];
		k++;
		i++;
	}
	while (j < len2)
	{
		arr3[k] = arr2[j];
		k++;
		j++;
	}
	set3.eleCount = k;
	return set3;
};


