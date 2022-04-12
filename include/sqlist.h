#ifndef __SQLIST_H__

#define __SQLIST_H__

#include "common.h"

#include <stdio.h>
#include <string.h>

// 静态分配 default
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
 *        时间复杂度：O(n)
 * 
 * @param L 
 * @param i 
 * @param e 
 * @return true 
 * @return false 
 */
bool ListInsert(SqList &L, int i, int e);  // 插入操作

/**
 * @brief 在顺序表的第i(1<=i<=L.length+1)个位置删除元素
 *        时间复杂度：O(n)
 * @param L 
 * @param i 
 * @param e 
 * @return true 
 * @return false 
 */
bool ListDelete(SqList &L, int i, int e);  // 删除操作

/**
 * @brief 查找顺序表中第一个元素值等于e的元素
 * 
 * @param L 
 * @param e 
 * @return int 
 */
int LocateElem(SqList L, int e);  // 查找操作

SqList InitSqList();  // 初始化顺序表
inline int Length(SqList &L);  // 求表长
void PrintList(SqList &L); // 输出操作
inline bool Empty(SqList &L);  // 判断是否为空
void DestroyList(SqList &L); // 销毁操作

#endif // !__SQLIST_H__