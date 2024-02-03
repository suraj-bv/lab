#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node{
	int ssn;
	char name[10];
	char dept[10];
	char degn[10];
	int sal;
	char phno[12];
	struct node *rlink;
	struct node *llink;
};
typedef struct node *NODE;
NODE insertrear(NODE head){
	NODE temp,cur;
	temp=(NODE)malloc(sizeof(struct node));
	printf("Enter the Employee details:\n");
	printf("Enter the SSN Name Deparment Designation Salary Phone number:\n");
	scanf("%d%s%s%s%d%s",&temp->ssn,temp->name,temp->dept,temp->degn,&temp->sal,temp->phno);
	cur=head->llink;
	cur->rlink=temp;
	temp->llink=cur;
	head->llink=temp;
	count++;
	return head;
}
NODE deleterear(NODE head){
	NODE cur,prev;
	if(head->rlink==head){
		printf("List is empty;");
	//	return;
	
	}
	else{
	cur=head->llink;
	prev=cur->llink;
	printf("Deleted Employee details is %d %s %s %s %d %s",cur->ssn,cur->name,cur->dept,cur->degn,cur->sal,cur->phno);
	head->llink;
	prev->rlink=head;
	free(cur);
	count--;}
	return head;
}
NODE insertfront(NODE head){
	NODE temp,cur;
	temp=(NODE)malloc(sizeof(struct node));
	printf("Enter the Employee details:\n");
        printf("Enter the SSN Name Deparment Designation Salary Phone number:\n");
        scanf("%d%s%s%s%d%s",&temp->ssn,temp->name,temp->dept,temp->degn,&temp->sal,temp->phno);
	cur=head->rlink;
	cur->llink=temp;
	temp->llink=head;
	head->rlink=head;
	head->rlink=temp;
	temp->rlink=cur;
	count++;
	return head;
}
NODE deletefront(NODE head){
	NODE cur,next;
	if(head->rlink==head){
		printf("List is empty");
	//	return;
	}
	else{
	cur=head->rlink;
	next=cur->rlink;
	next->llink=head;
	head->rlink=next;
	printf("Deleted Employee details is %d %s %s %s %d %s",cur->ssn,cur->name,cur->dept,cur->degn,cur->sal,cur->phno);
	free(cur);
	count--;
	}
	return head;
}
void display(NODE head){
	NODE cur;
	if(head->rlink==head){
		printf("List is empty:\n");
	//	return;
	}else{
	cur=head->rlink;
	printf("Employee details:\n");
        printf("SSN\tName\tDeparment\tDesignation\tSalary\tPhone number\n");
	while(cur->rlink!=head){
		printf("%d\t%s\t%s\t%s\t%d\t%s\n",cur->ssn,cur->name,cur->dept,cur->degn,cur->sal,cur->phno);
	cur=cur->rlink;}
	}
}
NODE DEqueue(NODE head){
	int ch;
	while(1){
		printf("DE Queue operation:\n");
		printf("1.Insert at front\n2.Delete at rear\n3.Insert at rear\n4.Delete at front\n5.Exit\n");
		switch(ch){
			case 1:head=insertfront(head);
			       break;
			case 2:head=deleterear(head);
			       break;
			case 3:head=insertrear(head);
			       break;
			case 4:head=deletefront(head);
			       break;
			case 5:return head;
			       break;
			default :printf("Enter a valid choice:");
				 break;
		}
	}
}
void main(){
	NODE head;
	head=(NODE)malloc(sizeof(struct node));
	head->rlink=head;
	head->llink=head;
	int ch;
	while(1){
		printf("Double Linked List MAIN MENU:\n");
		printf("1.create a list\n2.Display\n3.Insert at rear\n4.Delete at rear\n5.Insert at front\n6.Delete at front\n7.Demonstrate DE Queue\n8.Exit\n");
		printf("Enter your choice:");
			scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter the number of Employees list to be created:");
			       scanf("%d",&count);
			       for(int i=0;i<count;i++)
			       {
				       head=insertrear(head);
				       count--;
			       }
			       break;
			case 2:display(head);
			       break;
			case 3:head=insertrear(head);
			       break;
			case 4:head=deleterear(head);
			       break;
			case 5:head=insertfront(head);
			       break;
			case 6:head=deletefront(head);
			       break;
			case 7:head=DEqueue(head);
			       break;
			case 8:exit(0);
			       break;
			default:printf("Enter the valid choice:");
				break;
		}
	}
}
