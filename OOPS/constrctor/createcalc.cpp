#include<iostream>
using namespace std;

int main(){
    float x,y;
    char op;
    char ch='y';
    do{
        
    cout<<"Enter your first and last no:-"<<endl;
    cin>>x>>y;
    cout<<"Enter your operator:-"<<endl;
    cin>>op;
    
    
    switch(op){
        case '+':
            cout<<"Answer is:-"<<x+y;
            break;
        case '-':
            cout<<"Answer is:-"<<x-y;
            break;
        case '*':
            cout<<"Answer is:-"<<x*y;
            break;
        case '/':
            cout<<"Answer is:-"<<x/y;
            break;
    }
    cout<<" Do another program:-"<<endl;
    cin>>ch;
    }while(ch==y);
    
    

    return 0;
}