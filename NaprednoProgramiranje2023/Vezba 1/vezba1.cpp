#include<iostream>  
// FILIP DESANOSKI INKI 1015
using namespace std; 

int main () 
{    
    int myarray[4] = { 1,0,1,5};  // deklariranje i inicijaliziranje na integer niza
    char ime[18] = {'F','i', 'l', 'i', 'p', 'D', 'e','s', 'a', 'n', 'o', 's','k','i', 'I', 'N', 'K', 'I'}; // deklariranje i inicijaliziranje na char niza
    
    cout<<"\nInput list is \n";  // ke ispecati "Input list is"
    
    for(int b=0;b<18;b++)
    {
        cout<<ime[b]<<"\t"; // vrti niz nizata so znaci i go pecati sekoj znak prosleden so tab
    }
    
    // Insertion Sort algoritam
    for(int i=0;i<4;i++)  
    {
    cout <<myarray[i]<<"\t";  // ova ke gi ispecati vleznite inputi na nizata
    }  

    for(int k=1; k<4; k++)  
    {  
        int temp = myarray[k];  // ja zacuvuva vrednosta na k-tiot element vo privremena promenliva
        int j= k-1;  

        while(j>=0 && temp <= myarray[j])  // proveruva dali promenlivata vrednost е pomala ili ednakva na j-tiot element i indeksot ne е negativen
        {  
            myarray[j+1] = myarray[j];  // ako gorenavedeniot uslov е vistinit, pomestete go j-tiot element edna pozicija nadesno
            j = j-1;  // go dekrementira indeksot j
        }  

        myarray[j+1] = temp; // postavete ја privremenata vrednost vo pravilnata pozicija vo nizata
    }  

    cout<<"\nSorted list is \n";  // ke ispecati "Sorted list is"
 
    for(int b=0;b<18;b++)
    {
        cout<<ime[b]<<"\t";   // vrti niz nizata so znaci i go pecati sekoj znak prosleden so tab
    }
    
    for(int i=0;i<4;i++) 
    {  
        cout <<myarray[i]<<"\t";   // vrti niz integer nizata i go pecati sekoj element prosleden so tab
    }  
}
