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

    vector<int> mergesort(vector<int>&a , vector<int>&b)
    {
        int i=0;
        int j=0;
        vector<int> res;
        while(i<a.size() && j<b.size())
        {
            if(a[i] < b[j])
            {
                res.push_back(a[i++]);
            }else{
                res.push_back(b[j++]);
            }
        }
        //rem ele
        while(i<a.size())
        {
            res.push_back(a[i++]);
        }
        while(j < b.size())
        {
            res.push_back(b[j++]);
        }
        return res;
    }

    vector<int> divide(vector<vector<int>>& arr, int start, int end){
        if(start==end)return arr[start];
       int mid = start+(end-start)/2;

        vector<int>left = divide(arr, start,mid);
        vector<int>right =divide(arr,mid+1,end);

        return mergesort(left,right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<vector<int>>ans;
        if(lists.size() == 0) return NULL;
        for(int i=0 ; i<lists.size() ;i++)
        {
            vector<int>curr;
            ListNode* temp = lists[i];
            while(temp!=NULL)
            {
                curr.push_back(temp->val);
                temp = temp->next;
            }
            ans.push_back(curr);
        }

        vector<int> finalVec = divide(ans, 0, ans.size() - 1);

        // Convert vector back to linked list
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        for (int x : finalVec)
        {
            tail->next = new ListNode(x);
            tail = tail->next;
        }

        return dummy->next;

        
    }
};