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
    int numComponents(ListNode* head, vector<int>& nums) {
        int freq[10001] = {0};
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int components = 1;

        while (head) {
            if (freq[head->val] and head->next) {
                head = head->next;
            } else {
                components++;
                head = head->next;
            }
        }
        return components;
    }
};