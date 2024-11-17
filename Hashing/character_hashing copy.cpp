#include <iostream>

using namespace std;

int main() {

 string str = "asdGGGhffiuhaaaiGef";

// precompute
 int hash_small[26] = {0};       //yha pe hash ka size 26 diya gya hai jo sirf alphabet 26 character store karega ya to captial 26 ya to small 26 alphabet character store karega 
 for(int i =0; i<str.size(); i++){
  hash_small[str[i] - 'a'] +=1;        //tha small a se ghataya gya hai to sirf small charcter ka count bataega 
 }

 // aagr captial letter ka krna hai to 'A' se minus krenge
 int hash_capital[26] = {0};  
 for(int i =0; i<str.size(); i++){
  hash_capital[str[i] - 'A'] +=1;        //yha capital a se ghataya gya hai to sirf capital charcter ka count bataega 
 }

//## agr hm chahte hai upr ka dono loop na likhna ek me kaam ho jaaye to ye wala kaam kr sktehai 

int hash_whole[256] = {0};  
for(int i =0; i<str.size(); i++){
  hash_whole[str[i]] +=1;       //yha pe small aur capital dono le skte hai
 }




 
  char ch;
  cin>>ch;
  // if(ch>=97 && ch<123){
  //   cout<<hash_small[ch - 'a']<<endl;
  // }
  // else if(ch>=65 && ch<91){
  //   cout<<hash_capital[ch - 'A']<<endl;
  // }
  cout<<hash_whole[ch]<<endl;
  
 

  return 0;

}

