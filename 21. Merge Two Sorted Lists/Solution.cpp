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
        ListNode *dummy = new ListNode;
        ListNode *curr = new ListNode;
        curr = dummy;
        while (list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                curr->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else{
                curr->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if(list1 != NULL){
            curr->next = list1;
        }
        if(list2 != NULL){
            curr->next = list2;
        }
        return dummy->next;
    }
};