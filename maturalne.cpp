#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    
	int liczba, i;
	fstream wejscie;
	wejscie.open("liczbyMatura.txt");
	
	cout<<"czynniki pierwsze:";
	while (!wejscie.eof())
	{
		wejscie>>liczba;
			 for (i=2; i<=liczba; i++)
      while (liczba %i ==0 ) {
       liczba/=i;
       cout<< i << ","; //zapamiętaj i;
        if(i%2){
        	cout<<"NIE";
		}
		else{
        		cout<<"TAK";
			}
     }
		
	}
	wejscie.close();
	
	return 0;
}
