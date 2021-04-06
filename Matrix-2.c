#include<stdio.h>
int main (){

    int A[3][3] ,row ,col , sum =0, upper = 0, lower =0 ;


    printf("Enter A Matrix");

      // input A Matrix
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
             scanf("%d",&A[row][col]);
        }

    }

      // sum of the element diagona, upper lower find out
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            if(row==col)
            {
                sum = sum + A[row][col];
            }

             if(row<col)
            {
                upper = upper + A[row][col];
            }

             if(row>col)
            {
                lower= lower + A[row][col];
            }
        }



    }

              printf("\nThe sum of diagonal element : %d ",sum);
               printf("\nThe sum of upper element : %d ",upper);
              printf("\n The sum of lower element  : %d ",lower);

    return 0;
}

