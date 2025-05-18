#ifndef BINARY_TREE
#define BINARY_TREE


class BinaryTree
{
    private:

        struct Node
        {
            int data ;
            Node* left ;
            Node* right ;

            Node(int data, Node* left = nullptr, Node* right = nullptr);
        };

        Node* root = nullptr ;

    public:
        BinaryTree() ;
        ~BinaryTree() ;

        void insert(int val);
        void in_order_traversal() const;

private:
    void insert(Node*& node, int val);
    void in_order_traversal(Node* node) const;
    void destroy_tree(Node* node);

 

};


#endif