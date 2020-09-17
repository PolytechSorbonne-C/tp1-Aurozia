/* équation qui permet de déterminer si un point de coordonnées (x,y) 
est dans le cercle de centre (0,0) et de rayon 1 : (x-0)²+(y-0)² = 1² 
<=> x²+y² = 1 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int N;
    int p = 0;
    double x,y,r,pi;
    int test;

    srand(time(NULL));

    for(i=0;i<N;i++)
    {	
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        r = (x*x)+(y*y);
	    if (r <= 1)
            p = p+1;
    }
    pi = 4.0*p*(1./N);
    printf("Approx de pi = %g\n",pi);
    return 0;     
}