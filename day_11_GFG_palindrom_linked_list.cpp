class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        if(head==NULL|| head->next==NULL) return true;
        Node *temp=head;
        Node *prev=head;
        Node *next=head;
        while(next&&next->next){
            prev=prev->next;
            next=next->next->next;
        }
        Node *start=NULL;
        Node *curr=prev;
        while(curr){
            Node *next1 = curr->next;
            curr->next = start;
            start = curr;
            curr = next1;
        }
        while(start){
            if(start->data!=temp->data) return false;
            start=start->next;
            temp=temp->next;
        }
        return true;
        
    }
};
