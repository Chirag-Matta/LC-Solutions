class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* x1 = l1;
        ListNode* x2 = l2;
        int curr = 0;
        int carry = 0;
        ListNode* ans = nullptr;
        ListNode* tail = nullptr; 

        while (x1 != nullptr || x2 != nullptr || carry != 0) {
            int sum = carry;
            if (x1 != nullptr) {
                sum += x1->val;
                x1 = x1->next;
            }
            if (x2 != nullptr) {
                sum += x2->val;
                x2 = x2->next;
            }

            curr = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(curr);
            if (ans == nullptr) {
                ans = newNode;
                tail = ans;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return ans;
    }
};
