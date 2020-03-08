//剑指第19题
//操作给定的二叉树，将其变换为源二叉树的镜像。


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot==NULL)
            return;
        if(pRoot->left==NULL && pRoot->right== NULL)
            return;
        TreeNode *temp;
        temp=pRoot->left;
        pRoot->left=pRoot->right;
        pRoot->right=temp;
        if(pRoot->left){
            Mirror(pRoot->left);
        }
        if(pRoot->right){
            Mirror(pRoot->right);
        }


    }
};

//调试成功