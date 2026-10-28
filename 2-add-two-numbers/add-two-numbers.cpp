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
        ListNode* ans=new ListNode(0);
        ListNode* head=ans;
        int x=0;
        while(l1!=nullptr || l2!=nullptr || x!=0){
            int v1=(l1!=nullptr)?l1->val:0;
            int v2=(l2!=nullptr)?l2->val:0;
            int total=x+v1+v2;
            x=total/10;
            
            ans->next=new ListNode(total%10);
            ans=ans->next;

            if(l1!=nullptr)l1=l1->next;
            if(l2!=nullptr)l2=l2->next;
        }
        ListNode* realAns=head->next;
        return realAns;
    }
};