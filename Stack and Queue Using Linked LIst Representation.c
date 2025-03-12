#include<stdio.h>
#include<stdlib.h>

//Remove the comments to execute the program

//Stack using linked list representation

/*struct node{
    int data;
    struct node* next;
    };
void insertion(struct node** top,int value){
    struct node* mnalloc=(struct node*)malloc(sizeof(struct node));
    mnalloc->data=value;
    mnalloc->next=*top;
    *top=mnalloc;
    printf("The value %d is successfully inserted \n",value);
}
void deletion(struct node** top){
    if(*top==NULL){
        printf("The STACK IS EMPTY UNDERFLOW!!\n");
        return;
    }
    struct node* temp=*top;
    printf("The value %d is deleted fromthe stack \n",temp->data);
    *top=(*top)->next;
    free(temp);
}
void display(struct node* top){
    if(top==NULL){
        printf("The stack i s empty\n");
        return;
        }
        while(top!=NULL){
            printf("%d",top->data);
            top=top->next;
        }
        printf("\n");
}

int main() {
    struct node* st = NULL;
    int tee = 1;
    while (tee == 1) {
        int ch;
        printf("Enter 1 to insert data into the stack \n");
        printf("Enter 2 to delete data from the stack \n");
        printf("Enter 0 to display the stack \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                printf("Enter the data to insert into the stack: ");
                int val;
                scanf("%d", &val);
                insertfn(&st, val);
                break;
            }
            case 2:
                deletefn(&st);
                break;
            case 0:
                displayfn(st);
                break;
            default:
                printf("Enter the correct choice \n");
                break;
        }

        printf("Do you want to continue? Enter 1 to continue or 0 to quit: ");
        scanf("%d", &tee);
    }
    return 0;
}*/

//Queue using the linked list representation

/*struct node{
    int data;
    struct node* next;
};
void insertion(struct node** front,struct node** rear,int values){
    struct node* mnalloc=(struct node*)malloc(sizeof(struct node));
    mnalloc->data=values;
    mnalloc->next=NULL;
    if(*rear==NULL){
    *front=*rear=mnalloc;
    }
    else{
    (*rear)->next=mnalloc;
    *rear=mnalloc;
    printf("The element inserted is %d",values);
    }
}
void deletion(struct node** front){
    if(*front==NULL){
        printf("The stack is empty");
        return;
    }
    else{
    struct node* temp=*front;
    printf("The value which is to be removed from the queue is %d",temp->data);
    *front=(*front)->next;
    free(temp);
    }
}
void display(struct node* front){
    if(front==NULL){
        printf("The stack is empty\n");
        return;
    }
    while(front!=NULL){
        printf("%d",front->data);
        front=front->next;
    }
}
int main() {
    struct node* front = NULL; // Initialize the front of the queue
    struct node* rear = NULL;  // Initialize the rear of the queue
    int tee = 1;               // Control variable for the loop

    while (tee == 1) {
        int ch;
        printf("Enter 1 to insert data into the queue \n");
        printf("Enter 2 to delete data from the queue \n");
        printf("Enter 0 to display the queue \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                printf("Enter the data to insert into the queue: ");
                int val;
                scanf("%d", &val);
                insertion(&front, &rear, val);
                break;
            }
            case 2:
                deletion(&front);
                break;
            case 0:
                display(front);
                break;
            default:
                printf("Enter the correct choice \n");
                break;
        }

        printf("Do you want to continue? Enter 1 to continue or 0 to quit: ");
        scanf("%d", &tee);
    }
    return 0;
}*/
