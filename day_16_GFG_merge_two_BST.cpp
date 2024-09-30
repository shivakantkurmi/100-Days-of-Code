class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in sorted order.
    void inorder(Node *root, vector<int> &A) {
        if (root == nullptr) return; // Base condition
        inorder(root->left, A);
        A.push_back(root->data); // Push the node's data, not the node
        inorder(root->right, A);
    }

    vector<int> merge(Node *root1, Node *root2) {
        vector<int> A, B, ans;
        inorder(root1, A); // Get the inorder traversal of first BST
        inorder(root2, B); // Get the inorder traversal of second BST
        
        int p = A.size(), q = B.size();
        int i = 0, j = 0;
        
        // Merge the two sorted arrays A and B
        while (i < p && j < q) {
            if (A[i] < B[j]) {
                ans.push_back(A[i]);
                i++;
            } else {
                ans.push_back(B[j]);
                j++;
            }
        }
        
        // If there are remaining elements in A
        while (i < p) {
            ans.push_back(A[i]);
            i++;
        }
        
        // If there are remaining elements in B
        while (j < q) {
            ans.push_back(B[j]);
            j++;
        }
        
        return ans; // Return the merged sorted list
    }
};
