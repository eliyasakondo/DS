

#include<stdio.h>
#include<stdlib.h>

#define N 15
int Queue[N];
int front=-1;
int rear =-1;



//insert elements in Array
void Enqueue(int x){
    if(rear==N-1){
        printf("overflow");
    }
else if(rear==-1 && front==-1){
        front=rear=0;
Queue[rear]=x;

}
else{
    rear++;
    Queue[rear]=x;
}
}

//Display function here
void Display(){
    if(front==-1 && rear==-1){
        printf("Queue Empty");

    }
    else{
            for(int i=front;i<rear+1;i++){
                printf("%d \t",Queue[i]);
            }

    }

}


//delete elements from this array
void Dequeue(){
    if(front==-1 && rear==-1){
            printf("Underflow Conditioin");
    }
    else if(front ==rear){
        front=rear=-1;

    }
    else{
        printf("\n Remove an element %d from queue.",Queue[front]);
        front++;
    }
}
void Peek(){
    if(front==-1 && rear==-1){
            printf("Empty Queue");
    }
    else
        printf("%d",Queue[front]);
}
int main(){
    int input,enqueueValue[10],dequeueValue[10];
 while(1){
     int ch;
  printf("\nEnter your choice list \n 1. Enqueue \n 2. Display  \n 3. Dequeue.\n 4. Peek  \n 4. Exit\n");
    scanf("%d",&ch);
switch(ch){
case 1:
    printf("how many elements you are Enqueuing :");
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        scanf("%d",&enqueueValue[i]);
    }
     for(int i=0;i<input;i++){
       Enqueue(enqueueValue[i]);
    }
//Enqueue(45);

    break;
case 2:Display();
        break;
case 3:
     printf("how many elements you are Dequeuing :");
    scanf("%d",&input);
     for(int i=0;i<input;i++){
       Dequeue(dequeueValue[i]);
    }

   // Dequeue();
    break;
    case 4: Peek();
    break;
case 5:
    exit(0);
    break;
default:
    printf("Wrong Input. Try Again");
    }
 }
return 0;
}

