#160. Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int lenA = getListLength(headA);
        int lenB = getListLength(headB);
        
        
        if(lenA == 0 || lenB == 0)
        {
            return nullptr;
        }
        
        int diff = lenA - lenB ;
        
        ListNode * sortHead = headA;
        ListNode * longHead = headB;
        
        if(diff > 0)
        {
            sortHead = headB;
            longHead = headA;
        }
      
        //链表差值
        diff = abs(diff);
        
        while(diff>0)
        {
            longHead = longHead->next;
            diff-- ;
        }
        
        while(longHead !=nullptr)
        {
            if(longHead->val == sortHead->val)
                return longHead;
            
            longHead = longHead->next;
            sortHead = sortHead->next;
            
        }
        
        return nullptr;
        
    }
    
    
    //获取链表长度
    int getListLength(ListNode *head)
    {
        int len = 0;
        if(head==nullptr)
        {
            return 0;
        }
        
        ListNode *h = head;
        while(h!=nullptr)
        {
            len++;
            h = h->next;
        }
        
        return len;
    }
};
