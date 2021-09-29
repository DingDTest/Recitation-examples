#include <stdio.h>

long sum(int a){
    int result = 0;
    int j;
    for(j = 1;j <= a;j++){
    	result += j;
    }
    return result;
}

void test1(){
    int a = 100;
    long result = sum(a);
    printf("add from 1 to 100: %ld\n",result);
}

void test2(){
    char *p;
    *p = 1;
    return;
}

int main(){
    test2();
    return 0;
}


