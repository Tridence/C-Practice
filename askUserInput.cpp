#include <iostream>
using namespace std;

get_max(int num1, int num2){
    int maximum;
    if (num1>num2)
    maximum=num1;
    else
    maximum=num2;
    return maximum;
}

int main(){
int num1, num2, maximum;

cout << "Enter the first number \n";
cin>>num1;
cout << "Enter the Second number \n";
cin>>num2;
cout << "Enter the first number \n";

//finding the function
maximum = get_max(num1, num2 );

//output

cout <<"The maximum between "<<num1 << "and" num2 <<"is" <<maximum <<endl;

return 0;
}