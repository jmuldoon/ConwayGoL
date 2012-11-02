#include "BinarySearchTree.h"

// Smaller elements go left
// larger elements go right
void BinarySearchTree::Insert(int d, double w)
{
    tree_node* t = new tree_node;
    tree_node* parent;
    t->data = d;
	t->weight = w;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    
    // is this a new tree?
    if(IsEmpty()) root = t;
    else{
        //Note: ALL Insertions are as leaf nodes
        tree_node* curr;
        curr = root;
        // Find the Node's parent
        while(curr){
            parent = curr;
            if(t->weight > curr->weight) curr = curr->right;
            else curr = curr->left;
        }

        if(t->weight < parent->weight)
			parent->left = t;
        else
            parent->right = t;
    }
}

void BinarySearchTree::Remove(int d, double w)
{
    //Locate the element
    bool found = false;
    if(IsEmpty()){
        cout<<" This Tree is empty! "<<endl;
        return;
    }
    
    tree_node* curr;
    tree_node* parent;
    curr = root;
    
    while(curr != NULL){
		if(curr->weight == w){
            found = true;
            break;
         }
         else{
             parent = curr;
             if(w>curr->weight) curr = curr->right;
             else curr = curr->left;
         }
    }
    if(!found){
        cout<<" Data not found! "<<endl;
        return;
    }

	// 3 cases :
    // 1. We're removing a leaf node
    // 2. We're removing a node with a single child
    // 3. we're removing a node with 2 children

    // Node with single child
    if((curr->left == NULL && curr->right != NULL)|| (curr->left != NULL
		&& curr->right == NULL)){
       if(curr->left == NULL && curr->right != NULL){
           if(parent->left == curr){
             parent->left = curr->right;
             delete curr;
           }
           else{
             parent->right = curr->right;
             delete curr;
           }
       }
       else{ // left child present, no right child
          if(parent->left == curr){
             parent->left = curr->left;
             delete curr;
           }
           else{
             parent->right = curr->left;
             delete curr;
           }
       }
     return;
    }

	//We're looking at a leaf node
	if( curr->left == NULL && curr->right == NULL){
		if(parent->left == curr) parent->left = NULL;
			else parent->right = NULL;
		 		delete curr;
		return;
    }


    //Node with 2 children
    // replace node with smallest value in right subtree
    if (curr->left != NULL && curr->right != NULL){
        tree_node* chkr;
        chkr = curr->right;
        if((chkr->left == NULL) && (chkr->right == NULL)){
            curr = chkr;
            delete chkr;
            curr->right = NULL;
        }
        else{ // right child has children
        //if the node's right child has a left child
        // Move all the way down left to locate smallest element
			
			if((curr->right)->left != NULL){
                tree_node* lcurr;
                tree_node* lcurrp;
                lcurrp = curr->right;
                lcurr = (curr->right)->left;
                while(lcurr->left != NULL){
                   lcurrp = lcurr;
                   lcurr = lcurr->left;
                }
				curr->data = lcurr->data;
                delete lcurr;
                lcurrp->left = NULL;
			}
			else{
				tree_node* tmp;
                tmp = curr->right;
                curr->data = tmp->data;
			    curr->right = tmp->right;
                delete tmp;
            }
		}
		return;
    }
}

void BinarySearchTree::Print_InOrder(){
  InOrder(root);
}

void BinarySearchTree::InOrder(tree_node* p){
    if(p != NULL){
        if(p->left) InOrder(p->left);
        cout<<" "<<p->weight<<" ";
        if(p->right) InOrder(p->right);
    }
    else return;
}

void BinarySearchTree::Print_PreOrder(){
    PreOrder(root);
}

void BinarySearchTree::PreOrder(tree_node* p){
    if(p != NULL){
        cout<<" "<<p->weight<<" ";
        if(p->left) PreOrder(p->left);
        if(p->right) PreOrder(p->right);
    }
    else return;
}

void BinarySearchTree::Print_PostOrder(){
    PostOrder(root);
}

void BinarySearchTree::PostOrder(tree_node* p){
    if(p != NULL){
        if(p->left) PostOrder(p->left);
        if(p->right) PostOrder(p->right);
        cout<<" "<<p->weight<<" ";
    }
    else return;
}

int BinarySearchTree::Search(double w){
	tree_node *next = root;
 
    while (next != NULL) {
        if (w == next->weight) {
            return next->data;
        }
		else if (w < next->weight) {
            next = next->left;   
        }
		else {
            next = next->right;
        }
    } 
    //not found
    return -1;
}

int BinarySearchTree::FindMinimum(){
	tree_node *next = root;
 
    while (next != NULL) {
		if(next->left == NULL)
			break;
		next = next->left;
    }

	return next->data;
}

void BinarySearchTree::BSTHelp(){
    BinarySearchTree b;
    cout<<endl;
    cout<<"\n Binary Search Tree Operations "<<endl;
    cout<<" ----------------------------- "<<endl;
    cout<<" 1. Insertion/Creation "<<endl;
    cout<<" 2. In-Order Traversal "<<endl;
    cout<<" 3. Pre-Order Traversal "<<endl;
    cout<<" 4. Post-Order Traversal "<<endl;
    cout<<" 5. Removal "<<endl;
	cout<<" ----------------------------- "<<endl;
}