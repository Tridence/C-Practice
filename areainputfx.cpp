//area of a rectangle
#include <iostream>
using namespace std;

//function prototype
int calculate_area(int length, int width);


int main(){
    //function declaration
    int length, width, area;

    //request input
    cout<<"Enter the length "<<endl;
    cin>>length;
    cout<< "Enter the width"<<endl;
    cin>>width;

    //calculate area
   area = calculate_area(length, width);

    //output
    cout<< "The area of the rectangle is: "<<endl<<area;

    return 0;
}

int calculate_area(int length, int width){
    return(length * width);
}
