#include "myIntegerSet.h"

// 无参构造函数
MyIntegerSet::MyIntegerSet()
{
};

// 有参构造函数
MyIntegerSet::MyIntegerSet(int arrTemp[], int eleCount)
{
    for (int i = 0; i < eleCount; i++)
    {
        this->arr[i] = arrTemp[i];
    }
};

// 集合大小
int MyIntegerSet::size()
{
    int size = this->eleCount * sizeof(int);
    return size;
};

// 判断元素是否重复 存在返回true  不存在返回false
bool MyIntegerSet::isRepeat(int element)
{
    if (this->eleCount == 0)
    {
        cout << "该数组为空！" << endl;
        return false;
    }

    for (int i = 0; i < this->eleCount; i++)
    {
        if (this->arr[i] == element)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// 添加元素
void MyIntegerSet::add(int element){};

// 删除元素
void MyIntegerSet::del(int element){};

// 获取元素下标  不存在返回-1
int MyIntegerSet::getIndex(int element)
{
    for (int i = 0; i < this->size(); i++)
    {
        if (this->arr[i] == element)
        {
            return i;
        }
        else
        {
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
void MyIntegerSet::print(){};

// 求交集
void MyIntegerSet::set_intersection(){

};

// 求并集
void MyIntegerSet::set_union(){};

// 求差集
void MyIntegerSet::set_difference(){};

// 求补集（对称差集）
void MyIntegerSet::set_symmetric_difference(){};

// 析构函数
MyIntegerSet::~MyIntegerSet(){

};