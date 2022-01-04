# Adding-Up-Two-Matrcices
In this repository , we are going to create a program file that you can create two optional matricies and add them up.

---Program Features
* Users are going to be able to set the sizes of matricies
* Program checks whether if the matricies meet the requirements, if not programs ask over and over untill requirements are met
* Users enter the values for matricies and program shows the created matricies after finishing the procces
* Program adds the matricies up and shows the result matrix
* Program asks users whether if they want to continue or close the program

---Program Source Code


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char boolean = 'Y' ;
	
	while(boolean=='Y')
	{
	//Take the sizes of matrixes from user
	//Check them if they meet the requirements
	int col_1,col_2,row_1,row_2,i,j;
	
	printf("Enter the row size of matrix_1  :");
	scanf("%d",&row_1);
	
	printf("Enter the column size of matrix_1 :");
	scanf("%d",&col_1);
	
	printf("Enter the row size of matrix_2  :");
	scanf("%d",&row_2);
	
	printf("Enter the column size of matrix_2 row :");
	scanf("%d",&col_2);
	
	/*
	
	if(col_1 == col_2 and row_1==row_2)
	{
		printf("The procces can be completed..");
	}
	
	*/
	
	while(col_1 != col_2 or row_1 != row_2)
	{
		printf("The size of matrixes muste be equal to each other.. \n");
		
	printf("Enter the row size of matrix_1  :");
	scanf("%d",&row_1);
	
	printf("Enter the column size of matrix_1 :");
	scanf("%d",&col_1);
	
	printf("Enter the row size of matrix_2  :");
	scanf("%d",&row_2);
	
	printf("Enter the column size of matrix_2 row :");
	scanf("%d",&col_2);
		
	}
	
	//Create the matricies
	int matrix_1[row_1][col_1] , matrix_2[row_2][col_2] , sum_matrix[row_1][col_1];
	
	//Define the matrix_1
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			printf("Enter the value of matrix_1[%d][%d]",i,j);
			scanf("%d",&matrix_1[i][j]);
		}
	}
	
	//Display the matrix_1
	
	printf("The matrix_1 is : \n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			printf(" %d |",matrix_1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		{
			printf("Enter the value of matrix_2[%d][%d]",i,j);
			scanf("%d",&matrix_2[i][j]);
		}
	}
	
	//Display the matrix_2
	
	printf("The matrix_2 is : \n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			printf(" %d |",matrix_2[i][j]);
		}
		printf("\n");
	}
	
	//Adding two matricies up 
	
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
		}
	}
	
	//Show thw result
	
	printf("The sum of two matrix is : \n");
	
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		{
			printf(" %d |",sum_matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("Would you like to continue to program ?(Y/N)");
	scanf(" %c",&boolean);
	}
	
	printf("The program is going to closed...");
	
	
	return 0;
}
