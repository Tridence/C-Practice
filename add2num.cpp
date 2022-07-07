#include <iostream>
using namespace std;


//function declalration
int addition (int num1, int num2){

    return (num1+num2);
}

int main()
{
//decalre variables
int n1 =4; int n2=10; int sum;

//calling the function
sum= addition(n1,n2);

//display answer
cout<< "the sum of the two variables is: " << endl<< sum;

return 0;
}


