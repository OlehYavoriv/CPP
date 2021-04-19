#include <iostream>
using namespace std;
int lcd(int a,int b);
int main()
{
    int a,b,c;
        cout<<"Input number a = ";
        cin>>a;
        cout<<"Input number b = ";
        cin>>b;
        cout<<"Input number c = ";
        cin>>c;
    cout << lcd(a,b)<< endl;
    cout<<"Result lcd :"<<lcd(lcd(a,b),c);
    return 0;
}
int lcd(int a,int b)
{
    while(a!=b)
        if(a>b)
        a-=b;
    else
        b-=a;
    return a;
}
