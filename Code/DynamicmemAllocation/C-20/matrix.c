#include <stdio.h>
#include <stdlib.h>

/**
 * take rows and cols from the input
 * create a matrix that shows a multiplication table
 * 2 * 3
 * 1 2 3
 * 2 4 6
 */
void buildMatrix(int **matrix, int, int);
void free_matrix(int **matrix, int);


int main(int argc, char** argv)
{
  int row;
  row = atoi( argv[1]);
  int col;
  col = atoi( argv[2]);
  
  int **matrix;

  // this is allocating the rows
  matrix = malloc(row * sizeof(int *));
  if (!matrix)
    return (-1);
  
  // we want to allocate the size for each row
  for (int i = 0; i < row; i++)
  {
    matrix[i] = malloc(sizeof(int) * col);
    if (!(matrix[i]))
     {
       free_matrix(matrix, row);
       return (-1);
     }
  }

  printf("row: %d, col %d\n", row, col);
  buildMatrix(matrix, row, col);
  //  printMatrix(matrix, row, col);

  free_matrix(matrix, row);
  return (0);
}

void buildMatrix(int **matrix, int row, int col)
{
  // the first loop used for iterating through the row
  /**
   * 1 2 3
   * 2 3 4
   * i = 0, j = 0, j = 1, j = 2
   * i = 1, j = 0, j = 1, j = 2
   */
  for (int i = 0; i < row; i++)
    {
    // for each row on the cols
      for (int j = 0; j < col; j++)
	{
	  matrix[i][j] = (i + 1) * (j + 1);
	  printf("%d ", matrix[i][j]);
	}
      printf("\n");
    }
}

void free_matrix(int **matrix, int row)
{
  for (int i = 0; i < row; i++)
    free(matrix[i]);

  free(matrix);
}
