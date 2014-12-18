#include <iostream>

using namespace std;

int pInteger(int test);

int main()
{
//   cout << "Hello World" << endl; 
   int output = pInteger(10);
    
  cout <<output<<endl;
   return 0;
}

int pInteger(int test){
    int result = 0;
    while(test){
        result+=test%2;
        test =test>>1;
    }
    
    /* the method with bit and bit difference.
    int result = 0;
    while(test){
        test=test&(test-1);
        result+=1;
    }*/
    return result;
}

