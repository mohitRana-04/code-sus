// making a dummy node.
// check this is dummy no tthe duplicate for duplicate i have to do direct = head
ListNode *start = new ListNode();
start->next = head;
ListNode *fast = head;
ListNode *slow = head;

for (int i = 0; i <= n; i++)
{
    // to make sure that fast reaches next of that element which has to be deleted
    //         1->2->3->4->5 n = 2
    //         then 0-1, 1-2, 2-3
    fast = fast->next;

    while (fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;
    return start->next;
}
