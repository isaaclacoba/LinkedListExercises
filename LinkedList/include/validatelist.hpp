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

void check_if_first_element_is_1(Node<int>* node) {
    printf("%s...",__func__);
    printf("First element of the list: %d - Expected: %d\n", node->data, 1);

    assert(node->data == 1);
    printf("Success!!\n");
}

void check_if_second_element_is_2(Node<int>* node) {
    printf("%s...",__func__);
    printf("Second element of the list: %d - Expected: %d\n", node->next->data, 2);

    assert(node->next->data == 2);
    printf("Success!!\n");
}

/*
* Reference implementation:
*
*    Node<int>* create_list_with_two_elements(int number1, int number2) {
*
*        Node<int>* node1 = new Node<int>{1, nullptr};
*        Node<int>* node2 = new Node<int>{2, nullptr};
*
*        node1->next = node2;
*
*        return node1;
*    }
*/


#endif  //!__VALIDATELIST__H__