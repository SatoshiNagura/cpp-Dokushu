//練習問題2.6の回答
#include <iostream>
#include <string>

int main(){
  int i;
  std::string s;
  std::cin >> i;
  std::getline(std::cin, s);
  std::cout << i << "," << s << std::endl;
  std::cout << "空白の行が入力されるまで出力を続けます\n";
  while(s != ""){
    std::cin >> s;
    std::cout << s <<std::endl;
  }
}
