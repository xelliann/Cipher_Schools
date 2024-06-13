/*  in this lecture we are discussing about while loops
    then we implemented while loops
*/

#include <iostream>
using namespace std;

int main(){

    int a = 1;              //initialization
    while(a<=10){           //conditions
        cout<<a<<" ";
        a++;                //updation
    }
    cout<<endl;
    int c;
    for(int i=0;i<100;i++){
        cin>>c;
        if( c == 10){
            cout<<"U found out"<<endl;
            break;
        }
    }

    return 0;
}