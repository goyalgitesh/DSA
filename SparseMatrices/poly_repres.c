#include <stdio.h>
#include <malloc.h>

struct term
{
    int coeff;
    int exp;
};
struct poly
{
    int n;
    struct term *t;
};

int main() {
    struct poly p;
    int i;
    printf("Enter no. of non-zero terms");
    scanf("%d",&p.n);
    p.t = (struct term *)malloc(sizeof(struct term[p.n]));
    printf("\nEnter polynomial terms\n");
    for(i =0; i<p.n; i++) {
        printf("Term no. %d\n",i+1);
        scanf("%d%d",&p.t[i].coeff,&p.t[i].exp);
    }
    printf("\nPolynomial is....\n");
    for (i =0; i<p.n; i++) {
        
    }


}
