#ifndef __VALIDATELIST__H__
#define __VALIDATELIST__H__
#include <cassert>

void check_list_got_two_elements(Node<int>* node) {
    printf("%s...",__func__);

    int size = 0;
    Node<int>* head_node = node;
    while(head_node) {
        size++;
        head_node = head_node->next;
    }

    printf("size of the list: %d - Expected: %d\n", size, 2);
    assert(size == 2);
    printf("Success!!\n");
}

void check_element_in_position(Node<int>* node, int position, int expected) {
    printf("%s...",__func__);

    Node<int>* tmp = node;
    printf("first element of the list: %d - Expected: %d\n", tmp->data, expected);

    for (int i = 0;
        (tmp->next != nullptr) && (i < position);
        tmp = tmp->next, i++) {}

    printf("==>First element of the list: %d - Expected: %d\n", tmp->data, expected);


    assert(tmp->data == expected);
    printf("Success!!\n");
}

void check_if_last_element_is_correct(Node<int>* head, int last_value) {
    printf("%s...",__func__);

    Node<int>* tmp = head;

    while(tmp->next != nullptr) {
        tmp = tmp->next;
    }

    printf("Last element of the list: %d - Expected: %d\n", tmp->data, last_value);
    assert(last_value == tmp->data);
    printf("Success!!\n");

}

#endif  //!__VALIDATELIST__H__