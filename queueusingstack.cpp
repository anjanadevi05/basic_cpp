//queue using stack
#include<stdio.h>
int top1=-1,top2=-1,st1[100],st2[100],count=0;
void push1(int data)
{
    st1[++top1]=data;
}
int pop1()
{
    return st1[top1--];
}
void push2(int data)
{
    st2[++top2]=data;
}
int pop2()
{
    return st2[top2--];
}
void display()
{
    printf("QUEUE: ");
    for(int i=0;i<=top1;i++)
        printf("%d ",st1[i]);
}
void enqueue()
{
    int data;
    printf("Enter the data to be inserted:");
    scanf("%d",&data);
    push1(data);
}
void dequeue()
{
    int i;
    while(top1!=-1)
        push2(pop1());
    printf("\nPopped element is %d",pop2());
    while(top2!=-1)
        push1(pop2());
}
int main()
{
    int choice;
    printf("Enter 1-ENQUEUE, 2-DEQUEUE, 3-DISPLAY, 4-EXIT:");
    do
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("EXIT");
            break;
        default:
            printf("INVALID CHOICE");
        }
    }while(choice!=4);
    return 0;
}
