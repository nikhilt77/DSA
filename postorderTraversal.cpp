#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* node) {
        vector<int> res;
        postOrder(node, res);
        return res;
    }

    void postOrder(TreeNode *ptr, vector<int>& res) {
        if (ptr == nullptr) return;
        postOrder(ptr->left, res);
        postOrder(ptr->right, res);
        res.push_back(ptr->val);
    }
};

TreeNode* buildTree() {
    int val;
    cin >> val;
    if (val == -1) return nullptr;
    TreeNode* root = new TreeNode(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int main() {
    TreeNode* root = buildTree();
    Solution sol;
    vector<int> result = sol.postorderTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}
