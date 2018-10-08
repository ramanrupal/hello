#include<bits/stdc++.h>
using namespace std;
struct node
{
  char data;
  struct node *left;
  struct node *right;
};
node * new_node(char data)
{
    struct node *temp=new node;
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
void printInorder(struct node *root)
{
    if(root==NULL)
    {
	    return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPreorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	printPreorder(root->left);
	printPreorder(root->right);
}
void printPostorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<root->data<<" ";

}
void printLevelorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	struct node *cur;
	queue <struct node *> q;
	q.push(root);
	while(q.empty()==false)
	{
		cur=q.front();
		cout<<cur->data<<" ";
		if(cur->left!=NULL)
		q.push(cur->left);
		if(cur->right!=NULL)
		q.push(cur->right);
		q.pop();
	}
}
void printRevLevelorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	struct node *cur;
	queue<struct node *> q;
	q.push(root);
	while(q.empty()==false)
	{
		cur=q.front();
		cout<<cur->data<<" ";
		if(cur->right!=NULL)
			q.push(cur->right);
		if(cur->left!=NULL)
			q.push(cur->left);
		q.pop();
	}
}
void printInorderStack(struct node *root)
{
 if(root==NULL)
	 return;
 stack <struct node *> s;
 node *cur=root;
 while(cur!=NULL || s.empty()==false)
 {
	 while(cur!=NULL)
	 {
	       s.push(cur);
	       cur=cur->left;	
	 }
	 cur=s.top();
	 cout<<cur->data<<" ";
	 s.pop();
	 cur=cur->right;
 }
}
