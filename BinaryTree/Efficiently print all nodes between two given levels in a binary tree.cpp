/*
For example, if the starting level is 2 and the ending level is 3, the solution should print nodes in order [2, 3, 4, 5, 6, 7]
                   1
                  / \
                 2   3
                / \  / \
               4  5 6   7
*/
/*
A simple solution would be to print all nodes of given levels one by one. We can print all nodes present in a level by modifying the preorder traversal of the tree. The time complexity of this solution is O(n2), where n is the total number of nodes in the binary tree.
We can reduce the time complexity to O(n) by modifying the level order traversal.
*/
#include <iostream>
#include <list>
using namespace std;

// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

// Iterative function to print all nodes between two given
// levels in a binary tree
void printNodes(Node *root, int start, int end)
{
    if (root == nullptr)
    {
        return;
    }

    // create an empty queue and enqueue the root node
    list<Node *> queue;
    queue.push_back(root);

    // pointer to store the current node
    Node *curr = nullptr;

    // maintains the level of the current node
    int level = 0;

    // loop till queue is empty
    while (!queue.empty())
    {
        // increment level by 1
        level++;

        // calculate the total number of nodes at the current level
        int size = queue.size();

        // process every node of the current level and enqueue their
        // non-empty left and right child
        while (size--)
        {
            curr = queue.front();
            queue.pop_front();

            // print the node if its level is between given levels
            if (level >= start && level <= end)
            {
                cout << curr->key << " ";
            }

            if (curr->left)
            {
                queue.push_back(curr->left);
            }

            if (curr->right)
            {
                queue.push_back(curr->right);
            }
        }

        if (level >= start && level <= end)
        {
            cout << endl;
        }
    }
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
    root->right->right->right = new Node(30);

    int start = 2, end = 3;
    printNodes(root, start, end);

    return 0;
}