// Last updated: 04/07/2026, 11:41:19
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
        ListNode* front = head -> next;
        head->next = NULL;
        front->next = head;

        return newhead;
    }
    ListNode* findK(ListNode* node, int k){
        for(int i=0; i<k-1; i++){
            if(node == NULL || node->next == NULL){
                return NULL;
            }
            node = node->next;
        }
        return node;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* nextNode = NULL;
        ListNode* prevNode = NULL;
        while(temp){
            
            ListNode* kthnode = findK(temp,k);
            if(kthnode == NULL){
                if(prevNode!=NULL){
                    prevNode->next = temp;
                }

                break;
            }

            nextNode = kthnode->next;
            kthnode->next = NULL;
            ListNode* node = reverseLL(temp);
            if(temp == head){
                head = node;
            }else{
                prevNode->next = node;
            }

            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};