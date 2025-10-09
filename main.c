#include <stdio.h>
#include <ctype.h>

int getTwonums(){
      bool numCheck = True;
      char user_data1, user_data2;
      int N;
      int M;


      while (numCheck == True){
            printf("Enter numbers N and M (Example: 0 500 )");
            scanf(" %c %c", &user_data, &user_data2);
            if (isdigit(user_data1) && isdigit(user_data2)){
                  N = user_data1;
                  M = user_data2;
                  numCheck == False
            }
            else{
                  printf("Entered data must be numbers!");
            }
      }

      return N, M; 
}




int main(void){
      int n, m = getTwonums();
      printf("%i", n);
      printf("%i", m);
	return 0;
}