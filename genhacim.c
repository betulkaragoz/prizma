#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679

int main()
{
	
	double g,a,h,aci,v;
	
	printf("Kac gen veriyim ablama ");	scanf("%lf",&g);
	printf("Kenara kac verem abla ");	scanf("%lf",&a);
	printf("Yukseklige kac koyam abla ");	scanf("%lf",&h);
	
	aci = (180-360/g)/2;
	aci *= PI/180;
	
	v = h*g*a*a*tan(aci)/4;
	
	printf("\nHacim: %.2lf", v);	
	return 0;	
}
