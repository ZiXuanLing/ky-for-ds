#include "../include/sqlist.h"

inline int min(int &a, int &b) {
    return a < b ? a: b;
}

void test01(SqList &L) {
    int res = L.data[0], index = 0;
    for (int i = 0; i < L.length; i ++) {  // 找出最小值，假设唯一
        res = min(res, L.data[i]);
        index = res == L.data[i] ? index: i;
    }
    int ret;
    ret = ListDelete(L, index + 1, ret);
    if (ListInsert(L, index + 1, ret) == true) {
        DBG(GREEN"[INSERT SUCCESS]" NONE);
    }
    else {
        DBG(YELLOW"[INSERT FAILURE]" NONE);
    }

}

void test02(SqList &L) {  
    for (int i = 0, j = L.length - 1; i < j; i ++, j --) {
        L.data[i] ^= L.data[j] ^= L.data[i] ^= L.data[j];  // 两数交换
    }
}