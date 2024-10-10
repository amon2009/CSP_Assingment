#include <stdio.h>
int i;
int usr;
int main(void) { 
    printf("Give me a number\n");
    scanf("%d", &usr);
   // loop that count to 50 
    for(i=1;i<=usr;i++){
      
      // replace #s divisible by 3 and 5 with "Fizzbuzz" 
      if(i%3==0 && i%5==0){
        printf("FizzBuzz\n");
       //replace #s divisible by 3 with "Fizz"
      }else if (i%3==0){
          printf("Fizz\n");
        //replace #s divisible by 5 with "Buzz"
      } else if (i%5==0){
        printf("Buzz\n");
      
      }else{
        //print the number
        printf("%d\n", i);
      }
    }
    return 0; 
}