#include <iostream>
using namespace std;


//function declalration
int calculate_area (int length, int width){

    return (length * width);
}

int main()
{
//decalre variables
int length =4; int width=10; int area;

//calling the function
area= calculate_area(length, width);

//display answer
cout<< "the area of the rectangel is: " << endl<< area;

return 0;
}


