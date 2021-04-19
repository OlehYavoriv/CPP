#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Input number: ";
    cin >> n;
    int arr[n][n];
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=i+1;
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            arr[i][j]=(j+1)+i;

        }
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(n-i<n){
                if(n-i<n-1){
                    int k=n-i;
                    while(k!=n){
                        arr[i][k]=0;
                        k++;
                    }    
                }
                else{
                    arr[i][n-i]=0;
                }
            }
        }
    }
    int i = n;
    while(i!=0){
        --i;
        for(int j=0;j<n;++j){
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }
}
  
