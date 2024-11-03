class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        if ((*head)&&(*head)->next==nullptr) return false ;
        Node *fast=(*head)->next->next;
        while(fast&&fast->next){
            fast=fast->next->next;
        }
        if (fast) return false;
        return true;
    }
};
