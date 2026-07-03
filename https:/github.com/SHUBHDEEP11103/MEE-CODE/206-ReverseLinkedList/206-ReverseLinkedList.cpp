// Last updated: 03/07/2026, 12:24:48
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
    ListNode* reverseLL(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newhead = reverseLL(head->next);
        ListNode* front = head->next;
        head->next = NULL;
        front->next = head;

        return newhead;
    }
    ListNode* reverseList(ListNode* head) {        
        // ListNode* temp = head;
        // ListNode* front;
        // ListNode* prev = NULL;
        // // vector<int> no;
        // while(temp){
        //     front = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     cout<<temp->val;
        //     temp = front;
        // }
        // head = prev;
        // // for(int j=no.size()-1; j>=0; j--){
        // //     cout<<no[j]<<endl;
        // //     curr->val = no[j];
        // //     cout<<curr->val<<endl;
        // //     curr = curr->next;
        // // }

        // return head;
        return reverseLL(head);
    }
};