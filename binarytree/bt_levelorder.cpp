
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


 class Solution {
 public:
     vector<vector<int>> levelOrder(TreeNode* root) {
       int depth=getheight(root);
       vector<vector<int>> tree(depth);
       if(depth==0) return tree;
       getdata(tree,root,0);
       return tree;
     }
     void getdata(vector<vector<int>>& tree, TreeNode* root, int level){
     if(root==NULL)
         return;
     tree[level].push_back(root->val);
     getdata(tree,root->left,level+1);
     getdata(tree,root->right,level+1);
   }

     int getheight(TreeNode* root){
       if(root==NULL) return 0;
       int left=getheight(root->left);
       int right=getheight(root->right);
       int height=(left>right?left:right)+1;
       return height;
     }
 };
