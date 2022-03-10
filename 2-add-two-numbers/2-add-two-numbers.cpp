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
        ListNode sentinel(0);
        ListNode* ptr = &sentinel;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry){
            if(l1 != nullptr) carry += l1->val,l1 = l1->next;
            if(l2 != nullptr) carry += l2->val,l2 = l2->next;;
            ptr->next = new ListNode(carry % 10);
            carry /= 10;
            ptr = ptr->next;
        }
        return sentinel.next;
    }
};