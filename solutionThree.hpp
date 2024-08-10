#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include "struct.hpp"

using namespace std;

class SolutionThree{
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
		ListNode* dummy=new ListNode(0);
		ListNode* curr=dummy;
		while(list1 &&list2){
			if(list1->val > list2->val){
				curr->next=list2;
				list2=list2->next;
			}else{
				curr->next=list1;
				list1=list1->next;
			}
			curr=curr->next;
		}
		curr->next=list1 ? list1:list2;
		return dummy->next; //despues del cero en adelante
	}
};

#endif