/* problema Sã se genereze primul numãr prim mai mare decât un numãr natural n dat. */
#include <iostream>
#include <math.h>
#include <assert.h>
#include <conio.h>
using namespace std;

bool isPrime(int x)
{
	// Functia verifica daca x este prim
	// In: un nr nat x
	// Out: T/F
	if (x<2)
		return false;
	else
	{
		for (int i=2;i<=sqrt(double(x));i+=2)
		{
			if(x%i==0)
			{
				return false;
			}	
		}
		return true;
	}
}
void testisPrime()
{
	assert(isPrime(7)==true);
	assert(isPrime(4)==false);
	assert(isPrime(2)==true);
	assert(isPrime(1)==false);
	assert(isPrime(0)==false);
	assert(isPrime(-1)==false);
	cout<<"tests ok";
}

 // VARIANTA CU PROCESS
int process(int n)
{ 
	// Functia gaseste nr prim mai mare decat n
	// In: un nr nat n
	// Out: nr prim mai mare
	n++;
	while(isPrime(n)==false)
	{
		n++;
	}
	return n;
}
void testProcess()
{
	assert(process(8)==11);
	assert(process(10)==11);
	assert(process(3)==5);
	assert(process(0)==2);
	cout<<"teste ok";
}

void readData(int &n)
{
	// Functia citeste un nr nat
	// In: -
	// Out: nr citit n
	cin >> n;
}
void printData(int n)
{
	// Functia afiseaza un nr nat
	// In: un nr nat x
	// Out: -
	
	cout<<n<<endl;
}
int main()
{	int nr=0;

	readData(nr);
	int r= process(nr);
	printData(r);
	_getch();
	return 0;

}


// VARIANTA FARA PROCESS
/*
int main()
{	int n,ok=1,i;
	
	cin>>n;
	i=n+1;
	while(ok)
	{  
		if(isPrime(i))
		{
			cout<<"Numarul este "<<i;
			ok=0;
		}
		else i++;
	}
	_getch();
	return 0;
}
*/
