#include<stdio.h>
#include<stdlib.h>
#define N 5

// STACK 
void push();
void pop();
void display_s();
int top = -1;
int arr_s[N];


// Straight Line QUEUE
void insertion();
void deletion();
void display_sq();
int front = -1;
int rear = -1;
int arr_sq[N];



//// Circular QUEUE
void insertion_c();
void deletion_c();
void display_cq();
int front_c = -1;
int rear_c = -1;
int arr_cq[N];



//// Singly Linked List
struct node_s
{
	int data;
	struct node_s* next;
}*head;

struct node_s* c_node(int);
void in_first();
void in_end();
void in_loc();
void del_first();
void del_end();
void del_loc();
void display_ll();



// Doubly Linked List
struct node_d
{
	int data;
	struct node_d* next;
	struct node_d* prev;
}*start;

struct node_d* cl_node(int);
void in_first_dl();
void in_end_dl();
void in_loc_dl();
void del_first_dl();
void del_end_dl();
void del_loc_dl();
void display_dll();
//

// Circular Singly Linked List
struct node_cs
{
	int data;
	struct node_cs* next;
}*begin;

struct node_cs* cll_node(int);
void in_first_cl();
void in_end_cl();
void in_loc_cl();
void del_first_cl();
void del_end_cl();
void del_loc_cl();
void display_csl();

int outer_op;
int inner_op;


