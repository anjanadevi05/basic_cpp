#include <stdio.h> #include <string.h>  function for generation unique character id for vegetable char idc[10]; void veggieid(int d) { char a[10]; char b; int k,j=9;
// storing gn id with characters and numbers as character array a[0]='V'; a[1]='E'; a[2]='G'; int no; no=203000; no=no+d; while(no!=0) { k=no%10; a[j]=k+48; j--; no=no/10; }int i=0; while(i<=9) { idc[i]=a[i]; if (i==3) idc[i]='0'; i++; }}//creating structure for vegetable struct veg { char name[20]; char id[10]; int qty_available; }; int main() { //Getting details of vegetables available int n=0,i=0,p; printf("Enter no.of vegetables to be appended\n"); scanf("%d",&n); p=n; struct veg v[n]; while(n>0) { printf("Enter name and amount of vegetable in kg:\n"); scanf("%s",v[i].name); scanf("%d",&v[i].qty_available); printf("Unique id of vegetable is:"); veggieid(i); printf("%s\n",idc);
strcpy(v[i].id,idc); n--; i++; }//purchasing vegetable int choice = 0; char namepur[10]; while(choice==0) { printf("Enter name of vegetable u want to purchase:\n"); scanf("%s",namepur); int l=0; while (l<=p) { //Checking the match for name of vegetable with database available if (!strcmp(namepur,v[l].name)) { int qtypur=0; printf("Enter amount of vegetable to be purchased:"); scanf("%d",&qtypur); int q,w; q=qtypur; w=v[l].qty_available; //If purchased amount is within limit if(q<=w) { printf("Have a fresh day with the veggie\n"); w=w-q; v[l].qty_available=w; printf("The name of veggie: %s|The id of veggie is:%s\n The new quantity is %d\n",v[l].name,v[l].id,v[l].qty_available); //If purchased amount is higher than that of available } else { printf("Sufficient quantity not available\n"); } } l++; }//If we want to purchase another vegetable printf("If u want to purchase an item :Enter 0 else Enter 1\n"); scanf("%d",&choice); }return 0; }
