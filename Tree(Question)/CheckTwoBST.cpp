class Solution
{
public:
    void checking1(vector<int> &v1, TreeNode *p)
    {
        if (p == NULL)
        {
            v1.push_back(0);

            return;
        }
        v1.push_back(p->val);
        checking1(v1, p->left);
        checking1(v1, p->right);
    }
    void checking2(vector<int> &v2, TreeNode *q)
    {
        if (q == NULL)
        {
            v2.push_back(0);
            return;
        }
        v2.push_back(q->val);
        checking2(v2, q->left);
        checking2(v2, q->right);
    }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> v1;
        vector<int> v2;
        checking1(v1, p);
        checking2(v2, q);
        return v1 == v2;
    }
};