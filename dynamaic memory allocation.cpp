#include<iostream>
using namespace std;
int main()
{
	int *p=new int(15);
    float *x=new float(2005.02);
    int *arr=new int[5];
    cout<<"enter 5 elements in the array\n";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    cout<<"the value of p is:"<<*p;
    cout<<"\nthe value of x is:"<<*x;
    cout<<"\nthe elements of the array are:";
    for(int i=0;i<5;i++)
    cout<<"  "<<arr[i];
    delete p;
    delete x;
    delete arr;
}
