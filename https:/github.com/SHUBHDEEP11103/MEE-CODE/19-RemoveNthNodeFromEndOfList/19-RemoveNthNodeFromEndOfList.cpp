// Last updated: 03/07/2026, 12:26:18
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode* fast = head;
        for(int i=0; i<n; i++){
            fast = fast->next;
        }
        if(!fast){
            return head->next;
        }
        
        ListNode* slow = head;
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* del = slow->next;
        slow->next = del->next;
        delete(del);

        return head;
        
    }
};