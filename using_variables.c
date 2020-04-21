#include <stdio.h>
int main() {
    /* Variable names can use:  
    lowercase and uppercase letters (characters) and digits
    do not use special characters like @ # & " ...
    do not use accented characters like é è à ...
    do not start with a digit
    start only with a letter
    spaces are forbidden
     _ may be used instead of a space in the name of the variable
    YouCanUseUppercaseLettersBetweenWordsInsteadOfSpaces   */
    
    //Declaration
    int balance;//creating a variable containing integer values
    //Definition
    balance = 50;//assigning the value 50 into the balance variable
    printf("I have %d dollars in my account\n",balance);
    //expense of 40 dollars
    balance = balance - 40;
    printf("I have %d dollars in my account\n",balance);
    //add 20 dollars in my account
    balance = balance + 20;
    printf("I have %d dollars in my account\n",balance);
    //expense of 30 dollars
    balance = balance - 30;
    printf("I have %d dollar in my account\n",balance);
    return 0;
}
