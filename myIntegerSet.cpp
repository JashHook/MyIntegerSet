#include <iostream>
using namespace std;
#include "myIntegerSet.h"

// 无参构造函数
MyIntegerSet::MyIntegerSet()
{
	//cout << "无参构造调用！" << endl;
};

// 快速排序-保证容器有序
void quickSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int i = left;
		int j = right;
		int temp = arr[left];
		while (i < j)
		{
			while (i < j && arr[j] >= temp)
			{
				j--;
			}
			if (i < j)
			{
				arr[i] = arr[j];
				i++;
			}
			while (i < j && arr[i] <= temp)
			{
				i++;
			}
			if (i < j)
			{
				arr[j] = arr[i];
				j--;
			}
		}
		arr[i] = temp;
		quickSort(arr, left, i - 1);
		quickSort(arr, i + 1, right);
	}
};


// 有参构造函数
MyIntegerSet::MyIntegerSet(int arrTemp[], int eleCount)
{
	this->eleCount = eleCount;
	for (int i = 0; i < eleCount; i++)
	{
		this->arr[i] = arrTemp[i];
	}
	quickSort(this->arr,0,eleCount-1);
};

// 集合大小
int MyIntegerSet::size()
{
	// int size = this->eleCount * sizeof(int);
	// return size;
	return eleCount;
};

// 判断元素是否重复 重复返回true  不重复返回false
bool MyIntegerSet::isRepeat(int element)
{
	 bool flag = false;
	 if (this->eleCount == 0)
	 {
	     cout << "该数组为空！" << endl;
	     return flag;
	 }
	 
	 for (int i = 0; i < this->eleCount; i++)
	 {
	     if (this->arr[i] == element)
	     {
			 flag = true;
			 break;
	     }
	     else
	     {
	         flag = false;
	     }
	 }
	 return flag;
};

// 添加元素 尾插
void MyIntegerSet::add(int element)
{
	if (this->eleCount == 0)
	{
		this->arr[0] = element;
		this->eleCount++;
	}
	else
	{
		if (this->isRepeat(element) == true)
		{
			cout << "该元素已存在！" << endl;
		}
		else
		{
			this->arr[this->eleCount] = element;
			this->eleCount++;
			cout << "添加成功！" << endl;
		}
	}
	quickSort(this->arr, 0, eleCount - 1);
};

// 删除元素
void MyIntegerSet::del(int element)
{
	if (this->eleCount == 0)
	{
		cout << "该集合为空！" << endl;
	}
	else
	{
		int index = this->find(element);
		if (index != -1) {
			for (int i = 0; i < this->eleCount; i++)
			{
				if (this->arr[i] == element)
				{
					for (int j = i; j < this->eleCount - 1; j++)
					{
						this->arr[j] = this->arr[j + 1];
					}
					this->eleCount--;
				}
			}
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "该元素不存在！" << endl;
		}
	}
	quickSort(this->arr, 0, eleCount - 1);
};

// 	查找元素 存在返回其下标  不存在返回-1
int MyIntegerSet::find(int element)
{
	int index = -1;
	 for (int i = 0; i < this->eleCount; i++)
	 {
	     if (this->arr[i] == element)
	     {
			 index = i;
			 break;
	     }
	 }
	 return index;
};

// 获取指定下标的元素
int MyIntegerSet::get(int index)
{
	if (this->eleCount == 0)
	{
		cout << "该数组为空！" << endl;
		return -1;
	}
	else
	{
		if (index < this->eleCount)
		{
			return this->arr[index];
		}
		else
		{
			cout << "下标越界！" << endl;
			return -1;
		}
	}
};

// 判断集合是否为空
bool MyIntegerSet::isEmpty()
{

	if (this->eleCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
};

// 打印集合元素
void MyIntegerSet::print()
{
	if (this->eleCount == 0)
	{
		cout << "该集合为空！" << endl;
	}
	for (int i = 0; i < this->eleCount; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
};


// 析构函数
MyIntegerSet::~MyIntegerSet()
{
	//cout << "析构函数被调用！" << endl;
};