/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        // int cnt =1;
        Node *temp = head;
        while(temp->next){
            if(temp->next->next){
                temp->next= temp->next->next;
                temp=temp->next;
            }
            else{
                temp->next = NULL;
            }
        }
        
    }
};
