#include <iostream>
#include <cassert>

double** create_matrix(int rows, int cols)
{
    double** mat = new double* [rows]; //Allocate rows.
    for (int i = 0; i < rows; ++i)
    {
        mat[i] = new double[cols](); //Allocate each row and zero initialize..
    }
    return mat;
}

void destroy_matrix(double** &mat, int rows)
{
    if (mat)
    {
        for (int i = 0; i < rows; ++i)
        {
            delete[] mat[i]; //delete each row..
        }

        delete[] mat;  //delete the rows..
        mat = nullptr;
    }
}

int main()
{
    int rowsA = 5; // number of rows
    int colsA= 3; // number of coloumns
    double** matA = create_matrix(rowsA, colsA);


    int rowsB = 3; // number of rows
    int colsB = 5; // number of coloumns
    double** matB = create_matrix(rowsB, colsB);


    //Checking matrix multiplication qualification
    assert(colsA == rowsB);


    double** matC = create_matrix(rowsA, colsB);

    //Multiplication
    for(int i = 0; i < rowsA; ++i)
    {
        for(int j = 0; j < colsB; ++j)
        {
            for(int k = 0; k < colsA; ++k) //ColsA..
            {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }


    //Clean up..
    destroy_matrix(matA, rowsA);
    destroy_matrix(matB, rowsB);
    destroy_matrix(matC, rowsA);
}