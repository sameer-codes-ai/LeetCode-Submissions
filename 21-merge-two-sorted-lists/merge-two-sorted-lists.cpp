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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode ans;
        ListNode* l1=&ans;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                l1->next=list1;
                list1=list1->next;
            }else{
                l1->next=list2;
                list2=list2->next;
            }
            l1=l1->next;
        }
        if(list1!=nullptr){
            l1->next=list1;
        }else{
            l1->next=list2;
        }
        return ans.next;
    }
};