int main()
{
	//----------------------M-E-N-U--------------------------------//
	while(1)
	{
		
		printf("\n\t\t----------MENU----------\n");
		printf("1.Stack Operations.\t\t\t2.Straight Line Queue Operations.\n3.Circular Queue Operations.\t\t4.Singly Linked List Operation\n5.Doubly Linked List Operations\t\t6.Circular Linked List Operations.\n7.EXIT.\n\n*Enter Your Choice: ");
		scanf("%d",&outer_op);
		
		switch(outer_op)
	    {
			// ---STACK--- //
			
			case 1:
				while(1)
				{
					printf("\n\n---STACK Operation---\n");	
					printf("\n1.PUSH.\t\t2.POP.\n3.Display.\t4.Exit.\n\n-->Enter Your Choice: ");
					scanf("%d",&inner_op);
					
					switch(inner_op)
					{
						case 1:
							push();
						break;
						case 2:
							pop();
						break;
						case 3:
							display_s();
						break;
						case 4:
							break;
						default:
						printf("\nInvalid Option");
						break;					
					}
					if(inner_op == 4)
					break;
				}
			break;
			
			//  ---Straight Line Queue--- //
			
			case 2:
				while(1)
				{
					printf("\n\n---Straight Line Queue Operation---\n");	
					printf("\n1.Insertion.\t\t2.Deletion.\n3.Display.\t\t4.Exit.\n\n-->Enter Your Choice: ");
					scanf("%d",&inner_op);
					
					switch(inner_op)
					{
						case 1:
							insertion();
						break;
						case 2:
							deletion();
						break;
						case 3:
							display_sq();
						break;
						case 4:
							break;
						default:
						printf("\nInvalid Option");
						break;					
					}
					if(inner_op == 4)
					break;
				}
			break;
			
			 // ---Circular Queue--- //
			
			case 3:
				while(1)
				{
					printf("\n\n---Circular Queue Operation---\n");	
					printf("\n1.Insertion.\t\t2.Deletion.\n3.Display.\t\t4.Exit.\n\n-->Enter Your Choice: ");
					scanf("%d",&inner_op);
					
					switch(inner_op)
					{
						case 1:
							insertion_c();
						break;
						case 2:
							deletion_c();
						break;
						case 3:
							display_cq();
						break;
						case 4:
							break;
						default:
						printf("\nInvalid Option");
						break;					
					}
					if(inner_op == 4)
					break;
				}
			break;	
			
			 // ---Singly Linked List--- //		
			
			case 4:
				while(1)
				{
					printf("\n\t\t\t   ---Singly Linked List---\n");
					printf("\n1.Insert a Node at the Beginning.\t\t2.Insert a Node at the End.\n3.Insert a Node at Specified position.\t\t4.Delete a Node from First Position.\n5.Delete a Node From the End.\t\t\t6.Delete a Node from specified Location.\n7.Display the Linked List.\t\t\t8.EXIT\n\n->Enter Your Choice: ");
					scanf("%d",&inner_op);					
					switch(inner_op)
					{
						case 1:
							in_first();
						break;
						case 2:
							in_end();
						break;
						case 3:
							in_loc();
						break;
						case 4:
							del_first();
						break;
						case 5:
							del_end();
						break;
						case 6:
							del_loc();
						break;
						case 7:
							display_ll();
						break;
						case 8:
						break;
						default:
							printf("\nInvalid Option!");
						break;
					}
					if(inner_op == 4)
					break;
				}
			break;
			
			 // ---Doubly Linked List--- //		
			
			case 5:
				while(1)
				{
					printf("\n\t\t\t   ---Doubly Linked List---\n");
					printf("\n1.Insert a Node at the Beginning.\t\t2.Insert a Node at the End.\n3.Insert a Node at Specified position.\t\t4.Delete a Node from First Position.\n5.Delete a Node From the End.\t\t\t6.Delete a Node from specified Location.\n7.Display the Linked List.\t\t\t8.EXIT\n\n->Enter Your Choice: ");
					scanf("%d",&inner_op);					
					switch(inner_op)
					{
						case 1:
							in_first_dl();
						break;
						case 2:
							in_end_dl();
						break;
						case 3:
							in_loc_dl();
						break;
						case 4:
							del_first_dl();
						break;
						case 5:
							del_end_dl();
						break;
						case 6:
							del_loc_dl();
						break;
						case 7:
							display_dll();
						break;
						case 8:
						break;
						default:
							printf("\nInvalid Option!");
						break;
					}
					if(inner_op == 4)
					break;
				}
			break;

			case 6:
				while(1)
				{
					printf("\n\t\t\t   ---Circular Linked List---\n");
					printf("\n1.Insert a Node at the Beginning.\t\t2.Insert a Node at the End.\n3.Insert a Node at Specified position.\t\t4.Delete a Node from First Position.\n5.Delete a Node From the End.\t\t\t6.Delete a Node from specified Location.\n7.Display the Linked List.\t\t\t8.EXIT\n\n->Enter Your Choice: ");
					scanf("%d",&inner_op);					
					switch(inner_op)
					{
						case 1:
							in_first_cl();
						break;
						case 2:
							in_end_cl();
						break;
						case 3:
							in_loc_cl();
						break;
						case 4:
							del_first_cl();
						break;
						case 5:
							del_end_cl();
						break;
						case 6:
							del_loc_cl()							;
						break;
						case 7:
							display_csl();
						break;
						case 8:
						break;
						default:
							printf("\nInvalid Option!");
						break;
					}
					if(inner_op == 4)
					break;
				}
			break;

			case 7:
				printf("\nThanks For Visiting.");
				exit(1);

			default:
				printf("\nInvalid Option!");
			break;		
			
		}	
		outer_op = 0;	
	}
	return 0;
}

// Functions Defination.
// STACK

void push()
{
	int item;
	
	if(top == N - 1)
	printf("\nOverflow");
	else
	{
		printf("\nEnter The Element: ");
		scanf("%d",&item);	
		arr_s[++top] = item;	
	}
}

void pop()
{
	int x;
	if(top == -1)
	printf("\nUnderflow");
	else
	{
		x = arr_s[top--];
		printf("\n%d is Deleted From The List.",x);
	}
}
void display_s()
{
	int i;
	if(top == -1)
	printf("\nUnderflow");
	printf("\n");
	for(i = top; i >= 0; i--)
	printf("%d\t",arr_s[i]);
}


// Straight Line Queue

void insertion()
{
	int item;
		if(front == 0 && rear == N - 1)
			printf("\nOverflow!");
		else
		{
			printf("\nEnter The Element: ");
			scanf("%d",&item);
		if(front == -1 && rear == -1)
		{
			front = 0;
			rear = 0;
		}
		else
			rear += 1;
		arr_sq[rear] = item;
	}
}

