#ifndef __SQLIST_H__

#define __SQLIST_H__

#include "common.h"

// 静态分配
#define MaxSize 50  // 定义线性表的最大长度
typedef struct {
    int data[MaxSize];  // 顺序表的长度
    int length;  // 顺序表的当前长度
} SqList;

// 动态分配
#define InitSize 100  // 表长度的初始定义
typedef struct {
    int *data;  // 指示动态分配数组的指针
    int eMaxSize, length;  // 表的最大容量和当前个数
} SeqList;
 
/**
 * @brief 在顺序表的第i(1<=i<=L.length+1)个位置插入新元素e
 * 
 */
bool ListInsert(SqList &L, int i, int e);  // 插入操作
bool ListDelete(SqList &L, int i, int e);  // 删除操作
int LocateElem(SqList L, int e);  // 查找操作

#endif // !__SQLIST_H__