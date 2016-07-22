#include <stdio.h>
#include <stdlib.h>

#include "libmym.h"

int main( int argc, const char* argv[] )
{
   if(argc == 2) {
     double x=atof(argv[1]);
     double result=newtan(x);
     printf("%f\n",result);
   }
   else if (argc == 0)
   {
	double x = atof(-4);
	double result = newtan(x);
     printf("%f\n",result);
   }
   else {
     return 1;
   }
     return 0;
}
