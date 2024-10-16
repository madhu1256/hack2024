class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(check(root)==-1)
        return false;
        return true;
    }
    int check(Node *root)
    {
        if(root==NULL)
        return 0;
        int l= check(root->left);
        if(l==-1)
        return -1;
        int r=check(root->right);
        if(r==-1)
        return -1;
        if(abs(l-r)>1)
        return -1;
        else
        return 1+max(l,r);
    }
};
