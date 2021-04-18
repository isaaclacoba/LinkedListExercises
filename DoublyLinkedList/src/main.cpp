#include <cstdio>

/*
* A doubly linked list has a fundamental difference from a singly linked list:
* in addition to the link to the next node, it has a second link to the
* previous node.
*
* In this function, we receive two integers and we need to create a
* doubly linked list composed of two nodes.
*/
DoublyLinkedNode<int>* create_doubly_linked_list(int first_value, int second_value ) {
    /*
    * Fill it with your own code!
    */
    DoublyLinkedNode<int>* head = new DoublyLinkedNode<int>{};

    return nullptr; //Also this!!
}

int main(int argc, char* argv[]) {
    DoublyLinkedNode doubly_linked_head = create_doubly_linked_list();

    check_list_got_two_elements(doubly_linked_head);
    check_double_link(doubly_linked_head);

    return 0;
}
