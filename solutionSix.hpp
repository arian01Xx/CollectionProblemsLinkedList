#ifndef SOLUTION_SIX_HPP
#define SOLUTION_SIX_HPP

#include "struct.hpp"

using namespace std;

class SolutionSix{
public:
	ListNode* deleteDuplicates(ListNode* head){
		if(!head){
			return nullptr;
		}
		ListNode* temp=head;
		ListNode* temp2=temp->next;
		int last=head->val;
		while(temp2!=nullptr){
			if(last==temp2->val){
				if(temp2->next==nullptr){
					temp->next=nullptr;
					break;
				}
				temp2=temp2->next;
				temp->next=temp2;
			}else{

				temp=temp2;
				last=temp->val;
				temp2=temp2->next;
			}
		}
		return head;
	}
};

#endif