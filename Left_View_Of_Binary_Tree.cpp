void rec(Node *root, vector<int> &ans, int &max, int curr)
{
    if (root == NULL)
    {
        return;
    }
    if (curr > max)
    {
        max = curr;
        ans.push_back(root->data);
    }
    rec(root->left, ans, max, curr + 1);
    rec(root->right, ans, max, curr + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    int max = 0;
    rec(root, ans, max, 1);
    return ans;
}
