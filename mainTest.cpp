#include <iostream>
using namespace std;
#include "myIntegerSet.h"
#include "setOperation.h"

int main()
{
	int arr1[] = {1,3,2,7,8,9};
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	MyIntegerSet set1(arr1, len1);

	int arr2[] = { 2,3,6,5,4 };
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	MyIntegerSet set2(arr2, len2);
	
	cout << "set1 : ";
	set1.print();    // �Զ��������У�1 2 3 7 8 9
	cout << "set2 : ";
	set2.print(); // 2 3 4 5 6

	cout << "set1.get(1) = "<< set1.get(1) << endl;  // 2
	cout << "set2.get(5) = " << set2.get(5) << endl;  // �±�Խ�磡  ����-1



	cout <<"set1.find(2) = " <<set1.find(2) << endl;  // �����±� 1
	cout << "set1.find(5) = " << set1.find(5) << endl;  // �����ڷ���-1
	cout << "set2.find(4) = "<<set2.find(4) << endl;   // �����±� 2


	MyIntegerSet set3 = set_intersection(set1,set2);
	cout << "������";
	set3.print();   // 2 3
	cout << set3.size() << endl; // 2

	MyIntegerSet set4 = set_union(set1,set2);
	cout << "������";
	set4.print();  // 1 2 3 4 5 6 7 8 9
	cout << set4.size() << endl;  // 9

	MyIntegerSet set5 = set_difference(set1, set2);
	cout << "���";
	set5.print();  // 1 7 8 9
	cout << set5.size() << endl; // 4

	MyIntegerSet set6 = set_symmetric_difference(set1,set2);
	cout << "������";
	set6.print();  // 1 4 5 6 7 8 9
	cout << set6.size() << endl;  // 7

	system("pause");
	return 0;
}
