#include <stdio.h>
#include <string.h>

struct node {
	int value;
	struct node* next;
};
typedef struct node node_t;

void printlist (node_t *head){
	node_t *temporary = head;
	
	while (temporary != NULL) {
		printf("%d - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}


int main() {
	node_t n1, n2, n3, n4;
	node_t *head;
	
	n1.value = 45;
	n2.value = 8;
	n3.value = 32;
	n4.value = 444;
	
	head = &n2;
	n2.next = &n1;
	n1.next = &n4;
	n4.next = &n3;
	
	
	node_t n5;
	n5.value = 56;
	n1.next = &n5;
	n5.next = &n4;
	
	head = head->next;
	
	printlist(head);
	
	return 0;
}
