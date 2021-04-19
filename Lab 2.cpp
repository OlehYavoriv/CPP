
#include <iostream>
using namespace std;

int main()
{
double res = 1, a;
cout << "Input number (1.1 - 1.5):";
cin >> a;
if (a > 1 && a <= 1.5)
{
  for(int i=2; ; i++) {
  res = 1 + 1.0/i ;
  
  if (res < a){cout << "Result:" << i; break;}
  }
} 
else
{
  cout << "Please input number (1 - 1.5)!";
}
cout << res;
}
