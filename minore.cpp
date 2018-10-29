 #include <iostream>
using namespace std;
 
int main() {
int v[15];
int min=0, n;

cout << "Inserisci la dimensione: ";
cin >> n;

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
return 0;
}
