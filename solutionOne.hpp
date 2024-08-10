#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include "struct.hpp"

using namespace std;

class SolutionOne{
public:
	ListNode* middleOne(ListNode* head){
		ListNode* slow=head;
		ListNode* fast=head;
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow;
	}
};

#endif