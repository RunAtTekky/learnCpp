#include <iostream>
using namespace std;

class TreeNode {
public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(nullptr), right(nullptr) {}

};

int main() {
        TreeNode* root = new TreeNode(7);
        root->left = new TreeNode(10);
        root->right = new TreeNode(200);

        cout << root->val << "\n" << root->left->val << " " << root->right->val << "\n";
}
