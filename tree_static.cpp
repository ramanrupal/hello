#include<iostream>
using namespace std;
#include "treeheader.h"
int main()
{
	//
	struct node *root=NULL;
	root=new_node('A');
	root->left=new_node('B');
	root->right=new_node('C');
	root->left->left=new_node('E');
	root->left->right=new_node('F');
        cout<<"Inorder Traversal :";
	printInorder(root);
	cout<<"\nPreorder Traversal:";
	printPreorder(root);
	cout<<"\nPostorder Traversal";
	printPostorder(root);
	cout<<"\nLevelorder traveral ";
	printLevelorder(root);
	cout<<"\nRevLevelorder traversal ";
        printRevLevelorder(root);
	cout<<"\n Inorder Traversal using stacks";
	printInorderStack(root);

}
        