void deletion()
{
	int x;
	if(front == -1 && rear == -1)
		printf("\nUnderflow!");
	else
	{
		x = arr_sq[front];
		printf("\n%d is Deleted Item.",x);
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
			front += 1;	
	}
}

void display_sq()
{
	if(front == -1 && rear == -1)
		printf("\nUnderflow!");
	else
	{
		int i = front;
		printf("\n");	
	
		for(; i <= rear;i++)
		printf("%d\t",arr_sq[i]);	
	}
}


// Circular QUEUE
void insertion_c()
{
	int item;
	if((front_c == 0 && rear_c == N - 1) || (front_c == rear_c + 1))
        printf("Overflow");
    else
    {
        printf("\nEnter element to be inserted: ");
        scanf("%d", &item);
		if(front_c == -1 && rear_c == -1)
		{
			front_c = 0;
			rear_c = 0;
		}
		else
			rear_c = (rear_c + 1) % N;
		arr_cq[rear_c] = item;
	}
}

void deletion_c()
{
	int x;
	if (front_c == -1 && rear_c == -1)
        printf("\nUnderflow!");
    else
    {
    	x = arr_cq[front_c];
    	printf("\n%d is Deleted from the List.",x);
		if(front_c == rear_c)
		{
			front_c = -1;
			rear_c = -1;
		}
		else
			front_c = (front_c + 1) % N;	
	}
}

void display_cq()
{
	
	int i = front_c;
	if (front_c == -1 && rear_c == -1)
		printf("\nUnderflow!");
	else
	{
		while(i != rear_c)
		{
			printf("%d\t",arr_cq[i]);
			i = (i + 1) % N;
		}
		printf("%d\t",arr_cq[i]);	
	}
	
}


// Singly Linked List
struct node_s* c_node(int item)
{
	struct node_s* ptr;
	ptr = (struct node_s *)malloc(sizeof(struct node_s));
	if(ptr == NULL)
	{
		printf("Insufficient Memory!");
		exit(1);
	}
	ptr->data = item;
	ptr->next = NULL;
	
	return ptr;
}
void in_first()
{
	struct node_s* ptr;
	int item;
	printf("\nEnter the Element: ");
	scanf("%d",&item);
	ptr = c_node(item);
	
	if(head == NULL)
	head = ptr;
	else
	{
		ptr->next = head;
		head = ptr;
	}
}

