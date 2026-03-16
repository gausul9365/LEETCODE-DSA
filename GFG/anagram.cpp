#include <iostream>
#include <vector>

using namespace std;



bool areAnagrams(string& s1, string& s2) {
  
  vector <int>  freq(26,0);

  for(auto it : s1){
    freq[it - 'a']++;
  }

  for(auto it : s2){
    freq[it - 'a']--;
  }

  for(auto count : freq){
    if(count != 0){
      return false;
    }
  }
  return true;

}

int main() {

string s1 = "geeks";
string s2 = "keesg";
 cout<<areAnagrams(s1 , s2);


  return 0;

}

