#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include "struct.hpp"

using namespace std;

class SolutionSecond{
public:
	ListNode* reverseList(ListNode* head){
		ListNode* prev=NULL;
		ListNode* curr=head;
		while(curr!=NULL){
			//1->2->3->4->5->NULL
			ListNode* forward=curr->next; //2
			curr->next=prev; //1->NULL
			prev=curr; //prev NULL ahora es 1, el nuevo final
			curr=forward; //el actual ahora es 2
		}
		return prev;
	}
};

#endif