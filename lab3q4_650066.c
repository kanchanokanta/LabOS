#include <stdio.h>

int main() {
    int a = 1;
    int n = 0;
    float sum = 0;
    while(a>0){
        printf("Enter a number : ");
        scanf("%d", &a);
        if(a<0){
            printf("You enter a negative number. Goodbye.");
            break;
        }else if(a==0){
            printf("You enter a zero number. Goodbye.");
            break;
        }
        sum += a;
        printf("Sumation = %0.2f\n",sum);
        n++;
        printf("Average = %0.2f\n", sum/n);
    }
    
}

	
