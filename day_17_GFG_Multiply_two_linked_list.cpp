/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long mod =1000000007;
    long long convert(Node* root){
        long long num=0;
        while(root){
            num = (num*10+root->data)%mod;
            root=root->next;
        }
        return num;
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        return ((convert(first)*convert(second) )%mod);
    }
};
