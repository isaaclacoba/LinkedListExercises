Node<int>* create_list_with_two_elements(int number1, int number2) {

    Node<int>* node1 = new Node<int>{1, nullptr};
    Node<int>* node2 = new Node<int>{2, nullptr};
    node1->next = node2;

    return node1;
}

void add_element_at_the_end(Node<int>* head, int last_value) {

    Node<int>* tmp = head;

    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }

    Node<int>* tail = new Node<int>{last_value, nullptr};
    tmp->next = tail;
}