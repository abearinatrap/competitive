#include <bits/stdc++.h>
using namespace std;

// C++ program to demonstrate working of Gaussian Elimination
// method
#include<bits/stdc++.h>
using namespace std;
 


int forwardElim(vector<vector<double> >  &mat, int N);


void backSub(vector<vector<double> >  &mat, int N);


void gaussianElimination(vector<vector<double> >  &mat, int N)
{
    /* reduction into r.e.f. */
    int singular_flag = forwardElim(mat, N);
 
    /* if matrix is singular */
    if (singular_flag != -1)
    {
        printf("Singular Matrix.\n");
 
        /* if the RHS of equation corresponding to
           zero row  is 0, * system has infinitely
           many solutions, else inconsistent*/
        if (mat[singular_flag][N]) {printf("Inconsistent System.");}
        else { printf("May have infinitely many solutions.");}
        return;
    }
 
    backSub(mat, N);
}


void swap_row(vector<vector<double> >  &mat, int N, int i, int j)
{
    vector<double> temp = mat[i];
    mat[i] = mat[j];
    mat[j] = temp;
}
 

void print(vector<vector<double> >  &mat, int N)
{
    for (int i=0; i<N; i++, printf("\n"))
        for (int j=0; j<=N; j++)
            printf("%lf ", mat[i][j]);
 
    printf("\n");
}

int forwardElim(vector<vector<double> >  &mat, int N)
{
    for (int k=0; k<N; k++)
    {
        int i_max = k;
        int v_max = mat[i_max][k];

        for (int i = k+1; i < N; i++)
            if (abs(mat[i][k]) > v_max)
                v_max = mat[i][k], i_max = i;
 
        if (!mat[k][i_max])
            return k; // Matrix is singular
 
        /* Swap the greatest value row with current row */
        if (i_max != k){swap_row(mat,N, k, i_max);}

        for (int i=k+1; i<N; i++)
        {
            double f = mat[i][k]/mat[k][k];

            for (int j=k+1; j<=N; j++)
                mat[i][j] -= mat[k][j]*f;
 
           
            mat[i][k] = 0; /* filling lower triangular matrix with zeros*/
        }
    }
    return -1;
}
 

void backSub(vector<vector<double> >  &mat, int N)
{
    double x[N];  // An array to store solution
 
    for (int i = N-1; i >= 0; i--)
    {
        x[i] = mat[i][N];
 
        for (int j=i+1; j<N; j++)
        {
            x[i] -= mat[i][j]*x[j]; /* subtract all other variables out */
        }

        x[i] = x[i]/mat[i][i]; //get value
    }
 
    printf("\nSolution for the system:\n");
    for (int i=0; i<N; i++)
        printf("%lf\n", x[i]);
}
 

void solve(){
    vector<vector<double> > mat = {{3.0, 2.0,-4.0, 3.0},
                          {2.0, 3.0, 3.0, 15.0},
                          {5.0, -3, 1.0, 14.0}
                         };
 
    gaussianElimination(mat, 3);
}

int main(){
    solve();
    return 0;
}
