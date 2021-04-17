#ifndef __LINKEDLIST__H__
#define __LINKEDLIST__H__

template<typename T>
struct Node {
    T data;
    Node<T>* next;
};

#endif  //!__LINKEDLIST__H__