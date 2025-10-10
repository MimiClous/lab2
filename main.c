#include <stdio.h>
int divs(int num);
void PerfectNums(int current, int end);

int main(void) {
    int n, m;
    
    printf("Enter numbers N and M (example '0 500')\n");
    int v = scanf("%d %d", &n, &m);
    
    if (v != 2 || n < 0 || m < 0 || n > m) {
        printf("Error: N and M must be natural numbers and N <= M\n");
        return 1;
    }

    printf("Perfect numbers in range [%d, %d]\n", n, m);
    PerfectNums(n, m);
    
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
void PerfectNums(int current, int end) {
    if (current > end) {
        return;
    }
    
    if (current > 0 && divs(current) == current) {
        printf("%d\n", current);
    }
    
    PerfectNums(current + 1, end);
}
