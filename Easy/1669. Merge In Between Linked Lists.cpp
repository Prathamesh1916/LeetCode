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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* current = list1;
        ListNode* list3 = NULL;
        ListNode* list4 = NULL;

        for (int i = 0; i < a-1; i++) {
            current = current->next;
        }
        list3 = current;

        for (int i = a; i <= b+1; i++) {
            current = current->next;
        }
        list4 = current;

        list3->next = list2;

        while (list2->next != NULL) {
            list2 = list2->next;
        }

        list2->next = list4;

        return list1;
    }
};
