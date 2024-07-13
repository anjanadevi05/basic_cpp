#include<stdio.h>
void swap(int *var)//function to swap the (i)th and (i+1)th element using pointers(address as actual parameter )
{
 int temp;
 temp=*var;
 *var=*(var+1);
 *(var+1)=temp;//changes are directly made in the array because each element is accessed using its address
}
int main()
{
	int arr[6]={10,20,30,40,50,60};//intializing the given array
	int i,choice,n;
	for(i=0;i<6;i=i+2)
	{
		swap(&arr[i]);//passing address of each element to the function swap(call by reference)
	}
	printf("array after sorting:\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",arr[i]);//to print the array after sorting
	}
	printf("\nenter you choice:\n");
	scanf("%d",&choice);//to get choice from user
	switch(choice)
	{
		case 10:
			/*due to the absence of break statement in case 10,case 20 also gets executed when choice 10 is entered*/
		case 20:
			struct pen//defining a structure
			{
			 char pen_name[20],pen_type[20],pen_color[20];
			}p[2];//an array of datatype pen to store the info of 2 pens
			 n=sizeof(p);//size of the structure
			 printf("size of the structure: %d",n);
			 break;//end of case 10,20
		case 30:
			/*due to the absence of break statement in case 30,case 40 also gets executed when choice 30 is entered*/
		case 40:
			union pens//defining a union
			{
			 char pen_name[20],pen_type[20],pen_color[20];
			}pen[2];//array of datatype pens
			n=sizeof(pen);//size of union
			printf("size of the union: %d",n);
			break;//end of case 30,40
			case 50:
			case 60:
			default:
			printf("enter a vaild choice!!");//default statement
				
		}	
		return 0;
}
