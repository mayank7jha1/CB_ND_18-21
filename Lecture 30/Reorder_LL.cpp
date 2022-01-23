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
    ListNode* mid(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast and fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    void reversell(ListNode* &head) {
        ListNode *current = head;
        ListNode*prev = NULL;
        ListNode *n;
        while (current != NULL) {
            n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }
        head = prev;
    }
public:
    void reorderList(ListNode* head) {
        if (head == NULL or head->next == NULL) {
            return;
        }
        ListNode* m = mid(head);
        ListNode *h = head;
        ListNode *h1 = m->next;
        m->next = NULL;
        reversell(h1);
        ListNode *x, *y;
        while (h1) {
            x = h->next;//x=2
            y = h1->next;//y=4 and h=1 and h1=5
            h->next = h1;
            h = x;
            h1->next = h;
            h1 = y;
        }

    }
};


// HINT: Mid point vo last element hoga: