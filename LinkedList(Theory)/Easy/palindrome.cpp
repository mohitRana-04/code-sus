stack<int> s;
ListNode *cur = head;
while (cur)
{
    s.push(cur->val);
    cur = cur->next;
}
while (head)
{
    if (s.top() == head->val)
    {
        s.pop();
        head = head = head->next;
    }
    else
    {
        return false;
    }
}
return true;