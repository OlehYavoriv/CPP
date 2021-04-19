#include <iostream>
#include <string>
using namespace std;
void doprint(){
  string str;
  str = "s1,=open((argv[],O_WRONLY|O_CREAT|O_BINARY,0644);";
  cout<<"Your text :"<<str<<endl;
}
int first(){
  string str;
  str = "s1=open((argv[],O_WRONLY|O_CREATO|_BINARY,0644);";
  int index = 0;
  while (index!= string::npos)
  {
    string res = str.substr(index, str.find("|",index+1));
    if (res[0] == '|') res.erase(0, 1);
    if (res[res.size() - 1] == '|') res.erase(res.size() - 1);
    index=str.find("|", index+1);
    cout<<"Your result:"<<res<<endl;
  }
  return 0;
}
int main()
{
  doprint();
  string str;
  str = "s1=open((argv[],O_WRONLY|O_CREATO|_BINARY,0644);";
  cout<<"You need to delete index[8]:"<<str[8]<<endl;
  string del_val = str.erase(8,1);
  cout<<"Result without symbol '(':"<<del_val<<endl;
  string str1 = "4";
  cout<<"Add number '4': "<< str.insert(13,str1)<<endl;
  first();
   
}
