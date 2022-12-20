#include<iostream>
using namespace std;
int factorial(int n )
{

    // base case
    if(n==0)
        return 1;
    

    // recursive relateion
    int smallerProblem =  factorial(n-1);
    int biggerProblem = n* smallerProblem;
    return biggerProblem;
}
int main()
{


int number =0;
cout<<" ENTER A NUMBER : ";
cin>>number;

int ans = factorial(number);

cout<<"factorial of number is this :"<<ans <<endl;

return 0;
}
