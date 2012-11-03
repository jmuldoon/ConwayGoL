/*  Description: Template binary search tree for any type of data to be stored within the datastructure.
 *  Author(s):	 James Muldoon and Unknown Source
 *  Created:	 03 November 2012 01:54
 */

#ifndef BinarySearchTree_H
#define BinarySearchTree_H
using namespace std;

template<class T> class BinarySearchTree{
private:
	struct tree_node{				// Node struct definition
		tree_node* left;
        tree_node* right;
        T data;						// Data to be stored of any type, key
	};
    
	tree_node* root;
public:
	// Default constructor sets root to NULL.
    BinarySearchTree(){root = NULL;}

    // Checks if the root is still NUll.
    bool IsEmpty() const {return root==NULL;}

	void Print_InOrder();
    void InOrder(tree_node*);
    void Print_PreOrder();
    void PreOrder(tree_node*);
    void Print_PostOrder();
    void PostOrder(tree_node*);
	void Insert(const T&);
    void Remove(const T&);
	T	 Search(const T&);					// Returns data, else -1
};

// Smaller elements go left and larger elements go right
template<class T> void BinarySearchTree<T>::Insert(const T& d){
    tree_node* t = new tree_node;
    tree_node* parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    
    // Is this a new tree?
    if(IsEmpty()) root = t;
    else{
        //Note: ALL Insertions are as leaf nodes
        tree_node* curr;
        curr = root;
        // Find the Node's parent
        while(curr){
            parent = curr;
            if(t->data > curr->data) curr = curr->right;
            else curr = curr->left;
        }

        if(t->data < parent->data)
			parent->left = t;
        else
            parent->right = t;
    }
}

template<class T> void BinarySearchTree<T>::Remove(const T& d){
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
		if(curr->data == d){
            found = true;
            break;
         }
         else{
             parent = curr;
             if(d>curr->data) curr = curr->right;
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

template<class T> void BinarySearchTree<T>::Print_InOrder(){
  InOrder(root);
}

template<class T> void BinarySearchTree<T>::InOrder(tree_node* p){
    if(p != NULL){
        if(p->left) InOrder(p->left);
        cout<<" "<<p->data<<" ";
        if(p->right) InOrder(p->right);
    }
    else return;
}

template<class T> void BinarySearchTree<T>::Print_PreOrder(){
    PreOrder(root);
}

template<class T> void BinarySearchTree<T>::PreOrder(tree_node* p){
    if(p != NULL){
        cout<<" "<<p->data<<" ";
        if(p->left) PreOrder(p->left);
        if(p->right) PreOrder(p->right);
    }
    else return;
}

template<class T> void BinarySearchTree<T>::Print_PostOrder(){
    PostOrder(root);
}

template<class T> void BinarySearchTree<T>::PostOrder(tree_node* p){
    if(p != NULL){
        if(p->left) PostOrder(p->left);
        if(p->right) PostOrder(p->right);
        cout<<" "<<p->data<<" ";
    }
    else return;
}

template<class T> T BinarySearchTree<T>::Search(const T& d){
	tree_node *next = root;
 
    while (next != NULL) {
        if (d == next->data) {
            return next->data;
        }
		else if (d < next->data) {
            next = next->left;   
        }
		else {
            next = next->right;
        }
    } 
    //not found
    return -1;
}

#endif //BinarySearchTree_H
