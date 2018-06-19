#83. Remove Duplicates from Sorted List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == nullptr)
        {
            return head;
        }

        ListNode * current = head;
        ListNode * nextNode = current ->next;

        while(nextNode !=nullptr)
        {
            if(nextNode->val != current->val)
            {
                current->next = nextNode;
                current = nextNode;
            }else
            {
                current->next = nullptr;
            }

            nextNode = nextNode->next;

        }

        return head ;
    }
};
