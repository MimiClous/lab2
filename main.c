#include <stdio.h>


int divs(int num);

int main(void){
      int n, m;



      printf("Enter numbers N and M (example '0 500')\n");
      int i_n = scanf(" %d %d", &n, &m);


      if (i_n != 2 || m <= n ){
            printf("Entered n and m must be numbers and natural\n");
            return 1;
      }

      int size = m - n + 1;
      int numbers[size];

      for (int i = 0; i < size; i++) {
            numbers[i] = n + i;
      }
      for (int i = 0; i < size; i++) {
            int res = divs(numbers[i]);
            if (res == numbers[i]) {
                  printf("%d\n", numbers[i]);
            }
      } 
      
      
      
    
    return 0;
      
}

int divs(int num){
    if (num <= 1) return 0;
    
    int sum_divs = 0;


    for (int i = 1; i <= num / 2; i++){
        if (num % i == 0){
            sum_divs += i;
        }
    }

    return sum_divs;
}