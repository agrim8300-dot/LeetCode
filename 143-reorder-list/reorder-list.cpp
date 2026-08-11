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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)return;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next != NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rhead = slow->next;
        slow->next = NULL;
        rhead = reverse(rhead);
        // slow = head;
        ListNode* first = head;
        ListNode* second = rhead;
        
     while (second != NULL) {
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;

    first->next = second;
    second->next = temp1;

    first = temp1;
    second = temp2;
    }
    

}
};