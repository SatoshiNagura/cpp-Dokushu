#include <stdio.h>


//A列車の時刻表をすべて計算するプログラム
int Train_A(int Hour){
}

//B1から発射する列車の移動時間
void RB_time(int *Rail, int i){
  switch(i){
    case 0:
      *(Rail + 1) = *Rail + 4
      break;
    case 1:
      *(Rail + 1) = *Rail + 3;
      break;
    case 2:
      *(Rail + 1) = *Rail + 3;
      break;
    case 3:
      *(Rail + 1) = *Rail + 2;
      break;
  }
}
//B列車の上りの時刻表をすべて計算するプログラム
int Train_Bup(int *Hour, char *Staition, int *B_array){
  int i = 0;//整理番号を初期化し，定義

  //23時のみB1からの発車がなくなる
  if(*Hour == 23){
  }
  //22時までの発車時刻
  else{
    switch (Station) {
      case "B1":
        *B_array = 0;
        for(i = 1; i < 10; i++){
          B_array++;
          *B_array = *(B_array - 1) + 6;
        }
        break;
      case "B2":
        *B_array = 4;
        for(i = 1; i < 10; i++){
          B_array++;
          *B_array = *(B_array - 1) + 6;
        }
        break;
      case "B3":
        *B_array = 1;
        for(i = 1; i < 10; i++){
          B_array++;
          *B_array = *(B_array - 1) + 6;
        }
        break;
      case "B4":
        *B_array = 4;
        for(i = 1; i < 10; i++){
          B_array++;
          *B_array = *(B_array - 1) + 6;
        }
        break;
        case "B5":
        *B_array = 0;
        for(i = 1; i < 10; i++){
          B_array++;
          *B_array = *(B_array - 1) + 6;
        }
        break;
    }
  }
}
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

int main(void){
  int hour = 05;//時刻を5時で初期化して定義
  char rail, station[4], dir;//路線名，駅名，方向を定義

  //A,Bの上り下りの時刻表を定義
  int A_up[12][12], A_down[13][12];
  int B_up[5][10], B_down[5][10];

  //空白区切りされたコンソール入力
  scanf("%c %s %c %d", &rail, staiton, &dir, &hour);

  if(rail == "A"){
  }
  if
}
