/*
In this lecture we learned about conditional statements we basically discussed about if-else and switch case 
*/

#include <iostream>
using namespace std;

int main(){


/*  ***Basic Conditional statments*** 
    float a,b;
    cout<<"Enter 2 floating point values: "<<endl;
    cin>>a>>b;

    if(a>0.1 && b>a){           //this is an example of logical 'and'
        cout<<"This is 'if' block --> Condition in if block is true"<<endl;
    }
    else{
        cout<<"This is 'else' block --> The statement in if block is false"<<endl;
    }

    if(a>0.1 || b>a){           //this is an example of logical 'or'
        cout<<"This is 'if' block --> Condition in if block is true"<<endl;
    }
    else{
        cout<<"This is 'else' block --> The statement in if block is false"<<endl;
    }
*/

/*Student Marks conditional statements
    int marks;
    cout<<"Enter Student Marks"<<endl;
    cin>>marks;

    if(marks>90){
        cout<<"O Grade"<<endl;
    }
    else if(marks>80){
        cout<<"A Grade"<<endl;
    }
    else if(marks>70){
        cout<<"B Grade"<<endl;
    }
    else{
        cout<<"PASS"<<endl;

    }
*/

/* Using Conditions on 4 inputs

int a,b,c,d;
cout<<"Enter 4 inputs namely a,b,c,d"<<endl;
cin>>a>>b>>c>>d;

if(a>b && c>d){
    cout<<"Haha"<<endl;
}
else if(a>b && c<d){
    cout<<"HEHE"<<endl;
}
else{
    cout<<"HOHO"<<endl;
}
*/

    int a;
    cout<<"Enter a value a"<<endl;
    cin>>a;

    switch(a)
    {
        case 1:
        cout<<"Value of a is 1"<<endl;
        break;
        case 2:
        cout<<"Value of a is 2"<<endl;
        break;
        case 3:
        cout<<"Value of a is 3"<<endl;
        break;
        case 4:
        cout<<"Value of a is 4"<<endl;
        break;

        default:
        cout<<"Value of a is"<<" "<<a<<endl;
        break;
    }

    return 0;
}