#include<iostream>
using namespace std;
class matrix
{
	public:
		int row,col;
		int mat[100][100];
	    matrix()
	    {
	    	cout<<"enter the no. of rows and columns:\n";
	    	cin>>row>>col;
		}
		matrix(int a,int b)
		{
			row=a;
			col=b;
		}
		void get()
		{
			int i,j;
			cout<<"enter the elements in the matrix\n";
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					cin>>mat[i][j];
				}
			}
			
		}
		void display()
		{
			int i,j;
			cout<<"The elements in the matrix are:\n";
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					cout<<mat[i][j]<<" ";
				}
				cout<<"\n";
			}
			
		}
};
int main()
{
	matrix m;
	m.get();
	m.display();
	matrix m1(2,3);
	m1.get();
	m1.display();
}
