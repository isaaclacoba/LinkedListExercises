#include <cstdio>

#include "linkedlist.hpp"
#include "list_factory.hpp"

#include "validatelist.hpp" //<=Do not look into if you're working on the solution!

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
* number1, number2: two integers
*
* Return: a pointer to the first node of the list
*/
Node<int>* create_list_with_two_elements(int number1, int number2) {
    /*
    * Fill it with your own code!
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
    * Fill it with your own code!
    */
}

int main(int argc, char* argv[]) {

    Node<int>* head = create_list_with_two_elements(1, 2);

    check_list_got_two_elements(head);
    check_if_first_element_is_1(head);
    check_if_second_element_is_2(head);

    //Get a singly linked list of three elements
    head = create_singly_linked_list<int>(3, 0);
    add_element_at_the_end(head, 4);
    check_if_last_element_is_correct(head, 4);

    return 0;
}
