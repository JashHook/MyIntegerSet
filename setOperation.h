#pragma once
#include <iostream>
using namespace std;
#include "myIntegerSet.h"


// 求交集
MyIntegerSet set_intersection(MyIntegerSet set1, MyIntegerSet set2);

// 求并集
MyIntegerSet set_union(MyIntegerSet set1, MyIntegerSet set2);

// 求差集
MyIntegerSet set_difference(MyIntegerSet set1, MyIntegerSet set2);

// 求补集（对称差集）
MyIntegerSet set_symmetric_difference(MyIntegerSet set1, MyIntegerSet set2);

