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
    int getlen(ListNode* head)
        {
            int len = 0;
            ListNode*temp = head;
            while(temp !=NULL)
            {
                temp=temp->next;
                len++;
            }
            return len;
        }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len=0;
        
        int lenA = getlen(headA);
        int lenB = getlen(headB);

        while(lenA>lenB){
            lenA--;
            headA=headA->next;       
        }
        while(lenA<lenB)
        {
            lenB--;
            headB = headB->next;
        }

        while(headA != NULL || headB != NULL)
        {
            if(headA == headB) return headA;

            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};