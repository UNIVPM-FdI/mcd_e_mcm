#include <iostream>
using namespace std;
int mcd(int x,int y)
{
	int f[x],e[y],u[x+y],temp;
	int g=1,h=1,o=0,mcd=1;
	for (int i=1;i<(x+1);i++)
	{
	
		if(x%i==0)
		{
			f[i]=i; //metto in f tutti i divisori di x
		} 
		else f[i]=1;
	}

		for(int i=1;i<(y+1);i++)
	{
		if(y%i==0)
		{
			e[i]=i; // metto in e tutti i divisori di y
		}
		else e[i]=0;
	}

	while(g!=x ||h!=y)
	{
		if (f[g]==e[h])
		{
			u[o]=f[g]; // metto in u tutti i fattori comuni 
			g++;h++;o++;
		}
		// quando finsice un ciclo, terminerà anche l'altro
	else if (g==x)h=y; 
	else if (h==y)g=x; 
	else
		{
		  g++;h++;
		  }
	}
			for(int i=0;i<o+1;i++)
			{
				if (u[i]>u[i+1]) //mi ordina i vettori 
				{
					temp=u[i];
					u[i]=u[i+1];
					u[i+1]=temp;
				}
			}
	   mcd=u[o-1];
	 return mcd;
		}	
int mcm(int x,int y,int ri)
{
	int z=x*y;
    z/=ri;
	return z;
}
int main ()
{
cout << "Inserisci due numeri: ";
int x,y;
cin >> x;
cin >> y;
int ri=mcd(x,y);
if (ri==0) ri=1;
cout << "M.C.D " << ri << endl; 
cout << "M.C.M " << mcm(x,y,ri) << endl;
}
