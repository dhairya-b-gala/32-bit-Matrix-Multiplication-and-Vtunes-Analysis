#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
//clock_t begin, end;
//double time_spent;

//begin = clock();
int m,n,p,q,i,j,k;

    m=400; // Mat A – row - 400
    n=300; // Mat A – column - 300
    p=300; // Mat B – row - 300
    q=400; // Mat B – row - 400
    
    int matrixa[400][300];
    int matrixb[300][400];
    int	matrixc[400][400];
    
srand(time(0));
  	
//initializing final result matrix C to zero
    for(i=0;i<m;i++)
    {
    	for(k=0;k<q;k++)
		{
			matrixc[i][k]=0;
		//	cout<<matrixc[i][k];
    	}
	}

//generating elements for matrix A
	
for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
		{
			matrixa[i][j]=rand()%100;
		//	cout<<matrixa[i][j];
    	}
    }


 //generating elements for matrix B  
   for(j=0;j<p;j++)
    {
    	for(k=0;k<q;k++)
		{
			matrixb[j][k]=rand()%100;
			//cout<<endl<<matrixb input starts from here<<matrixb[j][k];
    	}
	}

    
 //performing matrix multiplication of matrix A and matrix B and result is stored in matrix C   
    
     for(i=0;i<m;i++)
    {
    	for(k=0;k<p;k++)
		{
			for(j=0;j<n-1;j++)
		
			{		
			matrixc[i][k]+=matrixa[i][j]*matrixb[j][k];
		
        	}
		}
    }
    
   
//matrix A printing module starts from here
     cout<<endl<< "The First Matrix A is = "<<endl;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
		{
			cout<<matrixa[i][j]<<"\t";
    	}
    cout<<endl;	

    }
 
//matrix B printing module starts from here

    cout<<endl<< "The Second Matrix B is = "<<endl;
    for(j=0;j<n;j++)
    {
    	for(k=0;k<q;k++)
		{
			cout<<matrixb[j][k]<<"\t"; 
    	}
    cout<<endl;	
	}
   
//matrix C printing module starts from here
  
    cout<<endl<< "The Final Result Matrix C is = "<<endl;
    for(i=0;i<m;i++)
    {
    	for(k=0;k<q;k++)
		{
		cout<<matrixc[i][k]<<"\t";	
    	}
    cout<<endl;	
	}
//end = clock();
//time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//cout<<endl<<"The Time taken (in seconds) in Main loop is "<<time_spent;
	
}
