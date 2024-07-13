#include <stdio.h>
#include<stdlib.h>
int h[1000];
int size;
void insert_linearprobing()
{
int key,index,i,flag=0,hkey;
printf("\nenter a value to insert into hash table\n");
scanf("%d",&key);
hkey=key%size;//defining the hashing function
for(i=0;i<size;i++)
 {
 index=(hkey+i)%size;
 if(h[index] == 0)
 {
 h[index]=key;
 break;
 }
 }
 if(i ==size)
 printf("\nelement cannot be inserted\n");
}
void insert_quadraticprobing()
{
int key,index,i,flag=0,hkey;
printf("\nenter a value to insert into hash table\n");
scanf("%d",&key);
hkey=key%size;
for(i=0;i<size;i++)
{
 index=(hkey+i*i)%size;
 if(h[index] == 0)
 {
 h[index]=key;
 break;
 } }
if(i ==size)
 printf("\nelement cannot be inserted\n");
}
void insert_doublehashing()
{
int key,index,i,flag=0,hkey,hash2;
printf("\nenter a value to insert into hash table\n");
scanf("%d",&key);
hkey=key%size;
hash2 = 7-(key %7);//most used double hash function using this as not specified
for(i=0;i<size;i++)
{
 index=(hkey+i*hash2)%size;
 if(h[index] == 0)
 {
 h[index]=key;
 break;
 }
  }
if(i ==size)
 printf("\nelement cannot be inserted\n");
}
void display()
{
 int i;
 printf("\nelements in the hash table are \n");
 for(i=0;i<size; i++)
 printf("\nat index %d \t value = %d",i,h[i]);
}
main()
{
 int choice,ch,i;
 printf("\nEnter hash table size : ");
 scanf("%d",&size);
 printf("\nTo implement hash table using Press 1. LINEAR PROBING\t 2. QUADRATIC PROBING\t 3. DOUBLE HASHING\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 do
 {
printf("\nEnter 0-display\t1-insert: ");
 scanf("%d",&ch);
 if(ch==0)
 {
 	display();
 	break;
 }
insert_linearprobing();
} 
while(ch!=0);
 break;
 case 2:
 do
 {
printf("\nEnter 0-display\t1-insert: ");
 scanf("%d",&ch);
 if(ch==0)
 {
 	display();
 	break;
 }
insert_quadraticprobing();
} 
while(ch!=0);
 break;
 case 3:
 do
 {
printf("\nEnter 0-display\t1-insert: ");
 scanf("%d",&ch);
 if(ch==0)
 {
 	display();
 	break;
 }
insert_doublehashing();
 } 
while(ch!=0);
 break;
 default:exit(0);
 }
}
