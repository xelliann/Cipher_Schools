/*in this video we learned about array and indexing in array, In an array indexng start from 0 so first element 
can be fetched by a[0] then a[1] and so on
*/

#include <iostream>
using namespace std;

int main(){
    int a[10];
    cout<<"Enter values for array"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"Value in serial order"<<endl;
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Values in reverse order"<<endl;
    
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }

    return 0;
}