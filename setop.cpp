#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
// Function to return the union of two arrays

vector<int> intersect(int arr1[], int arr2[], int n, int m)
{

    set<int> s;
    set<int> s1;
    vector<int>v;

    // Remove the duplicates from arr1[]

    for (int i = 0; i < n; i++) {

        s.insert(arr1[i]);

    }
 

    // Remove duplicates from arr2[]

    for (int i = 0; i < m; i++) {

        s1.insert(arr2[i]);

    }
 for(int ele:s)
 {
 	for(int element:s1)
 	{
 		if(ele==element)
 		v.push_back(ele);
	 }
 }
   return v;
}
 
// Driver code

int main()
{

    int arr1[] = { 1, 2, 2, 2, 3 };

    int arr2[] = { 2, 3, 3, 4, 5, 5 };

    int n = sizeof(arr1) / sizeof(arr1[0]);

    int m = sizeof(arr2) / sizeof(arr2[0]);
 

    // Function call

    vector<int> uni = intersect(arr1, arr2, n, m);

    for (int i : uni) {

        cout << i << " ";

    }
 

    return 0;
}
