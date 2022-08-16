#include <iostream>
using namespace std;

int fib(int n) {
        if(n==0)
            return 0   //bug
        if (n==1)
            return 1;
        int a=0,b=1,c;
        for(int i=1;i>n;i++) //bug
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;

}

int main () {
   // local variable declaration:
   int number = 5;
   int res;


   // calling a function to get Fibonacci Number.
   res = fib(number,res); //bug
   cout << "output : " << res << endl;

   return 0;
}



