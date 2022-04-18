#include <iostream>
using namespace std;
#include "myIntegerSet.h"
#include "setOperation.h"

// ���Լ��ϵ���add��ɾdel����ȡָ���±�Ԫ��get������Ԫ��find���ж��Ƿ�Ϊ��isEmpty�����ϴ�Сsize
void test01() {
	int arr[] = { 1,2,6,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	MyIntegerSet set(arr, len);

	set.print();   // 1 2 5 6 ��������
	cout << set.size() << endl;   // 4
	

	// ��add
	// 1.�������Ԫ��
	set.add(1);   // ��Ԫ���Ѵ��ڣ�   
	
	// 2.�����Ԫ��
	set.add(4);  // ��ӳɹ�

	set.print();   // 1 2 4 5 6
	cout << set.size() << endl;   // 5

	// ɾdel
	// 1.��ɾԪ�ز�����
	set.del(3);      // ��Ԫ�ز����ڣ�
	// 2.��ɾԪ�ش���
	set.del(2);   // ɾ���ɹ���
	set.print();   // 1 4 5 6
	cout << set.size() << endl;   // 4


	// ��ȡָ���±�Ԫ��get
	cout << set.get(0) << endl;   // 1
	cout << set.get(1) << endl;   // 4
	cout << set.get(2) << endl;   // 5
	cout << set.get(3) << endl;	  // 6
	cout << set.get(4) << endl;   // �±�Խ�磡����-1


	// ����Ԫ��find
	// 1.�����д��ڴ���Ԫ�أ��������±�
	int pos = set.find(4);
	cout << pos << endl;    // 1
	cout << set.get(pos) << endl;   // 4

	// 2.�����в����ڴ���Ԫ�أ�����-1
	cout << set.find(2) << endl;


	// �ж��Ƿ�Ϊ��isEmpty��
	// 1.��ǰ���ϲ�Ϊ��
	cout << set.isEmpty() << endl;    // 0

	// 2.��ǰ����Ϊ��
	set.del(1);
	set.del(4);
	set.del(5);
	set.del(6);
	set.print();   // �ü���Ϊ�գ�
	cout << set.isEmpty() << endl;    // 1

}


// �����������ϵ����㣺�������������������
void test02() {
	int arr1[] = { 1,3,2,7,8,9 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	MyIntegerSet set1(arr1, len1);

	int arr2[] = { 2,3,6,5,4 };
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	MyIntegerSet set2(arr2, len2);

	cout << "set1 : ";
	set1.print();    // �Զ��������У�1 2 3 7 8 9
	cout << "set2 : ";
	set2.print(); // 2 3 4 5 6

	MyIntegerSet set3 = set_intersection(set1, set2);
	cout << "������";
	set3.print();   // 2 3
	cout << set3.size() << endl; // 2

	MyIntegerSet set4 = set_union(set1, set2);
	cout << "������";
	set4.print();  // 1 2 3 4 5 6 7 8 9
	cout << set4.size() << endl;  // 9

	MyIntegerSet set5 = set_difference(set1, set2);
	cout << "���";
	set5.print();  // 1 7 8 9
	cout << set5.size() << endl; // 4

	MyIntegerSet set6 = set_symmetric_difference(set1, set2);
	cout << "������";
	set6.print();  // 1 4 5 6 7 8 9
	cout << set6.size() << endl;  // 7
}



int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
