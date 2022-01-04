#include <stdlib.h>
#include <stdio.h>

//Create two matrixes , size of the matrix will be defined by user
//If the conditions are met print the sum of two matrixes out
//Ask user if he/she wants to finish program

int main()
{
	int row_1 ,col_1,row_2,col_2,row_3,col_3;
	int i,j;
	int boolean ;
	
	printf("Enter the row size of first matrix :");
	scanf("%d",&row_1);
	
	printf("Enter the column size of first matrix :");
	scanf("%d",&col_1);
	
	int matrix_1[row_1][col_1];
	
	printf("Enter the row size of second matrix :");
	scanf("%d",&row_2);
	
	printf("Enter the column size of second matrix :");
	scanf("%d",&col_2);
	
	row_3=row_2;
	col_3=col_2;
	
	int matrix_2[row_2][col_2];
	
	int sum_matrix[row_3][col_3];
	
	if (row_1 == row_2 && col_1 == col_2)
	{
		boolean = 1;
	}
	
	else
	{
		printf("Matrixes must be equal to each other...");
	}
	
	if(boolean)
	{
	
		for(i=0;i<row_1;i++)
		{
			for(j=0;j<col_1;j++)
			{
				printf("Enter the value for matrix_1[%d][%d] ",i,j);
				scanf("%d",&matrix_1[i][j]);
			}
			j=0;
		}
		i=0;
		j=0;
		
		for(i=0;i<row_2;i++)
		{
			for(j=0;j<col_2;j++)
			{
				printf("Enter the values for matrix_2[%d][%d]",i,j);
				scanf("%d",&matrix_2[i][j]);
			}
			j=0;
		}
		i=0;
		j=0;
	}
	
	
	
	for(i=0;i<row_3;i++)
	{
		for(j=0;j<col_3;j++)
		{
			sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
		}
	
	}
	
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf(" %d ",sum_matrix[i][j]);
		}
	}

		
	return 0;
}
