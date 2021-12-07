#include <iostream>

using namespace std;

int main()
{
   int a[100],i=0,n;
   cout<<"Enter no. of elements in array : ";
   cin>>n;
   cout<<"Enter elements : ";
   for(i=0;i<n;i++)
   cin>>a[i];
   int *p=a;
   cout<<"You entered : ";
   for(i=0;i<n;i++,p++)
   cout<<*p<<' ';
   cout<<"\nHence we have used pointers to traverse and display array";
   return 0;
}
