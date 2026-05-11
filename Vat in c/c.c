#include<stdio.h>
#include<conio.h>

void check_special_char(char c1){
    int num1, num2; char ch,ch2,ch3;
    for(int i=65 ; i<=90 ; i++){
       num1 = i+32;
       num2 = 65 - 17;    
       ch = i;
       ch2 = num1;
       ch3 = num2;
        if(c1 == ch){
            printf("Sorry you entered alphbate");
            break;
        }
        else if(c1 == ch2){
           printf("Sorry you entered alphabet");
           break; 
        }
        else if(c1 == ch3){
           printf("Sorry you entered alphabet number");
           break;
        }
        else{
            if(i > 89){
            printf("Special character");
            break;
            }
        }
    }

} 

char ch;

void printGvar(){
    for(int i =65 ; i<=90 ; i++){
       printf("%c ",ch = i);
    }
}

void printLvar(){
    for(int i =65-17  ; i<58; i++)
    {
        printf("%c ",ch = i);
    }
}


int main(){
    
    char  c1,c2;

    printf("Enter your charachter: ");
    scanf("%c",&c1);

    printf("Your character is %c \n",c1);
    
    check_special_char(c1);
    // printLvar();
}

