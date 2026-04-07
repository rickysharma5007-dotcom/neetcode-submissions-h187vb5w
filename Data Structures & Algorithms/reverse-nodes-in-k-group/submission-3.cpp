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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
       ListNode* prevStart=&dummy;
              prevStart->next=head;
         while(true)
         {
            ListNode* kth=get_k(prevStart,k);

            if(!kth) break;

             ListNode* end=kth->next;
             ListNode* curr=prevStart->next;
             ListNode* t1=kth->next;

            while(curr!=end)
            {
                ListNode* t2=curr->next;
                curr->next=t1;
                t1=curr;
                curr=t2;
            }

           ListNode* temp=prevStart->next;
            prevStart->next=kth;
            prevStart=temp;

         }
         return dummy.next;

    }
    ListNode* get_k(ListNode*curr,int k)
    {
        while(curr!=nullptr&&k>0)
        {
            curr=curr->next;
            k--;
        }
        return curr;
       
    }
};
