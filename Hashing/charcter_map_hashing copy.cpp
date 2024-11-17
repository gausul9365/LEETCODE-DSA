// in case of character just change the data type of key in map , remember in this time it will not converted charater into assci value it stoer as it is 
#include <iostream>
#include <map>

using namespace std;

int main() {

 string str = "hfgbauahsfdABABABABAFFGG";
 int  n = str.size();
 map <char, int>mpp;
 for(int i=0; i<n; i++){
  mpp[str[i]]++;
 }
  char ch;
  cin>>ch;
  cout<<mpp[ch]<<endl;

  return 0;
}

