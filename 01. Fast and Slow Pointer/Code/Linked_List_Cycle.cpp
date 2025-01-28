class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast){
            fast = fast->next;
            slow = slow->next;
            if(fast){
                fast = fast->next;
                if(slow == fast) return true;
            }
        }
        return false;
    }
};