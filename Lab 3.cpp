#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");

    const int size = 6;
    int arr[size]{10,-4,12,56,-4,-89};
    

    
    cout<<"Всі елементи масиву"<<endl;
    for (int i=0; i < size; i++) {
        cout<<arr[i]<<endl;
    }
    
    cout<<"\n\n\n\n\n";

    int counts = 0;
    for (int a=0; a<size-1;a++) {
        if (arr[a]>0 && arr[a+1]<0 || arr[a]<0 && arr[a+1]>0){
            counts++;
            }
        }
    cout<<counts;}
