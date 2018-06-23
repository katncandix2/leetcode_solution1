#111. Minimum Depth of Binary Tree
class Solution {
public:
    int minDepth(TreeNode* root) {

        if(root == nullptr)
            return 0;

        if(root->left == NULL && root->right == NULL)
            return 1;


        int left  = minDepth(root->left);
        int right = minDepth(root->right);

        if(left == 0)
            left = INT_MAX;
        if(right == 0)
            right = INT_MAX;

        return min(left,right)+1;

        //return left<right ? left+1 :right +1;
    }
};
