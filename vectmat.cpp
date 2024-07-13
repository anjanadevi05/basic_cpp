#include<iostream>
#include<vector>
using namespace std;
class vectofvect
{
	public:
		int row,col;
		vector<vector<int> >mat;
		vectofvect()
		{
			cout<<"default constructor";
			row=0;
			col=0;
			mat=vector<vector<int> >(row,vector<int>(col));
		}
		vectofvect(int a,int b)
		{
			cout<<"parametric constructor";
			row=a;
			col=b;
			mat=vector<vector<int> >(a,vector<int>(b));
		}
		vectofvect(vectofvect &n)
		{
			cout<<"copy constructor\n";
			mat=n.mat;
		}
		void get()
		{
			cout<<"\nenter the no of rows:\n";
			cin>>row;
			mat.resize(row);
			for(int i=0;i<row;i++)
			{
				cout<<"enter the no of columns for row"<<(i+1)<<":";
				cin>>col;
				mat[i].resize(col);
				cout<<"enter the elements of columns for row"<<(i+1)<<":";
				cout<<"\n";
				for(int j=0;j<col;j++)
				{
					cin>>mat[i][j];
				}
			}
		}
		void display()
		{
			int i,j;
			cout<<"The elements are:\n";
			for(i=0;i<mat.size();i++)
			{
				for(j=0;j<mat[i].size();j++)
				{
					cout<<mat[i][j]<<" ";
				}
				cout<<"\n";
			}
			
		}
		
};
int main()
{
	vectofvect m1;
	m1.get();
	m1.display();
	vectofvect m2(2,3);
	m2.get();
	m2.display();
	vectofvect m3(m2);
	m3.display();
}
