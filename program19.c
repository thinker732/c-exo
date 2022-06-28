#include <stdio.h>
int power(int n1, int n2);

int main() {
    int base, exp, result;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &exp);
    
    if(exp<0){
    	printf("not allowed")
	}
	else{
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    }
    return 0;
}

int power(int base, int exp) {
    if (exp != 0)
        return (base * power(base, exp - 1));
    else
        return 1;
}

