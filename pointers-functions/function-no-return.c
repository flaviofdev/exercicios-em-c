#include <stdio.h>
#include <stdlib.h>

//function that draws a border
void drawBorder(){
    printf("|--------------------------------|\n");
}

int main(){

    drawBorder();
    p("Hello World!\n");
    drawBorder();

    return 0;
}