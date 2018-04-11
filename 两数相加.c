#include <stdio.h>
#include <malloc.h> 
/**/
struct ListNode 
{
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

int main (void)
{
	struct ListNode L1_Test_1;
	struct ListNode L1_Test_2;
	struct ListNode L1_Test_3;
	struct ListNode L2_Test_1;
	struct ListNode L2_Test_2;
	struct ListNode L2_Test_3;
	
	L1_Test_1.val = 2;
	L1_Test_2.val = 4;
	L1_Test_3.val = 3;
	
	L2_Test_1.val = 5;
	L2_Test_2.val = 6;
	L2_Test_3.val = 4;
	
	L1_Test_1.next = &L1_Test_2;
	L1_Test_2.next = &L1_Test_3;
	L1_Test_3.next = NULL;
 	
	L2_Test_1.next = &L2_Test_2;
	L2_Test_2.next = &L2_Test_3;
	L2_Test_3.next = NULL;
	
	struct ListNode *temp = addTwoNumbers (&L1_Test_1, &L2_Test_1);
 
	while (temp->next != NULL)
	{
		printf ("%d",temp->val);
		temp = temp->next;
	}

}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

	int sum = 0;
	int flag = 0;
	int temp = 0;
	
	
	while ( (l1 != NULL) && (l2 != NULL) )
	{
		sum = sum*10+temp+10*flag;
		flag = 0;
		
		temp = l1->val + l2->val;
		
		if (temp > 10)
		{
			temp = temp%10;
			flag = 1;
		}
		
		l1 = l1->next;
		l2 = l2->next;
	}
	
	sum = sum*10+temp+10*flag;
	
	struct ListNode preHead;
	struct ListNode *p = &preHead;
	struct ListNode *Head = p;
	
	while (sum != 0)
	{
		p->val = sum%10;		
		p->next =(struct ListNode *) malloc (sizeof (struct ListNode *));
		p = p->next;
		sum = sum/10;
	}
	p->next = NULL;
		
	return Head;
}
