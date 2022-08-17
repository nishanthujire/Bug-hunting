#include<iostream>
using namespace std;
bool isHappy(int n) {
         int num = n;
        bool ans;
        int sum=0;


       while(num == 1) {
            if(num==89)
            {
                return false;
            }

            while(num != 0){
                int rem = num%10;
                sum = sum + (rem*rem);
                num = num/10;
            }
         num = sum;
           sum=0;
        }

           return true;
    }
int main (){
    int num = 19;
    bool res = isHappy(num,1);
    if(res){
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 1;
}
