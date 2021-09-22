#include <stdio.h>

long sum(int a){
    int result = 0;
    int j;
    for(j = 1;j <= a;j++){
    	result += j;
    }
    return result;
}

int main(){
    int a = 100;
    long result = sum(a);
    printf("add from 1 to 100: %ld\n",result);
    return 0;
}


