/********************/
//|__________________|//
/*|        1        |*/
/*|      1 2 1       |*/
/*|    1 2 3 2 1     |*/
/*|  1 2 3 4 3 2 1   |*/
/*|1 2 3 4 5 4 3 2 1 |*/
/*|__________________|*/
//|                  |//
/********************/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=5-i||j>=5+i)
            {
              printf("  ");  
            }
            else if(j>5)
            {
                printf(" %d",(5+i)-j);
            }
            else
            {
                printf(" %d",j-(5-i));
            
            }
        }
           printf("\n");
    }
}
