#include "struct.hpp"
#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionThree.hpp"
#include "solutionFour.hpp"
#include "solutionFive.hpp"
#include "solutionSix.hpp"
#include "solutionSeven.hpp"
#include "solutionHeight.hpp"
#include "created.hpp"
#include "print.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> inputOne={1,0,1};
	ListNode* input=createdLinkedList(inputOne);
	int outputOne=solution.getDecimalValue(input);
	cout<<"----Binary Problem----"<<endl;
	cout<<"Linked List Original: "<<endl;
	printLinkedList(input);
	cout<<"Converted from Binary to Decimal: "<<endl;
	cout<<outputOne<<endl;
	cout<<endl;

	SolutionOne solution1;
	vector<int> nodes={1,2,3,4,5,6};
	ListNode* inputFirst=createdLinkedList(nodes);
	ListNode* outputFirst=solution1.middleOne(inputFirst);
	cout<<"----MiddleNode Problem----"<<endl;
	cout<<"Original Linked List: "<<endl;
	printLinkedList(inputFirst);
	cout<<"MiddleOne: "<<endl;
	printLinkedList(outputFirst);
	cout<<endl;

	SolutionSecond solution2;
	vector<int> nodes2={1,2,3,4,5,6,7,8,9};
	ListNode* input2=createdLinkedList(nodes2);
	ListNode* output2=solution2.reverseList(input2);
	cout<<"---Reverse Problem---"<<endl;
	cout<<"Original Linked List: "<<endl;
	printLinkedList(input2);
	cout<<"Reverse Linked List: "<<endl;
	printLinkedList(output2);
	cout<<endl;

	SolutionThree solution3;
	vector<int> one={1,3,5};
	vector<int> two={2,4,6};
	ListNode* first=createdLinkedList(one);
	ListNode* second=createdLinkedList(two);
	ListNode* merged=solution3.mergeTwoLists(first, second);
	cout<<"---United Linked List---"<<endl;
	cout<<"Linked List to unite: "<<endl;
	printLinkedList(first);
	cout<<endl;
	printLinkedList(second);
	cout<<"United: "<<endl;
	printLinkedList(merged);
	cout<<endl;

	SolutionFour solution4;
	vector<int> listA={4,1,8,4,5};
	vector<int> listB={5,6,1,8,4,5};
	ListNode* listFirst=createdLinkedList(listA);
	ListNode* listSecond=createdLinkedList(listB);
	ListNode* intersected=solution4.getIntersectionNode(listFirst, listSecond);
	cout<<"---Found the intersected node"<<endl;
	cout<<"The Two List"<<endl;
	printLinkedList(listFirst);
	cout<<endl;
	printLinkedList(listSecond);
	cout<<endl;
	cout<<"List Found it: "<<endl;
	printLinkedList(intersected);

	SolutionFive solution5;
	vector<int> palindrome={1,2,2,1};
	ListNode* outputSecond=createdLinkedList(palindrome);
	bool isPalind=solution5.isPalindrome(outputSecond);
	cout<<"-----Palindrome Problem---"<<endl;
	cout<<"Original Linked List"<<endl;
	printLinkedList(outputSecond);
	cout<<endl;
	cout<<"Bool answered: "<<endl;
	cout<<isPalind<<endl;
	cout<<endl;

	SolutionSix solution6;
	vector<int> headSix={1,1,1,2,2,3,3,3,4};
	ListNode* inputSix=createdLinkedList(headSix);
	ListNode* outputSix=solution6.deleteDuplicates(inputSix);
	cout<<"----Delete Duplicates Problem----"<<endl;
	cout<<"Original Linked List: "<<endl;
	printLinkedList(inputSix);
	cout<<endl;
	cout<<"Output with duplcates deleted: "<<endl;
	printLinkedList(outputSix);

	SolutionSeven solution7;
	vector<int> sevenVec={3,2,0,-4};
	ListNode* inputSevev=createdLinkedList(sevenVec);
	bool outputSeven=solution7.hasCycle(inputSevev);
	cout<<"---Cycle Problem---"<<endl;
	cout<<"Original Linked list: "<<endl;
	printLinkedList(inputSevev);
	cout<<endl;
	cout<<"Boolean answer: "<<endl;
	cout<<outputSeven<<endl; 

	SolutionHeight solution8;
	//Input: head = [1,2,6,3,4,5,6], val = 6
	vector<int> head8={1,2,6,3,4,5,6};
	int val8=6;
	ListNode* input8=createdLinkedList(head8);
	ListNode* output8=solution8.removeElements(input8, val8);
	cout<<"---Remove Elements Problems---"<<endl;
	cout<<endl;
	cout<<"Original Linked List: "<<endl;
	printLinkedList(input8);
	cout<<endl;
	cout<<"ListNode with the remove Elements: "<<endl;
	printLinkedList(output8);
	cout<<endl;

	return 0;
}