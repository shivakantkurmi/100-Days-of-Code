/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry =0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* prev=NULL;
        int d1,d2;
        while(temp1 && temp2){
            d1=temp1->val;
            d2=temp2->val;
            int sum=d1+d2+carry;
            if(sum>9){
                carry=1;
                temp1->val=sum%10;
            }
            else{
                temp1->val=sum;
                carry=0;
            }
            prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp2!=NULL){
            while(temp2!=NULL){
                ListNode* newnode =new ListNode((temp2->val+carry)%10,NULL);
                prev->next=newnode;
                prev=newnode;
                carry=(temp2->val + carry )/10;
                temp2=temp2->next;
            }
        }
        if(temp1!=NULL){
            while(temp1!=NULL){
                if(carry){
                    int v=temp1->val;
                    temp1->val = (temp1->val + carry)%10;
                    carry=(v+carry)/10;
                }
                prev=temp1;
                temp1=temp1->next;
            }
        }
        if (carry){
            ListNode* newnode =new ListNode(carry,NULL);
            prev->next=newnode;
        }
        return l1;
    }
};
