#ifndef SOLUTION_HEIGHT_HPP
#define SOLUTION_HEIGHT_HPP

#include "struct.hpp"

using namespace std;

class SolutionHeight{
public:
	ListNode* removeElements(ListNode* head, int val){
		ListNode* temp=head;
		ListNode* newHead=new ListNode(0);
		ListNode* newTemp=newHead;
		while(temp!=nullptr){
			if(temp->val!=val){ //una forma de borrar mediante el copiado
				newTemp->next=new ListNode(temp->val);
				newTemp=newHead->next;
			}
			temp=temp->next;
		}
		return newHead->next;
	}
};

#endif