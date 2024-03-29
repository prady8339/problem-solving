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
    ListNode* partition(ListNode* head, int x) {
        ListNode *before_head= new ListNode(0),*after_head = new ListNode(0);
        ListNode *before= before_head, *after = after_head;

        ListNode* temp = head;
        while(temp){
            if(temp->val < x){
                before->next = temp;
                before=before->next;
            }else{
                after->next = temp;
                after=after->next;
            }
            temp=temp->next;
        }

        after->next = NULL;
        before->next = after_head->next;

        return before_head->next;
    }
};