#include<iostream>
using namespace std;
int main()
{
int a[]={2,4,6,7,8,9};
int n=9,l,h,m,mid;
l=0;
h=(sizeof(a)/ sizeof(a[0]))-1;
while(l<=h)
{
� �m=l+h/2;
� �if(a[m]==n)
� �{
� � break;
� �}
� else if(a[m]<n)
� {
� � l=m+1; �
� }
� else
� {
� �h=m-1;
� �}
}
cout<<"Number found at index: "<<m<<endl;
� �return 0;
}
OUTPUT:-
 
QUES 7 - Write a program to calculate GCD of two numbers (i) with recursion (ii) without recursion. (i)with recursion.
=>i) #include <iostream>
using namespace std;
int gcd(int a,int b)
{
� � if(a == 0 || b == 0)
� � return 0;
� � if (a>b)
� � return gcd(a-b,b);
� � return gcd(a,b-a);
}
int main()�
{
� � int a,b;
� � cout<<"Enter two numbers: ";
� � cin>>a>>b;
� � cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
� � return 0;
}

