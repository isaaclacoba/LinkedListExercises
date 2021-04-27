#include <cstdio>

#include "node.hpp"
#include "listfactory.hpp"

#include "validatelist.hpp" // <= Do not look here if you're working on the solution!

/*
* In its most basic form, a linked list is just a succession of
* nodes linked one with the next using pointers.
*
* In this function, we receive two integers and we need to create a
* linked list composed of two nodes, using the given integers.
*
* Return the first node of the list.
*
* Args:
*
* first_value, second_value: two integers
*
* Return: a pointer to the first node of the list
*/
Node<int>* create_singly_linked_list(int first_value, int second_value) {
    /*
    *    Fill it with your code
    */
    return nullptr; //<=You should modify this too!
}

/*
* A linked list has a disadvantage: it's not possible to access elements
* randomly.
*
* In this function, we receive the first node of a linked list and an integer.
* The goal is to insert the integer at the last possition of the list.
*
* Args:
*
* head: head of a linked list
* last_value: integer
*/
void add_element_at_the_end(Node<int>* head, int last_value) {
    /*
    *    Fill it with your code
    */
}


int main(int argc, char* argv[]) {

    Node<int>* head = create_singly_linked_list(1, 2);

    check_list_got_two_elements(head);
    check_element_in_position(head, 0, 1);
    check_element_in_position(head, 1, 2);

    //Get a singly linked list of three elements
    head = create_singly_linked_list(3, 0);
    add_element_at_the_end(head, 4);
    check_if_last_element_is_correct(head, 4);

    return 0;
}
