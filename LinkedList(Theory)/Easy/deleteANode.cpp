class Solution {
public:
    void deleteNode(ListNode* node) {
        // here node which we want to delete is given
        // 1->2->3->4->5
        // supose 4 we want to delete and we have given of 4 node
        // then we put the val of that node
        node->val = node->next->val;
        node->next = node->next->next;
    }
};