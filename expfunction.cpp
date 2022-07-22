#include <iostream>
using namespace std;

//function declaration

int func_expo( int base, int exponent){
    int result =1;
    for (int i =0, i<5, i++){
        result = result*base;
    }
    return result;
}
int main(){
    //declaration of variables to repo 6^5
    int sixexpfive;
    sixepfive = func_expo (6,5)
    cout<<"The 6^5 is "<< sixexpfive <<endl;
    return 0;
}