/*In this class we learned about conditional statements--> A conditional statement is a statement which checks 
any given statement and checks if given conditons are true or false if condition is false then the code will not
execute if its true it will run we can use logical operators to check for multiple conditions

*/

#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Input A and B"<<endl;
    cin>>a>>b>>c>>d;
    //To check if a is greater than b 
    cout<<(a>b)<<endl;

    //using logical operators
    cout<<(a>b && c>d)<<endl;//logical and

    cout<<(a>b || c>d)<<endl;//logical or
    return 0;
}