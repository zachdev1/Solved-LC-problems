/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int x, int y){
    int tmp = 0;
    if(x > y){
        tmp = x;
    }else{
        tmp = y;
    }
    return tmp;
}

int maxDepth(struct TreeNode* root) {
    int maxLeft = 0;
    int maxRight = 0;
    
    if(root == NULL) return NULL;
    
    maxLeft = maxDepth(root->left);
    maxRight = maxDepth(root->right);
    
    return max(maxLeft,maxRight) + 1;
    
}