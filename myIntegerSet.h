#pragma once
#include <iostream>
using namespace std;
//#define MAX_SIZE = 65536;

// ����������
class MyIntegerSet
{
public:
	// ����һ����������¼Ԫ�ظ���
	int eleCount;

	// ����һ��������Ϊ����
	int arr[100];

	// �޲ι��캯��
	MyIntegerSet();

	// �вι��캯��
	MyIntegerSet(int arrTemp[], int eleCount);

	// ���ϴ�С
	int size();

	// ���Ԫ��
	void add(int element);

	// ɾ��Ԫ��
	void del(int element);

	// ����Ԫ�� ���ڷ������±�  �����ڷ���-1
	int find(int element);

	// ��ȡָ���±��Ԫ��
	int get(int element);

	// �жϼ����Ƿ�Ϊ��
	bool isEmpty();


	// ��ӡ����Ԫ��
	void print();

	// ��������
	~MyIntegerSet();

private:
	// �ж�Ԫ���Ƿ��ظ� ���ڷ���true  �����ڷ���false
	bool isRepeat(int element);
};
