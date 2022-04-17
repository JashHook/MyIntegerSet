#include <iostream>
using namespace std;
#include "myIntegerSet.h"

// �޲ι��캯��
MyIntegerSet::MyIntegerSet()
{
	//cout << "�޲ι�����ã�" << endl;
};

// ��������-��֤��������
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


// �вι��캯��
MyIntegerSet::MyIntegerSet(int arrTemp[], int eleCount)
{
	this->eleCount = eleCount;
	for (int i = 0; i < eleCount; i++)
	{
		this->arr[i] = arrTemp[i];
	}
	quickSort(this->arr,0,eleCount-1);
};

// ���ϴ�С
int MyIntegerSet::size()
{
	// int size = this->eleCount * sizeof(int);
	// return size;
	return eleCount;
};

// �ж�Ԫ���Ƿ��ظ� �ظ�����true  ���ظ�����false
bool MyIntegerSet::isRepeat(int element)
{
	 bool flag = false;
	 if (this->eleCount == 0)
	 {
	     cout << "������Ϊ�գ�" << endl;
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

// ���Ԫ�� β��
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
			cout << "��Ԫ���Ѵ��ڣ�" << endl;
		}
		else
		{
			this->arr[this->eleCount] = element;
			this->eleCount++;
			cout << "��ӳɹ���" << endl;
		}
	}
	quickSort(this->arr, 0, eleCount - 1);
};

// ɾ��Ԫ��
void MyIntegerSet::del(int element)
{
	if (this->eleCount == 0)
	{
		cout << "�ü���Ϊ�գ�" << endl;
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
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "��Ԫ�ز����ڣ�" << endl;
		}
	}
	quickSort(this->arr, 0, eleCount - 1);
};

// 	����Ԫ�� ���ڷ������±�  �����ڷ���-1
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

// ��ȡָ���±��Ԫ��
int MyIntegerSet::get(int index)
{
	if (this->eleCount == 0)
	{
		cout << "������Ϊ�գ�" << endl;
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
			cout << "�±�Խ�磡" << endl;
			return -1;
		}
	}
};

// �жϼ����Ƿ�Ϊ��
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

// ��ӡ����Ԫ��
void MyIntegerSet::print()
{
	if (this->eleCount == 0)
	{
		cout << "�ü���Ϊ�գ�" << endl;
	}
	for (int i = 0; i < this->eleCount; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
};


// ��������
MyIntegerSet::~MyIntegerSet()
{
	//cout << "�������������ã�" << endl;
};