#include<iostream>
#include<math.h>
using namespace std;

class point{
    private:
        int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
        void setFirstPoint(void){
            cout<<"first point of x and Y is:- ("<<x<<" , "<<y<<")"<<endl;
        }
        void setSecondPoint(void){
            cout<<"second point of x and Y is:- ("<<x<<" , "<<y<<")"<<endl;
        }
        friend int distanceBtwnPoint(point &p1, point &p2);
};

int distanceBtwnPoint(point &p1, point &p2){
    int m = p2.x - p1.x;
    int n = p2.y - p1.y;
    cout<<"distance between two point is:-";
    return sqrt(m*m + n*n);
}

int main(){
    point p1(0,0);
    p1.setFirstPoint();

    point p2(5,0);
    p2.setSecondPoint();
    cout << distanceBtwnPoint(p1, p2);

    return 0;
}

