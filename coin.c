#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
  int coin = 0,total_H = 0,total_T = 0;
  int i = 0;
  
  srand(time(NULL));

  for (i = 0;i < 3;i++){
  coin = (int)rand() %2;

  if (coin == 0){
    printf("Round %d: Tails\n",i);
    total_T++;
  }

  else{
    printf("Round %d: Heads\n",i);
    total_H++;
  }
  }

  printf("\nHeads: %d, Tails: %d\n",total_H,total_T);
  
  if (total_H >= total_T)
    printf("YOU WIN\n");
  
  else
    printf("YOU LOSE\n");
  
  return 0;
}
