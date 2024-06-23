#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    for(int i = 1;i<n;i++){
        key = arr[i];
        int j = i-1;

        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}