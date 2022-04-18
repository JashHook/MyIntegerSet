#include <iostream>
using namespace std;
#include "myIntegerSet.h"
#include "setOperation.h"

// 测试集合的增add、删del、获取指定下标元素get、查找元素find、判断是否为空isEmpty、集合大小size
void test01() {
	int arr[] = { 1,2,6,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	MyIntegerSet set(arr, len);

	set.print();   // 1 2 5 6 升序排列
	cout << set.size() << endl;   // 4
	

	// 增add
	// 1.添加已有元素
	set.add(1);   // 该元素已存在！   
	
	// 2.添加新元素
	set.add(4);  // 添加成功

	set.print();   // 1 2 4 5 6
	cout << set.size() << endl;   // 5

	// 删del
	// 1.待删元素不存在
	set.del(3);      // 该元素不存在！
	// 2.待删元素存在
	set.del(2);   // 删除成功！
	set.print();   // 1 4 5 6
	cout << set.size() << endl;   // 4


	// 获取指定下标元素get
	cout << set.get(0) << endl;   // 1
	cout << set.get(1) << endl;   // 4
	cout << set.get(2) << endl;   // 5
	cout << set.get(3) << endl;	  // 6
	cout << set.get(4) << endl;   // 下标越界！返回-1


	// 查找元素find
	// 1.集合中存在待查元素，返回其下标
	int pos = set.find(4);
	cout << pos << endl;    // 1
	cout << set.get(pos) << endl;   // 4

	// 2.集合中不存在待查元素，返回-1
	cout << set.find(2) << endl;


	// 判断是否为空isEmpty，
	// 1.当前集合不为空
	cout << set.isEmpty() << endl;    // 0

	// 2.当前集合为空
	set.del(1);
	set.del(4);
	set.del(5);
	set.del(6);
	set.print();   // 该集合为空！
	cout << set.isEmpty() << endl;    // 1

}


// 测试两个集合的运算：交集、并集、差集、补集
void test02() {
	int arr1[] = { 1,3,2,7,8,9 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	MyIntegerSet set1(arr1, len1);

	int arr2[] = { 2,3,6,5,4 };
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	MyIntegerSet set2(arr2, len2);

	cout << "set1 : ";
	set1.print();    // 自动升序排列：1 2 3 7 8 9
	cout << "set2 : ";
	set2.print(); // 2 3 4 5 6

	MyIntegerSet set3 = set_intersection(set1, set2);
	cout << "交集：";
	set3.print();   // 2 3
	cout << set3.size() << endl; // 2

	MyIntegerSet set4 = set_union(set1, set2);
	cout << "并集：";
	set4.print();  // 1 2 3 4 5 6 7 8 9
	cout << set4.size() << endl;  // 9

	MyIntegerSet set5 = set_difference(set1, set2);
	cout << "差集：";
	set5.print();  // 1 7 8 9
	cout << set5.size() << endl; // 4

	MyIntegerSet set6 = set_symmetric_difference(set1, set2);
	cout << "补集：";
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
