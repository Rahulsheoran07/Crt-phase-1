#include <iostream>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Root: " << root->data << endl;
    cout << "Left Child of Root: " << root->left->data << endl;
    cout << "Right Child of Root: " << root->right->data << endl;
    cout << "Left Child of Left Child: " << root->left->left->data << endl;
    cout << "Right Child of Left Child: " << root->left->right->data << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}