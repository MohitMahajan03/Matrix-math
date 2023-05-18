//OPERATIONS ON MATRICES     //multiplication problem
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
class matrix
{
private:
    int i,j,n,m,k,l,x,y,o,p;
    float a[50][50],b[50][50],d[50][50],c;
    public:

	void addition();
	void subtraction();
	void multiplication();
	void inverse();
	~matrix();
};
void matrix::addition()
{
    cout<<"enter the number of rows or coulmns of the matrices"<<endl;
    cin>>n;
    cout<<"Enter the elements of the first matrix"<<endl;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
	  cin>>a[i][j];
       }
    }
    cout<<"Enter the elements of the second matrix"<<endl;
    for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      cin>>b[i][j];
	   }
       }
       cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
	cout<<"|"<<a[i][j];
       }
		cout<<"|"<<endl;
    }
    cout<<endl<<"   +"<<endl;
    for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      cout<<"|"<<b[i][j];
	   }
		cout<<"|"<<endl;
       }
       cout<<endl<<"answer = "<<endl;
    for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      cout<<"|"<<(b[i][j]+a[i][j]);
	   }
		cout<<"|"<<endl;
       }
}
void matrix::subtraction()
{
    cout<<"enter the number of rows or columns of the matrices"<<endl;
    cin>>n;
    cout<<"Enter the elements of the first matrix"<<endl;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
	  cin>>a[i][j];
       }
    }
    cout<<"Enter the elements of the second matrix"<<endl;
    for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      cin>>b[i][j];
	   }
       }
       cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
	cout<<"|"<<a[i][j];
       }
		cout<<"|"<<endl;
    }
    cout<<endl<<"   +"<<endl;
    for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      cout<<"|"<<b[i][j];
	   }
		cout<<"|"<<endl;
       }
       cout<<endl<<"answer = "<<endl;
    for(i=0;i<n;i++)
       {
	   for(j=0;j<n;j++)
	   {
	      cout<<"|"<<(b[i][j]-a[i][j]);
	   }
		cout<<"|"<<endl;
       }
}
/*
void matrix::multiplication()
{
    cout<<"Enter the number of rows and columns of the first matrix"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of the first matrix"<<endl;
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
	  cin>>a[i][j];
       }
    }
    cout<<"Enter the number of rows and columns of the second matrix"<<endl;
    cin>>k>>l;
    cout<<"Enter the elements of the second matrix"<<endl;
    for(x=0;x<k;x++)
       {
	   for(y=0;y<l;y++)
	   {
	      cin>>b[x][y];
	   }
       }
       cout<<endl<<endl;
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
	cout<<"|"<<a[i][j];
       }
		cout<<"|"<<endl;
    }
    cout<<endl<<" x"<<endl<<endl;
    for(x=0;x<k;x++)
       {
	   for(y=0;y<l;y++)
	   {
	      cout<<"|"<<b[x][y];
	   }
		cout<<"|"<<endl;
       }
       for(i=0;i<n;i++ && x=0;x<k;x++)  //wrong code
       {
	for(j=0;j<m;j++ && y=0;y<l;y++)
	{
	  d[o][p]=a[i][j]*b[y][x];
	}
       }
*/

void main()
{
    clrscr();
    char r[50],s[50]="addition",t[50]="subtraction";//u[50]="multiplication";//,v[50]="inverse";
    matrix m;
    cout<<"Enter the operations"<<endl;
    gets(r);
    if(strcmp(r,s)==0)
    {
      m.addition();
    }
    else if(strcmp(r,t)==0)
    {
      m.subtraction();
    }
/*    else if(strcmp(r,u)==0)
    {
      m.multiplication();
    }
    else if(strcmp(r,v)==0)
    {
      m.inverse();
    }*/
    getch();
}


