/*
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
class Solution {
  public:
    int h(struct Node* node){
        if (node == NULL) {
            return 0; 
        }
        int leftHeight = h(node->left);
        int rightHeight = h(node->right);
        return 1 + max(leftHeight, rightHeight);
    }
    int height(struct Node* node) {
        Node* temp=node;
        return  h(temp)-1;
    }
};
