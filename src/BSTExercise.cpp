//============================================================================
// Name        : BSTExercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "BinarySearchTree.h"

int main() {

	BinarySearchTree<int> tree;
//	int array[15] = {13,3,1,2,4,12,10,5,8,7,6,9,11,14,18};
//	for (int i = 0; i < 15; i++){
//		tree.insert(array[i]);
//	}//because typing all those entries for testing is a pain.
	cout << "Enter a number (0 to exit):";
	int n;
	cin >> n;
	while (n != 0){
		tree.insert(n);
		cout << "Enter a number (0 to exit):";
		cin >> n;
	}
	cout << "inorder traversal: ";
	tree.inOrder();
	cout << '\n' << "preorder traversal: ";
	tree.preOrder();
	cout << '\n' << "postorder traversal: ";
	tree.postOrder();
	cout << '\n';
	cout << "Node count: " << tree.nodeCount() << '\n';
	cout << "Leaves count: " << tree.leaveCount() << '\n';
	cout << "Height: " << tree.height();

	return 0;
}
