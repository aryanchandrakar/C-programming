/*
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i,a,b;
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++){
        if (i<0){printf("");}
        else if (i==1){printf("one\n");}
        else if (i==2){printf("two\n");}
        else if (i==3){printf("three\n");}
        else if (i==4){printf("four\n");}
        else if (i==5){printf("five\n");}
        else if (i==6){printf("six\n");}
        else if (i==7){printf("seven\n");}
        else if (i==8){printf("eight\n");}
        else if (i==9){printf("nine\n");}
        else if(i>9){
            if(i%2==0){printf("even\n");}
            else if(i%2!=0){printf("odd\n");}
        }
    } 
    return 0;
}
