#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include "struct.hpp"

using namespace std;

class Solution{
public:
	int getDecimalValue(ListNode* head){ //problema de binario a decimal
		int num=0;
		while(head!=NULL){
			num=num*2+head->val;
			head=head->next;
		}
		return num;
	}
};

#endif