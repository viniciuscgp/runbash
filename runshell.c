#include<stdio.h>
#include<stdlib.h>

void run();

int main()
{
    run();
    return 0;
}


void run() {
    char command[1255] = "";
    puts("Simple Shell - Type 'exit' to finish");
    puts("------------------------------------");    
    system("bash");
}
