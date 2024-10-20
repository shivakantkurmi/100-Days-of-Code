/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        
       priority_queue<int,vector<int>,greater<int>> pq;
       
       for(int i=0;i<=k && head;i++)
       {
           pq.push(head->data);
           head=head->next;
       }
       
       DLLNode * h=NULL;
       DLLNode * t=NULL;
       
       while(!pq.empty())
       {
           DLLNode * n= new DLLNode(pq.top());
           pq.pop();
           
           if(h==NULL)
           {
               h=n;
               t=n;
           }
           else{
               DLLNode * temp=t;
               t->next=n;
               t=n;
               t->prev=temp;
           }
           if(head){
               pq.push(head->data);
               head=head->next;
           }
       }
    return h;
    }
};
