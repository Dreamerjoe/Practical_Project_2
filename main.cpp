#include "sorting.h"

int sorted[10];

int main(){
    int data[10];
    for(int i=0;i<10;i++){
        cin>>data[i];
    }
    cout<<endl;

    merge_sort(data,0,9);

    for(int i=0;i<10;i++){
        cout << sorted[i]<< " ";
    }
    cout<<endl;
    
    return 0;
}