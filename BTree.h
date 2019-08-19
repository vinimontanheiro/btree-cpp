//
// Created by vcrzy on 13/05/15.
//
#include "Page.h"

#ifndef BTREE_BTREE_H
#define BTREE_BTREE_H
template <class T,class K>
class BTree{
private:
    Page *root;
    T item;
    void add(T item);
    T find(K key);
    void printByDesc();
    void printByAsc();
    T remove(K key);

};
#endif //BTREE_BTREE_H
