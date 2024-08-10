#ifndef SOLUTION_FIVE_HPP
#define SOLUTION_FIVE_HPP

#include "struct.hpp"

using namespace std;

class SolutionFive{
public:
	bool isPalindrome(ListNode* head){
		vector<int> vals;
		while(head!=nullptr){
			vals.push_back(head->val);
			head=head->next;
		}
		int left=0; int right=vals.size()-1;
		while(left<right &&vals[left]==vals[right]){
			left++;
			right--;
		}
		return left>=right;
	}
};

#endif