#include<iostream>
using namespace std;
int main()
{ int n1,n2,i;
   float si,ci,sv,cv,pc,pcs,ae[50],pe[50],bcwp=0,bcws=0,acwp=0,BAC;
cout<<"                         EARNED VALUE ANALYSIS\n" <<"\n";
cout<<"enter the budget at completion:";
cin>>BAC;
cout<<"\nenter the total number for task: ";
cin>>n1;
cout<<"\nenter the number of completed task : ";
cin>>n2;
cout<<"----------------------------------------------------------------";
cout<<"\nenter the planned effort:\n";
for(i=0;i<n1;i++)
{cout<<"\n task "<<(i+1)<<": ";
cin>>pe[i];
}
cout<<"----------------------------------------------------------------";
cout<<"\nenter the actual effort:\n";
for(i=0;i<n2;i++)
{cout<<"\n task "<<(i+1)<<": ";
cin>>ae[i];
}
for(i=0;i<n1;i++)
{
bcws=bcws+pe[i];
}
for(i=0;i<n2;i++)
{
bcwp=bcwp+pe[i];
}
for(i=0;i<n2;i++)
{
acwp=acwp+ae[i];
}
cout<<"----------------------------------------------------------------";
cout<<"\n Actual cost of work performed: "<<acwp<<"\n";
cout<<"\n budjected cost of work performed: "<<bcwp<<"\n";
cout<<"\n budjected cost of work scheduled: "<<bcws<<"\n";
cout<<"----------------------------------------------------------------";
sv=bcwp-bcws;
cv=bcwp-acwp;
si=bcwp/bcws;
ci=bcwp/acwp;
cout<<"\n Schedule Variance: "<<sv<<"\n";
cout<<"\n Schedule Performance: "<<si<<"\n";
cout<<"\n cost variance: "<<cv<<"\n";
cout<<"\n cost performce Index: "<<ci<<"\n";
pcs=(bcws/BAC)*100;
pc= (bcwp/BAC)*100;
cout<<"\n Percent scheduled for completion: "<<pcs<<"%"<<"\n";
cout<<"\n Percent complete: "<<pc<<"%"<<"\n";
return 0;
}
