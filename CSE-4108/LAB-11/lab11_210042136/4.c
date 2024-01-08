#include <stdio.h>
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    printf("LCM = %d\n", (a * b) / gcd(a, b));

    return 0;
}


