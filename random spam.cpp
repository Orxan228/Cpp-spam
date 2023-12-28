#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	system("Color 02");
	int i = 255;
	while(true){
	char x = rand()%i;
	cout<<x<<" ";
	}
}
