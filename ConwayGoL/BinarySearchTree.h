#ifndef BinarySearchTree_H
#define BinarySearchTree_H
#include <iostream>
#include <cstdlib>
using namespace std;

class BinarySearchTree{
private:
	struct tree_node{
		tree_node* left;
        tree_node* right;
        int data;		//index in hash table for geodesic
		double weight;	//weight of the geodesic
	};
    
	tree_node* root;
public:
    BinarySearchTree(){root = NULL;}
       
    bool IsEmpty() const { return root==NULL; }
    void Print_InOrder();
    void InOrder(tree_node*);
    void Print_PreOrder();
    void PreOrder(tree_node*);
    void Print_PostOrder();
    void PostOrder(tree_node*);
	void Insert(int,double);
    void Remove(int,double);
	int	 Search(double);			//returns data, else -1
	int	 FindMinimum();

	void BSTHelp();
};
#endif
