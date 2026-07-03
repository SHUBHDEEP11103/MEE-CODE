// Last updated: 03/07/2026, 12:26:39
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
        ListNode* head = new ListNode();
        ListNode* sum = head;
        int car = 0;
        while(l1!= NULL || l2!=NULL){
            int temp =0;
            if(l1==NULL && l2!=NULL){
                temp = l2->val + car;
                int val = temp % 10;
                sum->next = new ListNode(val);

                car = temp / 10;
                l2 = l2->next;
                sum = sum->next;

            }else if(l2==NULL && l1!=NULL){
                temp = l1->val + car;
                int val = temp % 10;
                sum->next = new ListNode(val);
                
                car = temp / 10;
                l1 = l1->next;
                sum = sum->next;
            }
            else{
                temp = l1->val + l2->val + car;
                int val = temp % 10;
                sum->next = new ListNode(val);

                car = temp / 10;
                l1 = l1->next;
                l2 = l2->next;
                sum = sum->next;
            }
        }
        if(car != 0) sum->next = new ListNode(car);
        return head->next;
    }
};