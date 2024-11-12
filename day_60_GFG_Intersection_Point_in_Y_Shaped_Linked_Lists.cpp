class Solution {
  public:
    int intersectPoint(Node* head1, Node* head2) {
        Node* ptr1 = head1 ;
        Node *ptr2 = head2;
        while (ptr1 != ptr2) {
            ptr1 = (ptr1 == nullptr) ? head2 : ptr1->next;
            ptr2 = (ptr2 == nullptr) ? head1 : ptr2->next;
        }
        if (ptr1!=NULL) return (*ptr1).data;
        else return -1;
    }
};
