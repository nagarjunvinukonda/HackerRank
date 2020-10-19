// Question:Inserting a Node Into a Sorted Doubly Linked List

// Sample Input
// NULL , data = 2
// NULL <-- 2 <--> 4 <--> 6 --> NULL , data = 5
// Sample Output
// NULL <-- 2 --> NULL NULL <-- 2 <--> 4 <--> 5 <--> 6 --> NULL


// ######################### Answer ##########################

/*
 * For reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

     if(head == NULL) {
        DoublyLinkedListNode *node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));  //create a new node
        node->data = data;
        return node;
    }

    if(head->data <= data) {
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;                     //head node's next node(A) node's previous node(address) is head
    }

    else if(head->data > data)
    {
        DoublyLinkedListNode *node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
        node->data = data;
    
        node->next = head;
        node->prev = head->prev;

        head->prev = node;
        head = node;
    }

    return head;

}