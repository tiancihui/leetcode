#include<queue>
#include<queue>

using namespace std;

struct TreeNode {
	int _data;
	vector<pTreeNode> _children;
}TreeNode, pTreeNode;

void levelOrder(pTreeNode root){
	if !root {
	   return
	}

	std::queue<pTreeNode> data_queue;
	data_queue.push(root);

	while(!data_queue.empty()){
	   pTreeNode node = data_queue.pop();
	   std::cout << node->data << std::endl;
	   for(int i = 0; i < (node->_children).length()){
	   data_queue.push(node->_children[i]);
	   }
	}

}

int main(){
	levelOrder(pTreeNode root);
    return 0;
}

