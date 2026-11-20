/**
 * Definition for singly-linked list->
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode t(0,head);
        ListNode* f=&t;
        ListNode* s=&t;
        for(int i=1;i<=n;i++){
            f=f->next;
        }

        while(f->next !=nullptr){
            s=s->next;
            f=f->next;
        }

        s->next=s->next->next;

        return t.next;
    }
};