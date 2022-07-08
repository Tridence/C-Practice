//area of a triangle
#include <iostream>
using namespace std;

int main(){
    //function declaration
    int area, base, height;

    //request input
    cout<<"Enter the base "<<endl;
    cin>>base;
    cout<< "Enter the height"<<endl;
    cin>>height;

    //calculate area
    area = 0.5*base*height;

    //output
    cout << "The area of the Triangle is: "<<endl<< area;

    return 0;
}