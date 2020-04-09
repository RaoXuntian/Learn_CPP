//数的前序、中序、后序、层序四种遍历的递归和非递归方法
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int n):val(n),left(NULL),right(NULL) {};
};

std::vector<int> ans;
void show(vector<int>& v) {
	for (auto x:v) cout << x << " ";
	cout << endl;
	v.clear();
}

//前序递归遍历
void preOrder(TreeNode* root) {
	if (root==NULL) return ;

	ans.push_back(root->val);
	preOrder(root->left);
	preOrder(root->right);
}

//前序非递归遍历
void preOrderWithoutRecursion(TreeNode* root) {
	if (root==NULL) return ;
	TreeNode* p=root;
	stack<TreeNode*> s;
	while (!s.empty() || p) {
		if (p) {
			ans.push_back(p->val);
			s.push(p);
			p=p->left;
		}
		else {
			p=s.top();
			s.pop();
			p=p->right;
		}
	}
}

//中序递归遍历
void inOrder(TreeNode* root) {
	if (root==NULL) return ;

	inOrder(root->left);
	ans.push_back(root->val);
	inOrder(root->right);
}

//中序非递归遍历
void inOrderWithoutRecursion(TreeNode* root) {
	if (root==NULL) return ;
	TreeNode* p=root;
	stack<TreeNode*> s;
	while (!s.empty() || p) {
		if (p) {
			s.push(p);
			p=p->left;
		}
		else {
			p=s.top();
			s.pop();
			ans.push_back(p->val);
			p=p->right;
		}
	}
}

//后序递归遍历
void postOrder(TreeNode* root) {
	if (root==NULL) return ;

	postOrder(root->left);
	postOrder(root->right);
	ans.push_back(root->val);
}

//后序非递归遍历
void postOrderWithoutRecursion(TreeNode* root) {
	if (root==NULL) return ;
	TreeNode* pCur=root, *pLastVis=NULL;
	stack<TreeNode*> s;
	while (pCur) {
		s.push(pCur);
		pCur=pCur->left;
	}
	while (!s.empty()) {
		//走到这里，pCur都是空，并已经遍历到左子树底端(看成扩充二叉树，则空，亦是某棵树的左孩子)
		pCur=s.top();
		s.pop();
		//一个根节点被访问的前提是：无右子树或右子树已被访问过
		if (pCur->right==NULL || pCur->right==pLastVis) {
			ans.push_back(pCur->val);
			pLastVis=pCur;
		}
		else {
			//根节点再次入栈
			s.push(pCur);
			//进入右子树，且可肯定右子树一定不为空
			pCur=pCur->right;
			while (pCur) {
				s.push(pCur);
				pCur=pCur->left;
			}
		}
	}
}

//层序遍历
void levelOrder(TreeNode* root) {
	if (root==NULL) return ;
	queue<TreeNode*> q;
	TreeNode* p=root;
	q.push(p);
	while (!q.empty()) {
		p=q.front();
		ans.push_back(p->val);
		q.pop();
		if (p->left) q.push(p->left);
		if (p->right) q.push(p->right);
	}
}

int main() {
	TreeNode* root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->right=new TreeNode(3);
	root->left->left=new TreeNode(4);
	root->left->right=new TreeNode(5);
	root->right->left=new TreeNode(6);
	root->right->right=new TreeNode(7);
	//root->left->left->right=new TreeNode(10);

	preOrder(root);
	cout << "前序递归遍历:   ";
	show(ans);
	inOrder(root);
	cout << "中序递归遍历:   ";
	show(ans);
	postOrder(root);
	cout << "后序递归遍历:   ";
	show(ans);

	preOrderWithoutRecursion(root);
	cout << "前序非递归遍历: ";
	show(ans);
	inOrderWithoutRecursion(root);
	cout << "中序非递归遍历: ";
	show(ans);
	postOrderWithoutRecursion(root);
	cout << "后序非递归遍历: ";
	show(ans);

	levelOrder(root);
	cout << "层序遍历:\t";
	show(ans);
}