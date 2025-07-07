// Tree
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class node
{
   int info;

   public:

   node *left,*right;
   int get_info()
   {
      return info;
   }
   node()
   {
      info=NULL;
      left=right=NULL;
   }
   node(int x)
   {
      info=x;
      left=right=NULL;
   }
   ~node()
   {
      delete right;
      delete left;
      left=right=NULL;
   }
};

class tree
{
   public:

   node *root,*curr,*prev;
   void del();
   void search(int);
   void in_trav(node*);
   void pre_trav(node*);
   void post_trav(node*);
   void del(int);
   void menu();
   tree()
   {
      root=curr=NULL;
   }

};

void tree :: search(int x)
{
     if(root==NULL)
     {
	cout<<"\n\t Tree is empty...";
     }

     if(x==curr->get_info())
      return;

     if(x<curr->get_info() && curr->left!=NULL)
     {
	prev=curr;
	curr=curr->left;
	search(x);
     }
     else if(x>curr->get_info() && curr->right!=NULL)
     {
	prev=curr;
	curr=curr->right;
	search(x);
     }

     if(curr->left==NULL || curr->right==NULL)
       return;

}

void tree :: del(int x)
{
   curr=root;
   search(x);

   if(root==NULL)
    return;

   if(curr->get_info()!=x)
   {
      cout<<"\n\t Data Not found to delete...";
      getch();
      return;
   }
   //case1: leaf delete
   if(curr->left==NULL && curr->right==NULL)
   {
       if(prev->left==curr)
	  prev->left=NULL;
       else if(prev->right==curr)
	  prev->right=NULL;
   }
   //case2: one child delete
   else if(curr->left!=NULL && curr->right==NULL)
   {
      if(prev->left==curr)
	prev->left=curr->left;
      else if(prev->right==curr)
	prev->right=curr->left;
   }
   else if(curr->left==NULL && curr->right!=NULL)
   {
      if(prev->left==curr)
	prev->left=curr->right;
      else if(prev->right==curr)
	prev->right=curr->right;
   }
   //case3 : two child delete
   else //if(curr->left!=NULL && curr->right!=NULL)
   {
       node *temp = new node();

       if(curr->right->left==NULL && prev->left==curr)
       {
	      temp=curr->right;
	      prev->left=temp;
	      temp->left=curr->left;
	}
	else if(curr->left->right==NULL && prev->right==curr)
	{
	      temp=curr->left;
	      prev->right=temp;
	      temp->right=curr->right;
	}
       else //if(curr->right->left!=NULL || curr->left->right!=NULL)
       {
	 if(prev->left==curr)
	 {
	    temp=curr->right;
	    while(temp->left->left!=NULL)
	      temp=temp->left;

	    //curr->right=temp->left;
	    prev->left=temp->left;
	    temp->left->left=curr->left;
	    temp->left->right=temp;
	    curr->right=curr->left=NULL;
	    temp->left=NULL;
	  }
	  else if(prev->right==curr)
	  {
	    temp=curr->left;
	    while(temp->right->right!=NULL)
	      temp=temp->right;

	    prev->right=temp->right;
	    temp->right->right=curr->right;
	    temp->right->left=temp;
	   // curr->left=temp->right;
	    curr->right=curr->left=NULL;
	    temp->right=NULL;
	  }
       }
   }

   curr=NULL;
   cout<<"\n\n\t data deleted successfully...\n\t";
   in_trav(root);
   getch();
}

void tree :: menu()
{
   int n,x;

   do{
       clrscr();
       cout<<"\n\t 1.Insert";
       cout<<"\n\t 2.Delete";
       cout<<"\n\t 3.Search";
       cout<<"\n\t 4.Inorder Traversal";
       cout<<"\n\t 5.Preorder Traversal";
       cout<<"\n\t 6.Postorder Traversal";
       cout<<"\n\t 7.Exit";

       cout<<"\n\n\t Enter your choice: ";
       cin>>n;

	switch(n)
	{
	    case 1:
		   {
		     cout<<"\n\t Enter data to insert: ";
		     cin>>x;
		     node *temp = new node(x);
		     if(root==NULL)
		      root=temp;
		     else
		     {
			curr=root;
			search(x);
			if(x<=curr->get_info())
			   curr->left=temp;
			else
			   curr->right=temp;
		     }
		     cout<<"\n\t Inserted Successfully...";
		     getch();
		     break;
		   }
	    case 2:
		   cout<<"\n\t Enter data to Delete: ";
		   cin>>x;
		   del(x);
		   break;

	    case 3:
		 {
		   cout<<"\n\n\t Enter value to search: ";
		   cin>>x;
		   curr=root;
		   search(x);
		   if(curr->get_info()!=x)
		   {
		      cout<<"\n\t Data not found...";
		      getch();
		   }
		   else
		   {
		      cout<<"\n\t'"<<curr->get_info()<<"'data founded...";
		      getch();
		   }
		   break;
		 }
	    case 4:
		   cout<<"\n\n\t";
		   in_trav(root);
		   getch();
		   break;
	    case 5:
		   cout<<"\n\n\t";
		   pre_trav(root);
		   getch();
		   break;
	    case 6:
		   cout<<"\n\n\t";
		   post_trav(root);
		   getch();
		   break;

	    case 7:
		   break;

	    default:
		   cout<<"\n\tEnter an appropriate choice";
		   getch();
		   break;
	}
     }while(n!=7);

   getch();
}

void tree::in_trav(node *curr)
{
   if(root==NULL)
   {
       cout<<"\n\tTree id empty...";
       return;
   }
   if(curr->left!=NULL)
      in_trav(curr->left);
   cout<<" "<<curr->get_info();
   if(curr->right!=NULL)
      in_trav(curr->right);
}
void tree::pre_trav(node *curr)
{
   if(root==NULL)
   {
       cout<<"\n\tTree id empty...";
       return;
   }
   cout<<" "<<curr->get_info();
   if(curr->left!=NULL)
      pre_trav(curr->left);

   if(curr->right!=NULL)
      pre_trav(curr->right);
}
void tree::post_trav(node *curr)
{
   if(root==NULL)
   {
       cout<<"\n\tTree id empty...";
       return;
   }
   if(curr->left!=NULL)
      post_trav(curr->left);

   if(curr->right!=NULL)
      post_trav(curr->right);
   cout<<" "<<curr->get_info();
}

void main()
{
    clrscr();
    flushall();
    tree obj;

    obj.menu();
}