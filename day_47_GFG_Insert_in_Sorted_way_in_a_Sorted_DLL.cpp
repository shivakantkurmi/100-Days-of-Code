/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion


class Solution {
public:
    Node* sortedInsert(Node* head, int x) {
        Node *temp = head;
        Node* newnode = new Node();
        newnode->data = x;
        newnode->prev = nullptr;
        newnode->next = nullptr;
        if (!head) {
            return newnode;
        }
        if (head->data >= x) {
            newnode->next = head;
            head->prev = newnode;
            return newnode; 
        }
        
        while (temp->next && temp->data < x) {
            temp = temp->next;
        }
        if (temp->data >= x) { 
            newnode->prev = temp->prev;
            newnode->next = temp;
            temp->prev->next = newnode;
            temp->prev = newnode;
        } else { 
            temp->next = newnode;
            newnode->prev = temp;
        }

        return head; 
    }
};

