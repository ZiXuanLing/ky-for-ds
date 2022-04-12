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
    if (i < 1 || i > L.length + 1) {  // 检查i的范围是否有效
        return false;
    }
    if (L.length >= MaxSize) {  // 检查存储空间是否已满
        return false;  
    }
    for (int j = L.length; j >= i; j --) {
        L.data[j] = L.data[j - 1];  // 将第i个元素及之后的元素后移
    }
    L.data[i - 1] = e;
    L.length ++;
    return true;
}

bool ListDelete(SeqList &L, int i, int e) {

} 

int LocateElem(SqList L, int e) {
    
}