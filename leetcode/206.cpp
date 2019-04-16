/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    //RECURSIVE
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp = reverseList(head->next);
        head->next->next =head;
        head->next=NULL;
        return temp;
    }

    
    
    
    
    //ITERATIVE
//     ListNode* reverseList(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* nextp;
        
//         while(head!=NULL){
//             nextp=head->next;
//             head->next=prev;
//             prev=head;
//             head=nextp;
//         }
        
//         return prev; 
//     }
};



