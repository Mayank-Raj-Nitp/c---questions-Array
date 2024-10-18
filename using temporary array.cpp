#include <iostream>
using namespace std;

int main() {
    int arr [5] = {1,2,3,4,5};
    
    int temp[5];
    
    for(int i =0 ; i<5;i++){
        temp[i]=arr[4-i];
        
    }
    cout<<"Temp array created "<<endl;
    for (int i=0 ; i<5;i++){
        arr[i] = temp[i];
    }

    cout<<"Printing array"<<endl;
    
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
