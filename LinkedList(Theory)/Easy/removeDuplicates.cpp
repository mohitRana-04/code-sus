// Remove Duplicates from Sorted List
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* cur = head;
        // created a extra node to traverse so that the original head dont lost
        while(cur!=NULL && cur->next!=NULL)
        // 1->2->3->3->4->5->6->6
        {
            // checking if cur value == cur.next value then we skip that and move to next
            if(cur->val==cur->next->val)
            {
                cur->next = cur->next->next;
            }
            else{
                // if it is not equals to that than we take this in the linked-list

            cur = cur->next;
            }
        }
        return head;
              
    }
};