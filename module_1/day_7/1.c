#include <stdio.h>

typedef struct dim
{
    float l,w,h;
}d;

void print(float vol, float sa)
{
    printf("Volume of the box is: %.2f\n",vol);
    printf("Surface area of box is: %.2f\n",sa);
}

void dimension(d *dim)
{
    float vol=(dim->l*dim->w*dim->h);
    float sa=((2*dim->l*dim->w)+(2*dim->l*dim->h)+(2*dim->h*dim->w));
    print(vol,sa);
}

int main()
{
    d dim;
    printf("Enter Length Width and Height\n");
    scanf("%f%f%f",&dim.l,&dim.w,&dim.h);
    dimension(&dim);
    return 0;
}
