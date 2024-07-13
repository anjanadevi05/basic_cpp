#include <iostream>
using namespace std; 

template<class T>
void ar(T value,int size)
{  
T arr[size];
	int i=0;
	for(i=0;i<size;i++)
	{
		arr[i]=value;
	}  
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
	} 
	
}


 
 
 
int main(){
 ar(3,5); 
 ar(4.23,10);
 ar('a',6);
 
 return 0;
}

