#ifndef SOLUTION_SEVEN_HPP
#define SOLUTION_SEVEN_HPP

#include "struct.hpp"

using namespace std;

class SolutionSeven{
public:
	bool hasCycle(ListNode* head){
		ListNode* fast=head;
		ListNode* slow=head;
		while(fast!=NULL && slow!=NULL){
			fast=fast->next->next;
			slow=slow->next;
			if(fast==slow){
				return true;
			}
		}
		return false;
	}
};

#endif