
struct TreeNode {
   pTreeNode _left_child;
   pTreeNode _right_child;
   int _data;
}TreeNode,*pTreeNode;


void MidTree(pTreeNode root){
    if (!root){
       return;
    }

    MidTree(root->_left_child)
    printf("%d", root._data);
    MidTree(root->_right_child)
}

void PreTree(pTreeNode root){
    if (!root){
       return;
    }

    printf("%d", root->_data);
    MidTree(root->_left_child)
    MidTree(root->_right_child)
}

void PostTree(pTreeNode root){
    if (!root){
       return;
    }

    MidTree(root->_left_child)
    MidTree(root->_right_child)
    printf("%d", root._data);
}

void SearchTree(pTreeNode root){
    if (!root){
       return;
    }
    
    std::stack<pTreeNode> TreeStack;
    TreeStack.push_back(root);

    pTreeNode node = TreeStack.pop()
    while(node != NULL){
       printf("%d\r\n", node->_data);
       if (node->_left_child !=NULL) {
          TreeStack.push_back(node->_left_child);
       }

        if (node->_right_child !=NULL) {
          TreeStack.push_back(node->_right_child);
       }

       node = TreeStack.pop();
    }    
}
