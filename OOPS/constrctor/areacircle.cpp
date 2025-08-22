#include<iostream>
using namespace std;

class circle{

    public:
        int r;
        float area;
        circle(){
            cin>>r;
            area=3.14*r*r;
        }
        void areaOfCircle(){
            cout<<"Area of circle is:-"<<area<<endl;
            
        }
};

int main(){
    circle c1;
    
    c1.areaOfCircle();

    return 0;
}