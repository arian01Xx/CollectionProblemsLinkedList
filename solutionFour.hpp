#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include "struct.hpp"

using namespace std;

class SolutionFour{
public:
	ListNode*getIntersectionNode(ListNode* headA, ListNode* headB){
		unordered_map<ListNode*,int> map;
		for(auto p=headA; p!=nullptr; p=p->next){
			map[p]=p->val;
		}
		for(auto p=headB; p!=nullptr; p=p->next){
			if(map.find(p)!=map.end()) return p;
		}
		return nullptr;
	}
};

#endif