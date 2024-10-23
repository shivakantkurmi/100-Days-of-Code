class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
       Node *temp= head;
       Node *temp2= head;
       int k =0,ans=0;
       while(temp){
           k++;
           temp=temp->next;
       }
       while (k){
           if (k<=n) ans+=temp2->data;
           temp2=temp2->next;
           k--;
       }
       return ans;
    }
};
