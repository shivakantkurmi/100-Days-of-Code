/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        Node *temp =head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
};
