class Solution {
  public:
    void number(Node* root,int x,int& ans){
        x*=10;
        x+=root->data;
        if(root->left==NULL && root->right==NULL){
            ans+=x;
            return;
        }
        if(root->left){ number(root->left,x,ans);
        }
        if(root->right){
            number(root->right,x,ans);
        }
    }
    int treePathsSum(Node *root) {
        // code here.
        int ans=0;
        number(root,0,ans);
        return ans;
    }
};