void in_end()
{
	struct node_s* ptr;
	struct node_s* tmp;
	
	int item;
	printf("\nEnter the Element: ");
	scanf("%d",&item);
	
	ptr = c_node(item);
	
	if(head == NULL)
	head = ptr;
	else
	{
		tmp = head;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
}

void in_loc()
{
	struct node_s* ptr;
	struct node_s* tmp;
	int count = 0;
	int loc, item;

	if(head == NULL)
	{
		printf("\nLinked List is Empty\nElement will be Inserted at Position 1.");
		in_first();
	}
	else
	{
		tmp = head;
		while(tmp->next != NULL)
		{
			count++;
			tmp = tmp->next;
		}
		count++;
		
		printf("\nEnter the Position: ");
		scanf("%d",&loc);
		
		if(loc < 0 || loc > count + 1)
		printf("\nInvalid Position!");
		else if(loc == 1)
		in_first();
		else if(loc == count + 1)
		in_end();
		else
		{
			printf("\nEnter The Element: ");
			scanf("%d",&item);
			ptr = c_node(item);
			
			tmp = head;
			loc--;
			while(loc -1 > 0)
			tmp = tmp->next;
			
			ptr->next = tmp->next;
			tmp->next = ptr;
		}
	}
	
}

void del_first()
{
	if(head == NULL)
	printf("\nLinked List is Empty");
	else
	{
		struct node_s* tmp;
		if(head->next == NULL)
		{
			printf("\n%d is deleted from the list\n",head->data);
			head = NULL;	
		}
		else
		{
			tmp = head;
			printf("\n%d is deleted from the list\n",head->data);
			head = head->next;
			free(tmp);
		}	
	}
}

void del_end()
{
	if(head == NULL)
	printf("\nLinked List is Empty");
	else
	{
		struct node_s* tmp;
		struct node_s* ptr;
		
		if(head->next == NULL)
		{
			printf("\n%d is deleted from the list\n",head->data);
			head = NULL;
		}
		else
		{
			tmp = head;	
			ptr = head->next;
		
			while(ptr->next != NULL)
			{
				tmp = tmp->next;
				ptr = ptr->next;
			}
			tmp->next = NULL;
			printf("\n%d is deleted from the List.\n",ptr->data);
			free(ptr);			
		}
			
	}
	
}

void del_loc()
{
	struct node_s* tmp_p;
	struct node_s* tmp_n;
	int count = 0;
	int pos;
	
	if (head == NULL)
	printf("\nLinked List is Empty!");
	else
	{
		tmp_p = head;
		while(tmp_p->next != NULL)
		{
			tmp_p = tmp_p->next;
			count++;
		}
		count++;
	//	printf("\n%d",count);
		printf("\nEnter The Position: ");
		scanf("%d",&pos);
		if(pos <= count && pos > 0)
		{
			if(pos == 1)
			del_first();
			else if(pos == count)
			del_end();
			else
			{
				tmp_p = head;
				while(pos - 2 > 0)
				{
					tmp_p = tmp_p->next;
					pos--;
				}
				tmp_n = tmp_p->next;
				tmp_p->next = tmp_n->next;
				printf("\n%d is Deleted from the List!",tmp_n->data);
				free(tmp_n);
			}
			
		}
		else
		printf("\nInvalid Location!");
	}
}


void display_ll()
{
	struct node_s* tmp;

	if(head == NULL)
	printf("\nLinked List is Empty");
	else
	{
		tmp = head;
		while(tmp != NULL)
		{
			printf("%d\t",tmp->data);
			tmp = tmp->next;
		}	
	}
	
}


// Doubly Linked List
struct node_d* cl_node(int item)
{
	struct node_d* ptr;
	ptr = (struct node_d*)malloc(sizeof(struct node_d));
	if(ptr == NULL)
	{
		printf("Insufficient Memory!");
		exit(1);
	}
	ptr->data = item;
	ptr->next = NULL;
	ptr->prev = NULL;
	
	return ptr;
}
void in_first_dl()
{
	struct node_d* ptr;
	int item;
	
	printf("\nEnter the Element: ");
	scanf("%d",&item);
	ptr = cl_node(item);
	
	if(start == NULL)
	start = ptr;
	else
	{
		ptr->next = start;
		start->prev = ptr;
		start = ptr;
	}
}
//
//
void in_end_dl()
{
	struct node_d* tmp;
	struct node_d* ptr;

	int item;

	printf("\nEnter the Element: ");
	scanf("%d",&item);

		
	ptr = cl_node(item);
	if(start == NULL)
	start = ptr;
	else
	{
		tmp = start;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		ptr->prev = tmp;
		tmp->next =ptr;
	}
}

void in_loc_dl()
{
	struct node_d* ptr;
	struct node_d* tmp;
	struct node_d* tmp01;
	int count = 0;
	int pos, item;

	if (start == NULL)
	{
		printf("\nLinked List is Empty\nInserted Element will be added at Position 1");
		in_first_dl();		
	}
	else
	{
		tmp = start;
		while(tmp->next != NULL)
		{
			count++;
			tmp = tmp->next;
		}
		count++;
		
	//	printf("\n\n%d",count);
	
		printf("\nEnter The Position: ");
		scanf("%d",&pos);	
		
		if(pos > 0 && pos <= count + 1)
		{
			if(pos == 1)
			in_first_dl();
			else if(pos == count + 1)
			in_end_dl();
			else
			{
				printf("\nEnter The Element: ");
				scanf("%d",&item);
				ptr = cl_node(item);
				
				tmp = start;
				pos--;
				while(pos - 1 > 0)
				{
					tmp = tmp->next;
					pos--;
				}
					tmp01 = tmp->next;
					tmp->next = ptr;
					tmp01->prev = ptr;
					ptr->prev = tmp;
					ptr->next = tmp01;	
			}		
		}
		else
		printf("\nInvalid Position!");
	}

}	




void del_first_dl()
{
	struct node_d* tmp;
	
	if(start == NULL)
	printf("\nLinked List is Empty!");
	else
	{
			if(start->next == NULL)
		{
			printf("\n%d is Deleted From the List.\n",start->data);
			start = NULL;
		}
		else
		{
			tmp = start;
			start = start->next;
			start->prev = NULL;
			printf("\n%d is Deleted From the List.\n",tmp->data);
			free(tmp);
		}	
	}
	
}
void del_end_dl()
{
	struct node_d* tmp_p;
	struct node_d* tmp_n;
	
	if(start == NULL)
	printf("\nLinked List is Empty!");
	else
	{
			if(start->next == NULL)
		{
			printf("\n%d is Deleted From the List.\n",start->data);
			start = NULL;
		}
		else
		{
			tmp_p = start;
			tmp_n = start->next;
			
			while(tmp_n->next != NULL)
			{
				tmp_p = tmp_p->next;
				tmp_n = tmp_n->next;
			}
			tmp_p->next = NULL;
			printf("\n%d is Deleted From the List.\n",tmp_n->data);
			free(tmp_n);
		}	
	}
}


void del_loc_dl()
{
	struct node_d* tmp_p;
	struct node_d* tmp_n;
	int count = 0;
	int pos;
	
	if (start == NULL)
	printf("\nLinked List is Empty!");
	else
	{
		tmp_p = start;
		while(tmp_p->next != NULL)
		{
			tmp_p = tmp_p->next;
			count++;
		}
		count++;
	//	printf("\n%d",count);
		printf("\nEnter The Position: ");
		scanf("%d",&pos);
		if(pos <= count && pos > 0)
		{
			if(pos == 1)
			del_first_dl();
			else if(pos == count)
			del_end_dl();
			else
			{
				pos--;
				tmp_p = start;
				tmp_n = tmp_p->next;
				while(pos - 1 > 0)
				{
					tmp_n = tmp_n->next;
					tmp_p = tmp_p->next;
					pos--;
				}
				tmp_p->next = tmp_n->next;
								
				printf("\n%d is Deleted from the List!",tmp_n->data);
				free(tmp_n);
			}
			
		}
		else
		printf("\nInvalid Location!");
	}
}


void display_dll()
{
	struct node_d* tmp;
	if(start == NULL)
	printf("\nLinked List Empty!");
	else
	{
		tmp = start;
		while(tmp != NULL)
		{
			printf("%d\t",tmp->data);
			tmp = tmp->next;
		}	
	}
	
}


//// Circular Linled List
//
struct node_cs* cll_node(int item)
{
	struct node_cs* ptr;
	ptr = (struct node_cs*)malloc(sizeof(struct node_cs));
	if(ptr == NULL)
	{
		printf("insuficient Memory!");
		exit(1);
	}
	ptr->data =item;
	ptr->next = ptr;
}
void in_first_cl()
{
	struct node_cs* ptr;
	struct node_cs* tmp;

	int item;
	printf("\nEnter the Element: ");
	scanf("%d",&item);
	ptr = cll_node(item);
	
	if(begin == NULL)
	begin = ptr;
	else
	{
		tmp = begin;
		while(tmp->next != begin)
		{
			tmp = tmp->next;
		}
		ptr->next = begin;
		begin = ptr;
		tmp->next = begin;		
	}
}
//
void in_end_cl()
{
	struct node_cs* ptr;
	struct node_cs* tmp;

	int item;
	printf("\nEnter the Element: ");
	scanf("%d",&item);
	
	ptr = cll_node(item);
	
	if(begin == NULL)
	begin = ptr;
	else
	{
		tmp = begin;
		while(tmp->next != begin)
		{
			tmp = tmp->next;		
		}
		tmp->next = ptr;
		ptr->next = begin;
	}
}


void in_loc_cl()
{
	struct node_cs* ptr;
	struct node_cs* tmp1;
	
	int count = 0;
	int item, pos;
	
	if(begin == NULL)
	{
		printf("\nLinked List is Empty\nElement will be Inserted at Position 1.");
		in_first_cl();
	}
	else
	{
		printf("\nEnter the Position: ");
		scanf("%d",&pos);
		
		tmp1 = begin;
		while(tmp1->next != begin)
		{
			count++;
			tmp1 = tmp1->next;
		}
		count++;
		if(pos > 0 || pos <= count + 1)
		{
			
			if(pos == 1)
			in_first_cl();
			else if(pos == count + 1)
			in_end_cl();
			else
			{
				printf("\nEnter the Element: ");
				scanf("%d",&item);
				ptr = cll_node(item);
				
				pos--;
				
				tmp1 = begin;
				while(pos - 1 > 0)
				tmp1 = tmp1->next;
					
				ptr->next = tmp1->next;
				tmp1->next = ptr;
			}	
		}
		else
		printf("\nInvalid Position!");
		
	}
}


void del_first_cl()
{
	struct node_cs* tmp;
	struct node_cs* tmp1;
	
	if(begin == NULL)
	printf("\nLinked List is Empty");
	else
	{
		if(begin->next == begin)
		{
			printf("\n%d is Deleted from the List.\n",begin->data);
			begin = NULL;
		}
		else
		{
			tmp = begin;
			tmp1 = begin;
			while(tmp->next != begin)
			{
				tmp = tmp->next;
			}
			begin = begin->next;
			tmp->next = begin;
			printf("\n%d is Deleted from the List.\n",tmp1->data);
			free(tmp1);
		}
		
	}	
}

void del_end_cl()
{
	struct node_cs* tmp_p;
	struct node_cs* tmp_n;
	
	if(begin == NULL)
	printf("\nLinked List is Empty");
	else
	{
		if(begin->next == begin)
		{
			printf("\n%d is Deleted from the List.\n",begin->data);
			begin = NULL;
		}
		else
		{
			tmp_p = begin;
			tmp_n = begin->next;
			
			while(tmp_n->next != begin)
			{
				tmp_p = tmp_p->next;
				tmp_n = tmp_n->next;
			}
			tmp_p->next = begin;
			
			printf("\n%d is Deleted from the List.\n",tmp_n->data);
			free(tmp_n);
		}
		
	}	
}

void del_loc_cl()
{
	struct node_cs* tmp1;
	struct node_cs* tmp2;
	int count = 0, item;
	int pos;
	
	if(begin == NULL)
	printf("\nLinked List Is Empty!");
	else
	{
		tmp1 = begin;
		while(tmp1->next != begin)
		{
			count++;
			tmp1 = tmp1->next;
		}
		count++;
		
		printf("\nEnter the Position: ");
		scanf("%d",&pos);
		
		if(pos > 0 || pos <= count)
		{
			
			if(pos == 1)
			del_first_cl();
			else if(pos == count)
			del_end_cl();
			else
			{
				pos--;
				tmp2 = begin->next;
				tmp1 = begin;
				
				while(pos - 1 > 0)
				{
					tmp2= tmp2->next;
					tmp1 = tmp1->next;
				}
				tmp1->next = tmp2->next;
				printf("\n%d is Deleted from the List!",tmp2->data);
				free(tmp2);
			}
		}
		else
		printf("\nInvalid Location!");
	}
}

void display_csl()
{
	struct node_cs* ptr;
	
	if(begin == NULL)
	printf("\nLinked List is Empty!");
	else
	{
		ptr = begin;
		while(ptr->next != begin)
		{
			printf("%d\t",ptr->data);
			ptr = ptr->next;
		}
		printf("%d\t",ptr->data);	
	}
}
