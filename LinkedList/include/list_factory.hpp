#ifndef __LIST_FACTORY__H__
#define __LIST_FACTORY__H__

template<typename T>
Node<T>* create_empty_node(T default_value) {
    Node<T>* node = new Node<T>{default_value, nullptr};
    return node;
}

template<typename T>
Node<T>* create_singly_linked_list(int size, T default_value) {
    Node<T>* head = create_empty_node<T>(default_value);
    Node<T>* tmp = head;

    for (int i = size;  i < size; i++) {
        tmp->next = create_empty_node(default_value);
    }

    return head;
}

#endif  //!__LIST_FACTORY__H__