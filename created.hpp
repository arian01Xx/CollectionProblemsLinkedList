#ifndef CREATED_HPP
#define CREATED_HPP

#include "struct.hpp"

using namespace std;

ListNode* createdLinkedList(vector<int> nodes){
	ListNode* head=new ListNode(0);
	ListNode* temp=head; //apunta a la cabeza
	for(int node: nodes){
		temp->next=new ListNode(node); //el siguiente puntero
		//con un valor del vector
		temp=temp->next;
	}
	return head->next; //empieza desde el segundo elemento que es next
}

#endif