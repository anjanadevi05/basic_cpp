#include<iostream>
#include<vector>
using namespace std;
class vectors
{
	public:
		vector<int>v;
		int size;
		void print();
		vectors()
		{
			size=0;
		}
		vectors(int size)
		{
			this->size=size;
			v.resize(size);
		}
		vectors(int size,int value)
		{
			this->size=size;
			v.resize(size,value);
		}
		vectors(vector<int>v1)
		{
			v=v1;
			size=v1.size();
		}
		~vectors()
		{
			v.clear();
			cout<<"\nvector cleared!!";
		}
};
		void vectors::print()
		{
			cout<<"elements in the vector: ";
			for(int i=0;i<size;i++)
			{
				cout<<v[i]<<" "; 
			}
			
		}
		int main()
		{
			vectors ve;
			int flag=0,x;
			cout<<"enter 1 to enter element in vector else enter 0\n";
			do
			{
				cout<<"enter choice\n";
				cin>>flag;
				if(flag==1)
				{
					cout<<"enter the element\n";
				    cin>>x;
				    ve.v.push_back(x);
				    ve.size++;
				}
				else
				break;
				
			}
			while(flag==1);
			ve.print();	
		}
	

