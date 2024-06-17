/*in this lecture we discussed about function and parametrs used in function also we learned
about the return type that is used in function like int ,float ,void we use void when we dont
need any value from the user we can only return one thing in a function but a function can have 
many return statements
*/
#include <iostream>
using namespace std;


string printstuff(){    //normal function
    cout<<"hello ";
    return "stuff";
}

int sum(int a,int b){   // parametrize function
    int c;
    c = a+b;
    return c;
}

int main(){
    cout<<printstuff()<<endl;
    cout<<sum(2,4);
    return 0;
}