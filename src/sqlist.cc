/**
 * @file sqlist.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/sqlist.h"

bool ListInsert(SqList &L, int i, int e) {
    /**
     * @brief i < 1表示第一个元素是1 L.length + 1表示插入的最后一个元素是length+1
     * 此处表示的是位序
     * 
     */
    if (i < 1 || i > L.length + 1) {  // 检查i的范围是否有效
        return false;
    }
    if (L.length >= MaxSize) {  // 检查存储空间是否已满
        return false;  
    }
    // 此处表示的是下标
    for (int j = L.length; j >= i; j --) {
        L.data[j] = L.data[j - 1];  // 将第i个元素及之后的元素后移
    }
    L.data[i - 1] = e;
    L.length ++;
    return true;
}

bool ListDelete(SeqList &L, int i, int e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    e = L.data[i - 1];
    for (int j = i; j < L.length; j ++) {
        L.data[j - 1] = L.data[j];
    }
    L.length --;
    return true;
} 

int LocateElem(SqList L, int e) {
    int i;
    for (int i = 0; i < L.length; i ++) {
        if (L.data[i] == e) {
            return i + 1;  // 返回其位序
        }
    }
    return 0;
}

SqList InitSqList() {
    SqList sq;
    sq.length = 0;
    return sq;
}

int Length(SqList &L) {
    return L.length;
}

void PrintList(SqList &L) {
    for (int i = 0; i < L.length; i ++) {
        DBG(GREEN"%d " NONE, L.data[i]);
    }
    DBG(GREEN"\n" NONE);
}

bool Empty(SqList &L) {
    return L.length == 0;
}

void DestroyList(SqList &L) {
    
}