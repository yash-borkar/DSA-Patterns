class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = NULL;
        ListNode* currNode = head;
        ListNode* nextNode = NULL;

        while(currNode != NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }

        return prevNode;

    }

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev;

        while(fast->next != NULL){
            fast = fast->next;
            prev = slow;
            slow = slow->next;
            if(fast->next!=NULL){
                fast = fast->next;
            }
        }
        prev->next = NULL;
        return slow;
    }

    bool isPalindromeHelper(ListNode* head1, ListNode* head2) {
        while(head1!=NULL && head2!=NULL){
            if(head1->val != head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* head2 = middleNode(head);
        head2 = reverseList(head2);
        return isPalindromeHelper(head, head2);
    }
};