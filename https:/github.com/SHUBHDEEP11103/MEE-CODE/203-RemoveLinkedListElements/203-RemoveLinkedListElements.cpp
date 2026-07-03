// Last updated: 03/07/2026, 12:24:51
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        while(head && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* temp = head;
        while(temp){
            ListNode* nn = temp->next;
            if(nn && nn->val == val){
                temp->next = nn->next;
                delete nn;
            }
            else{
                temp = temp->next;
            }
        }

        return head;
    }
};