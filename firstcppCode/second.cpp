#include <iostream>
using namespace std;
int calculateSquare(int a);
int calculateCube(int a);
void displayTable(int a);

int main()
{
  int x;
  cout<<"Enter any number\n";
  cin>>x;
  cout<<"The square of "<<x<<" is "<<calculateSquare(x)<<endl;
  cout<<"The cube of "<<x<<" is "<<calculateCube(x)<<endl;
  displayTable(x);
  
  
   
}
int calculateSquare(int a)
{
    return a*a;
}
    
int calculateCube(int a)
{
    return a*a*a;
}
void displayTable(int a)
{
    for(int i=1; i<=10; i++)
    {
        cout<<a<<" * "<<i<<" = "<<(a*i)<<endl;
    }
}
