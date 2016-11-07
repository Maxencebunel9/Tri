#include <stdio.h>
#include <stdlib.h>

void Bubble_Sort (int N,int i,int j,int n,int perm, int T[N]);
int main()
{

}

void Bubble_Sort (int N,int i,int j,int n,int perm, int T[N]) //Fonction tri a bulle
{
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			if(T[j]<T[i])
			{
				perm=T[i];
			    T[i]=T[j];
				T[j]=perm;
            }
		}
	}
}
