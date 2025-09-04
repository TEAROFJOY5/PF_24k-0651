#include <iostream>
using namespace std;
int addNumbers(int a, int b);
int findMaximum(int a, int b);
bool isEven(int a);

int main()
{
   int x,y;
   cout<<"Enter first number"<<endl;
   cin>>x;
   cout<<"Enter second number"<<endl;
   cin>>y;
   int sum = addNumbers(x,y);
   cout<<"The sum of "<<x<<"and "<<"is "<<sum<<endl;
   int max = findMaximum(x,y);
   cout<<"The maximum of these number is "<<max<<endl;
   bool even1 = isEven(x);
   bool even2 = isEven(y);
   if(even1 == true)
    cout<<x<<" is an even number"<<endl;
    else
     cout<<x<<" is not an even number"<<endl;
   if(even2 == true)
    cout<<y<<" is an even number"<<endl;
   else
     cout<<y<<" is not an even number"<<endl;
    
}
int addNumbers(int a, int b)
{
    return a + b;
}
int findMaximum(int a, int b)
{
    if(a>b)
      return a;
    else 
      return b;
}
bool isEven(int a)
{
    if(a % 2 == 0)
     return true;
    else
     return false;
}
