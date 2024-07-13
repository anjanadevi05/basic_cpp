#include<iostream>
using namespace std;
int n=0;
int arr[2];
void push(int x)
{
 try
 {
 if(n>2)
 {
        throw "\nstack is full";
 }
 else
 {
   arr[n]=x;
   n++;
   cout<<"\nthe pushed element is "<<x;
 }
}
catch(const char* ex)
{
cout<<ex;
}
}
void pop()
{
 n--;
      try
 {
   if(n<0)
     {
       throw "\nstack is empty";
     }
   else
     {
       cout<<"\nThe popped element is:"<<arr[n];
     }
 }
 catch(const char* ex)
 {
   cout<<ex;
      }
}
void display()
{
int i;
cout<<"\nThe elements in the array:";
for(i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
}
int main()
{
int ch,ele;
do
{
cout<<"\nEnter a choice:";
   cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter the element:";
cin>>ele;
push(ele);
display();
break;
case 2:
pop();
display();
break;
case 3:
exit(0);
break;
}
}
while(ch!=3);
}

