#include <iostream>
#include <algorithm>

void reverse(std::string &str, int k){

  static int i = 0;

  if(k == str.length()){
    return;
  }
 
  reverse(str, k + 1);
 
  if(i <= k){
    std::swap(str[i++], str[k]);
  }

}
 
int main(){

  std::string str;
  std::cout << "Enter a string: ";
  getline(std::cin, str);
  std::cin.clear();
 
  reverse(str, 0);
  std::cout << "Reverse of the given string is " << str << "\n";
 
  return 0;

}