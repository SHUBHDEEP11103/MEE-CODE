// Last updated: 17/07/2026, 21:07:06
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }

        Node* temp = head;
        while(temp){
            Node* node = new Node(temp->val);
            node->next = temp->next;
            temp->next = node; 
            temp = temp->next->next;
        }

        temp = head;
        Node* newhead = temp->next;
        while(temp){
            if(temp->random == NULL){
                temp->next->random = NULL;
            }else{
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
        temp = head;
        while(temp){
            Node* node = temp->next;
            temp->next = node->next;
            if(node->next){
                node->next = node->next->next;
            }
            temp = temp->next;
        }

        return newhead;
    }
};