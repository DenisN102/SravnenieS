#include "stdlib.h"
#include "math.h"

#include <stdio.h>

int main()
{
      double c, r, t, a,
              k, d, w, z;


    printf("Vvedite radius kruga R:");
    scanf("%lf",&r);

    printf("Vvedite storonu treugolnika a:");
    scanf("%lf",&a);

    printf("Vvedite storonu kvadrata d:");
    scanf("%lf",&d);

    c= M_PI * pow(r,2);
    printf("S kruga = %lf:\n", c);
    w=sqrt(3);

    t=(pow(a,2) * w)/4;
    printf("S treugolnika = %lf:\n", t);

    k=pow(d,2);
    printf("S kvadata = %lf:\n", k);

  // z = (c > t)? ( (c > k)? c : k ) : ( (t > k)? t : k );

    z = (c > t)? c : t;
    z = (z > k)? z : k;

     printf("S max =:%lf", z);

    return 0;
}
