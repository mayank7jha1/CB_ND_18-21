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
    int length(ListNode *head) {
        int len = 0;
        ListNode *temp = head;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }
        return len;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int n = length(root);
        ListNode*head = root;

        int ElementsRemaining = n % k;
        int parts = n / k;
        int len = n / k;
        vector<ListNode*>ans;
        if (parts == 0) {
            //Each and Every segment will be of length 1;
            for (int i = 0; i < k; i++) {
                if (head) {
                    ListNode*n = head->next;
                    head->next = NULL;
                    ans.push_back(head);
                    head = n;
                } else {
                    ans.push_back(NULL);
                }
            }
        } else {
            int count = 1;
            while (head) {
                ans.push_back(head);
                int x = ElementsRemaining > 0 ? 1 : 0;
                ElementsRemaining--;
                for (int i = 1; i < len + x; i++) {
                    head = head->next;
                }
                ListNode* n = head->next;
                head->next = NULL;
                head = n;
                count++;
                if (count == k) {//all the remaining elements will belong to this segment:
                    ans.push_back(head);
                    break;
                }
            }
        }
        return ans;
    }
};

