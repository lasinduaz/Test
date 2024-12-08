#include <iostream>
using namespace std;

  //fuction 
  int transnumber(int x){

      //break down the dights
        int y;
        y = x/10;
        y= y/10 ;//remove last digit
        
        cout << "This is y outout :"<< y ;
        y=y+1;
        
  return 0; 
}


int main(){

  int x = 999;
    
    //Callling into function 
    transnumber(x);
  return 0;
}
