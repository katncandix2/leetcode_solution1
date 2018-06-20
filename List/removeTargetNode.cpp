#203. Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while(head!=NULL&&head->val==val)
        {
            head= head->next;
        }

        ListNode * currentNode = head;

        while(currentNode!=nullptr && currentNode->next!=nullptr)
        {
            if(currentNode->next->val == val)
            {
                currentNode->next = currentNode->next->next;
            }else{
                currentNode = currentNode->next;
            }
        }

        return head;
    }
};
