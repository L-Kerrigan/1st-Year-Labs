/* Exercise 9, Question 3: Attempt 2
This program will edit the linked list example supplied in the lectures to create a stack. Attempt 2. */

/*  Operating and maintaining a linked list */
#include <stdio.h>
#include <stdlib.h>

 /* The stack */
struct stack{
	char data; /* each stack contains a character */
	struct stack *next; /* pointer to next */
}stack;

/* prototypes */
struct stack *insert(char value, struct stack *top);
struct stack *delete(struct stack *top);
int isEmpty(struct stack *top);
void printList(struct stack *top);
void instructions( void );



int main(void)
{
	//pointer to the top of the stack
    struct stack *top = NULL;
    //pointer to the current element of the stack
    struct stack *curr = NULL;
    int choice; /* user's choice */
    char element; /* char entered by user */

    instructions(); /* display the menu */
    printf( "? " );
    scanf( "%d", &choice );

	while(choice!=3)
	{
		switch(choice)
		{
			case 1:
			printf( "Enter a character: " );
            scanf( "\n%c", &element ); //Asks user for the character to be added
            insert(element, top); /* insert item in list */
            printList(top); //Print stack
            break;

			case 2:
			if ( !isEmpty(top) ) {
                if (delete(top) ){ /* remove item */
					printf( "%c deleted.\n", element );
                    printList(top); //Prints stack
                } /* end if */
                else {
					printf( "%c not found.\n\n", element );
				}/* end else */
			}
			else {
				printf( "List is empty.\n\n" );
            } /* end else */

			default:
			printf( "Invalid choice.\n\n" );
			instructions();
            break;
		}
		printf( "? " );
        scanf( "%d", &choice );
	}
	printf( "End of run.\n" );
    return 0; /* indicates successful termination */
} /* end main */


     /* display program instructions to user */
void instructions( void )
{
    printf( "Enter your choice:\n"
         " 1 to push an element into the stack.\n"
         " 2 to pop an element from the stack.\n"
         " 3 to end.\n");
} /* end function instructions */


     /* Return 1 if the list is empty, 0 otherwise */
int isEmpty(struct stack *top)
{
    return top == NULL;
} /* end function isEmpty */




struct stack *insert(char value, struct stack *top){
    struct stack *curr = top;
    top = malloc(sizeof(stack)); //Assigning memory to pointer top
    top->data = value; //Adding the new value
    top->next = curr;
    return top;
}

struct stack * delete(struct stack *top){
    struct stack *curr = top;
    if(curr!=NULL){ //Only works if curr contains a value
        top = curr->next;
        printf("Stack Data: %c\n", curr->data);
        free(curr);
    }
    return top;
}



     /* Print the list */
void printList(struct stack *current)
{
    /* if list is empty */
    if (current == NULL ) {
        printf( "List is empty.\n\n" );
     } /* end if */
    else {
        printf( "The list is:\n" );

    /* while not the end of the list */
    while (current != NULL ) {
        printf( "%c --> ", current->data );
        current = current->next;
     } /* end while */

    printf( "NULL\n\n" );
     } /* end else */
} /* end function printList */
