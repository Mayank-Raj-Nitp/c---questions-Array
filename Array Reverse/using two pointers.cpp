#include <iostream>
#include <vector>
using namespace std;

void reverse_array(vector<int>&arr){
    int n = arr.size();
    
    vector<int>temp(n);
    
    for(int i=0; i<n; i++){
        temp[i] = arr[n-i-1];
    }
    
    for(int i =0; i<n; i++){
        arr[i]=temp[i];
    }
    
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main() {

    vector<int> arr={1,2,3,4,5,6};
    int n = arr.size();
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Now reverse order"<<endl;
    reverse_array(arr);
    
    return 0;
}
