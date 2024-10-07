struct Node *insert(struct Node *head, int data) {
    // Code here
    Node *newNode  = new Node(data);
    if(head == NULL) return newNode;
    newNode->npx = head;
    head = newNode;
    return head;
}
vector<int> getList(struct Node *head) {
    // Code here
    vector<int> v;
    Node *temp = head;
    while (temp){
        v.push_back(temp->data);
        temp = temp->npx;
    }return v;
}
