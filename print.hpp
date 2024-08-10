#ifndef PRINT_HPP
#define PRINT_HPP

#include "struct.hpp"

using namespace std;

void printLinkedList(ListNode* root){
	while(root!=nullptr){
		cout<<root->val<<"->";
		root=root->next; //root se actualiza con el siguiente puntero
	}
	cout<<endl;
}

#endif