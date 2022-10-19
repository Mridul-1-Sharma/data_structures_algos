

// return the Height of the given Binary Tree
int height(Node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    int a = height(root->left);
    int b = height(root->right);
    return max(a,b)+1;
}
