
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

int main () {
  
  int t;
  std::cin >> t;
  
  for(int i=0;i<t;i++){
  std::string word,temp;
  std::cin >> word;
  temp=word;
  std::next_permutation(word.begin(),word.end());
  if(temp>=word){
        std::cout << "no answer" << '\n';
      }else{
  std::cout << word << '\n';}
  }
  return 0;
}