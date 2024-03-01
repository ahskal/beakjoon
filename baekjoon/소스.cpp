#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* findMax(Node* node) {
        while (node->right != nullptr) {
            node = node->right;
        }
        return node;
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    Node* insertRecursive(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        }
        else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    int findMinValue() {
        Node* minNode = findMin(root);
        return minNode->data;
    }

    int findMaxValue() {
        Node* maxNode = findMax(root);
        return maxNode->data;
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    std::cout << "가장 작은 값: " << bst.findMinValue() << std::endl;
    std::cout << "가장 큰 값: " << bst.findMaxValue() << std::endl;

    return 0;
}
