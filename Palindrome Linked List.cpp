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

    ListNode* reverseList(ListNode* head) {

        // if()

        ListNode* prev = NULL;
        ListNode* curr = head;
        // prev->next = NULL;
        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            // nxt = nxt->next;        
        }
        return prev;
    }


    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverseList(slow->next);
        slow = slow->next;
        while(slow){
            if(start->val!=slow->val){
                return false;
            }
            slow = slow->next;
            start = start->next;
        }
        return true;
    }
};