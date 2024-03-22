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
    bool isPalindrome(ListNode* head) {
        // Use two pointers to find the middle of the list
        ListNode* slowPtr = head;
        ListNode* fastPtr = head->next;
        while (fastPtr && fastPtr->next) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        ListNode* prevNode = nullptr;
        ListNode* currentNode = slowPtr->next;
        while (currentNode) {
            ListNode* nextTemp = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextTemp;
        }
        while (prevNode) {
            if (prevNode->val != head->val) {
                return false;
            }
            prevNode = prevNode->next;
            head = head->next;
        }
        return true;
    }
};
