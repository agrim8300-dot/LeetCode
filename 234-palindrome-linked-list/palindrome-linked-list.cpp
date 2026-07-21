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

    ListNode* reverse(ListNode* rhead)
    {
        ListNode* prev = NULL;
        ListNode* curr = rhead;

        while(curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == NULL || head->next == NULL)return true;

        while(fast->next != NULL && fast->next->next !=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* rhead = slow->next;
       rhead =  reverse(rhead);

        slow = head;
        while(rhead != NULL)
        {
            if(slow->val != rhead->val){
            return false;
            }
            slow = slow->next;
            rhead = rhead->next;
           
        
        }
   return true;
    }
};