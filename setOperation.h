#pragma once
#include <iostream>
using namespace std;
#include "myIntegerSet.h"


// �󽻼�
MyIntegerSet set_intersection(MyIntegerSet set1, MyIntegerSet set2);

// �󲢼�
MyIntegerSet set_union(MyIntegerSet set1, MyIntegerSet set2);

// ��
MyIntegerSet set_difference(MyIntegerSet set1, MyIntegerSet set2);

// �󲹼����ԳƲ��
MyIntegerSet set_symmetric_difference(MyIntegerSet set1, MyIntegerSet set2);

