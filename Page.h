//
// Created by vcrzy on 13/05/15.
//

#ifndef PAGE_NODE_H
#define PAGE_NODE_H
template <class T,class K>
class Page {
public:
    K c;
    K amount;
    K *keys;
    Page **son;
    Page(K amount);
};
template <class T,class K>
Page::Page(K amount):keys(new T[amount]),son(new Page*[amount + 1]),c(0) { }
#endif //PAGE_NODE_H
