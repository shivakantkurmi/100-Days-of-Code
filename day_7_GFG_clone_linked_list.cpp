class Solution {
  public:
    Node *copyList(Node *head) {
        // Write your code here
        unordered_map<Node*,Node*>mpp;
        Node*temp = head;
        while(temp){
            mpp[temp] = new Node(temp->data);
            temp = temp->next;
        }
        temp = head;
        while(temp){
            mpp[temp]->next = temp -> next ? mpp[temp->next]:NULL;
            mpp[temp]->random = temp->random ? mpp[temp->random] : NULL;
            temp = temp->next;
        }
        return mpp[head];
   
