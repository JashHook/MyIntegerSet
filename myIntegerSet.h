#pragma once
#include <iostream>
using namespace std;
#define MAX_SIZE 65536;

// 整数集合类
class MyIntegerSet
{
public:
    // 定义一个整数来记录元素个数
    int eleCount;

    // 定义一个数组作为容器
    int arr[];

    // 无参构造函数
    MyIntegerSet();

    // 有参构造函数
    MyIntegerSet(int arrTemp[], int eleCount);

    // // 定义一个指针来维护数组
    // int **p;

    // 集合大小
    int size();

    // 添加元素
    void add(int element);

    // 删除元素
    void del(int element);

    // 获取元素下标  不存在返回-1
    int getIndex(int element);

    // 判断集合是否为空
    bool isEmpty();

    // 判断元素是否重复 存在返回true  不存在返回false
    bool isRepeat(int element);

    // 打印集合元素
    void print();

    // 求交集
    void set_intersection();

    // 求并集
    void set_union();

    // 求差集
    void set_difference();

    // 求补集（对称差集）
    void set_symmetric_difference();

    // 析构函数
    ~MyIntegerSet();
};
