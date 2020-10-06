//RECURSIVE
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
		    return new TreeNode(val);
        if(val>root->val)
		    root->right = insertIntoBST(root->right,val);
        else 
		    root->left = insertIntoBST(root->left,val);
        return root;
    }
};
//ITERATIVE
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val,bool f = true) {
        if (!root) return new TreeNode(val);
        TreeNode* current = root;
        while (f) 
            if (current->val < val)
                if(current->right)
                    current = current->right;
                else
                   current->right = new TreeNode(val),f = false;
            else
                if(current->left)
                    current = current->left;
                else
                   current->left = new TreeNode(val),f = false;               
        return root;
    }
};
