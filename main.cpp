#include <iostream>

using namespace std;

void sito_eratostenesa(int tablica[], int n)
{
    int skok=2, start=2;

    for(int i=2; i<=n/2; i++)
    {

        for(int j = start; j<=n; j=j+skok)
            tablica[j]=0;

        skok=skok+1;
        start=start+2;
    }

}

int main()
{
    int n;

    cout << "Podaj granice zakresu liczb naturalnych: ";
    cin >> n;


    int tablica[n];

    for(int i=0; i<n-1; i++)
        tablica[i]=i+2;


    sito_eratostenesa(tablica, n);


    for(int i=0; i<n-1; i++)
        if(tablica[i]!=0)
            cout<< tablica[i] << endl;


    return 0;
}
