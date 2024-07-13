#include <stdio.h>
//stack using queue
#define N 10

int queue[N];
int queue1[N-1];

int size = 0, front = -1, rear = -1;

int pop(){
int i;
for(i=0; i<size; i++) queue1[i] = queue[i];
}

int push(){
int i;
for(i=0; i<size; i++) queue[i+1]=queue1[i];
}

int enqueue(int input)
{
if(front == -1) 
{
front = 0;
rear = 0;
queue[0]=input;
}
else if (rear==N-1) 
{
printf("Overflow\n");
return;
}
else{
pop();
queue[0]=input;
push();
rear++;
}
size++;
}

int dequeue(){
if(front==-1) printf("Underflow\n");
else if (front==rear) {
front = -1;
rear = -1;
}
else{
pop();
int i;
for(i=0; i<size-1;i++) queue[i]=queue1[i+1];
}
size--;
}

display(){
if(front==-1) printf("Underflow\n");
printf("The current Queue (works as stack) is ");
int i;
for(i=0; i<size;i++) printf("%d\t",queue[i]);
printf("\n");
}

int main(){
int choice,data;
two:
printf("Stack with queue\n"
"Guide:-\n"
"1. Push\n"
"2. Pop\n"
"3. Display\n"
"0. Exit\n");
one:
printf("Enter choice: ");
scanf("%d",&choice);
switch(choice){
case 1: printf("Enter data: "); scanf("%d", &data); enqueue(data); goto one;
case 2: dequeue(); goto one;
case 3: display(); goto one;
case 0: return 0;
default: printf("Invalid choice\n"); goto two;
}
}
