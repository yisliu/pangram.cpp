#include <iostream>
#include <string>
using namespace std;

/*
for{
while(
check if str[i] is any letter in arr,
if it is push it in.
)
}
*/

int main() {
  string stro;
  string str;
  getline(cin, str);
  for(int i = 0; i<str.length()-1; i++){
    int temp = 0, b = 0;
    if(stro.length()==0){
      stro.push_back(str[i]);
    }
    while(temp<stro.length()-1){
      if(str[i]==stro[temp]){
        b = 1;
        break;
      }
      temp++;
      b = 0;
      continue;
    }
    if(b==0){
      stro.push_back(str[i]);
    }
  }
  if(stro.length()<25){
    cout<<"false";
    return 0;
  }
  cout<<"true "<<stro;
}