//練習問題4.5の回答
#include <iostream>
#include "sample4-5_sub.cpp"

extern int value;
void shout();

int main(){
  int i;
  for(i = 0; i < 3; i++){
    shout();
    value++;
  }
}
/*
1.プログラムに記述されているヘッダーファイルなどを展開するプリプロセッサーを行う。
  その後，すべてのソースファイルをオブジェクトファイルに変換するコンパイルを行う。
  最後に，全てのオブジェクトファイルとライブラリを結合するリンクを行い，実行ファイルを作成する。
2.記述済み
*/
