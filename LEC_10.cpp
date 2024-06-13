/* in this class first we discussed about increment operator that is used to update our value in for loop
PRE INCREMENT  --> ++i (here first value is incremented then displayed)
POST INCREMENT --> i++ (here first value is printed then after that it is incremented)
*/

#include <iostream>
using namespace std;

int main(){
    // int i,j,k;
    // i=0;
    // j=0;
    // k=0;

    // cout<<i<<" "<<j<<" "<<k<<endl;
    // j = i++;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // k = ++i;
    // cout<<i<<" "<<j<<" "<<k<<endl;
     
     int i;
     for(i = 1;i<=100;i++){
        cout<<i<<" ";
     }

    return 0;
}