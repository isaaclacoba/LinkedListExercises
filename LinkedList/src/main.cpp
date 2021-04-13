#include <cstdio>

#include "linkedlist.hpp"
#include "validatelist.hpp" //<=Do not look into if you're working on the solution!

/*
* In its most basic form, a linked list is just a succession of
* nodes linked one with the next using pointers.
*
* In this function, we received two integers and we need to create a
* linked list composed of two nodes, using the given integers.
*
* Return the first node of the list.
*/
Node<int>* create_list_with_two_elements(int number1, int number2) {
    /*
    * Fill with your own code!
    */
    return nullptr; //<=You should modify this too!
}

int main(int argc, char* argv[]) {

    Node<int>* node = create_list_with_two_elements(1, 2);

    check_list_got_two_elements(node);
    check_if_first_element_is_1(node);
    check_if_second_element_is_2(node);

    return 0;
}
