#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
        complex(void);

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
        }
};

complex::complex(void){
    a=10;
    b=20;
}

int main(){
    complex c;
    c.printNumber();

    return 0;
}