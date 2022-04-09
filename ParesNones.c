#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc , char** argv){
    
    int number = atoi(argv[1]);

    
        while (number<=10){
           number = number+1;
            
            for (number ;number <= 5; number = number + 1){
                if(number%2==0){
                    printf("Tienes un numero par:%i\n",number);
                }else{
                    printf("Tienes un numero non :%i\n",number);
                };
            };
        }

        
    return 0;
}

   
    
