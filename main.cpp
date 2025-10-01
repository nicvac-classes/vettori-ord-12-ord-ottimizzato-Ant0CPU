#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;

int main() {

    srand(time(0));

    int n, i(0), j, t;
    bool scambi(true);

    do {
        cout<<"Inserire il numero di cifre da generare"<<endl;
        cin>>n;
    } while (n<=0);

    vector <int> R(n);
    while (i<=n-1) {

        R[i]=rand() % (n*10+1);
        i=i+1;
    }

    i=0;
    while (i<=n-1 && scambi) {
        scambi=false;

        j=0;
        while (j<(n-1)-i) {
           
            if (R[j]>R[j+1]) {
                
                t=R[j];
                R[j]=R[j+1];
                R[j+1]=t;

                scambi=true;

            } 
            else
            {
                scambi=false;
            }
            j=j+1;
        }
        i=i+1;
    }

    cout<<"R: ";
    for (i=0; i<=n-1; i++) {
        
        cout<<R[i]<<"; ";

    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
