#ifndef __LINKEDLIST__H__
#define __LINKEDLIST__H__

template<typename T>
struct Node {
    T data;
    Node<T>* next;
};

template<typename T>
struct DoublyLinkedNode {
    T data;
    Node<T>* previous;
    Node<T>* next;
};


#endif  //!__LINKEDLIST__H__