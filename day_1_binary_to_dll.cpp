/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution {
  public:
    Node *start=NULL;
    Node *current=NULL;
    void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    
    inorderTraversal(root->left);
    
    
    int data= root->data;
    Node *newnode=new Node(data);
    if(start==NULL){
        start = newnode;
        current=newnode;
    }
    else{
        current->right=newnode;
        newnode->left=current;
        current=newnode;
    }
    
    inorderTraversal(root->right);
}
    Node* bToDLL(Node* root) {
        Node *temp=root;
        inorderTraversal(temp);
        return start;
        
    }
};
