// DS Assignment No 1 - Matrix operations using menu (C++)

#include<iostream>
using namespace std;

// global arrays so we dont have to pass them everywhere
int a[10][10], b[10][10], c[10][10];
int m,n,p,q,i,j,k;   // m,n = rows,cols of A   p,q = rows,cols of B

void input1()
{
    cout<<"Enter rows and columns of matrix A: ";
    cin>>m>>n;
    cout<<"Enter elements of matrix A:\n";
    // simple nested loop to fill matrix row by row
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
}

void input2()
{
    cout<<"Enter rows and columns of matrix B: ";
    cin>>p>>q;
    cout<<"Enter elements of matrix B:\n";
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            cin>>b[i][j];
}

// just prints any matrix passed to it, so we dont repeat print code again and again
void show(int x[10][10], int r, int col)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
            cout<<x[i][j]<<"\t";
        cout<<"\n";
    }
}

void add()
{
    input1();
    input2();

    // addition only works if both matrix have same rows and same columns
    if(m!=p || n!=q)
    {
        cout<<"Addition not possible, order is different\n";
        return;
    }

    // add element at same position i,j from both matrix
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];

    cout<<"Matrix A:\n";
    show(a,m,n);
    cout<<"Matrix B:\n";
    show(b,p,q);
    cout<<"A+B:\n";
    show(c,m,n);
}

void sub()
{
    input1();
    input2();

    // same condition as addition, order must match
    if(m!=p || n!=q)
    {
        cout<<"Subtraction not possible, order is different\n";
        return;
    }

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            c[i][j]=a[i][j]-b[i][j];

    cout<<"Matrix A:\n";
    show(a,m,n);
    cout<<"Matrix B:\n";
    show(b,p,q);
    cout<<"A-B:\n";
    show(c,m,n);
}

void mul()
{
    input1();
    input2();

    // multiplication rule: columns of A must be equal to rows of B
    if(n!=p)
    {
        cout<<"Multiplication not possible, columns of A not equal to rows of B\n";
        return;
    }

    // standard matrix multiplication - row of A into column of B
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;   // reset before adding, otherwise garbage value
            for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }

    cout<<"Matrix A:\n";
    show(a,m,n);
    cout<<"Matrix B:\n";
    show(b,p,q);
    cout<<"A*B:\n";
    show(c,m,q);   // result matrix size is m x q
}

void triangle()
{
    cout<<"Enter order of square matrix: ";
    cin>>n;
    m=n;   // works only for square matrix so rows=cols=n

    cout<<"Enter elements:\n";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    // upper triangle = elements where row index <= column index
    // includes the diagonal too
    cout<<"Upper triangular elements:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
                cout<<a[i][j]<<"\t";
            else
                cout<<"-\t";   // just to show blank spot
        }
        cout<<"\n";
    }

    // lower triangle = elements where row index >= column index
    // diagonal comes in this too
    cout<<"Lower triangular elements:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                cout<<a[i][j]<<"\t";
            else
                cout<<"-\t";
        }
        cout<<"\n";
    }
}

void saddle()
{
    int minVal,maxVal,r,flag=0;

    cout<<"Enter rows and columns: ";
    cin>>m>>n;
    cout<<"Enter elements:\n";
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    // saddle point = smallest in its row AND largest in its column
    for(i=0;i<m;i++)
    {
        // step 1: find smallest element in current row, and note its column no (r)
        minVal=a[i][0];
        r=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]<minVal)
            {
                minVal=a[i][j];
                r=j;
            }
        }

        // step 2: go down that column r and find the biggest value in it
        maxVal=a[0][r];
        for(k=0;k<m;k++)
        {
            if(a[k][r]>maxVal)
                maxVal=a[k][r];
        }

        // step 3: if row-minimum is same as column-maximum, its a saddle point
        if(minVal==maxVal)
        {
            cout<<"Saddle point = "<<minVal<<" at row "<<i<<" col "<<r<<"\n";
            flag=1;
        }
    }

    if(flag==0)
        cout<<"No saddle point\n";
}

int main()
{
    int ch;

    // do-while so menu shows atleast once, keeps repeating till user picks exit
    do
    {
        cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Upper Lower Triangle\n5.Saddle point\n6.Exit\n";
        cout<<"Enter choice: ";
        cin>>ch;

        // switch case calls the function based on user choice
        switch(ch)
        {
            case 1: add(); break;
            case 2: sub(); break;
            case 3: mul(); break;
            case 4: triangle(); break;
            case 5: saddle(); break;
            case 6: cout<<"Bye\n"; break;
            default: cout<<"Wrong choice\n";
        }

    }while(ch!=6);

    return 0;
}