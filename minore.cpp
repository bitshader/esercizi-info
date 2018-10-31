#include <iostream>
using namespace std;
 
int main() {
int min=0, n;

cout << "Inserisci la dimensione: ";
cin >> n;
int v[n];

for(int i=0; i<n; i++) 
{
	cout<< "Inserisci un valore: ";
	cin>> v[i];
}

min = v[0];

for(int i=0; i<n; i++)
{
	if(min>v[i])
 	min=v[i];
}

cout << "L'elemento minimo del vettore e'	" << min;
cout << "\n";
return 0;
}
