/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        return haveLoop(head,head);
    }
    private:
    
    bool haveLoop(Node *slowPointer, Node *fastPointer) {
        
        if (fastPointer == nullptr || fastPointer->next == nullptr) {
            return false;
        }
        Node *sl = slowPointer->next;
        Node *ft = fastPointer->next->next;
        
        if (ft == sl) {
            return true;
        }
        return haveLoop(sl,ft);
    }
};
