#include <stdio.h>
#include<math.h> 
int main()
{
	float x,y,z;
	scanf("%f %f",&x,&y);
    if(y==0)
       printf("除数不能为0\n");
    else
	{
	   z=x/y;
	   printf("商是:%f\n",z);
	}
	return 0;
}