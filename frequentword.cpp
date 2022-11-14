#include <iostream>
using namespace std;

int main(){
	string kata[12] = {"chasmophilous", "emergency", "chronography", "emergency", "hawser", "chronography", "emergency", "chasmophilous", "chronography", "chronography", "emergency", "hawser"};
	int jumlah[12] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	
	for(int a=1; a<12; a++){
		for(int b=0; b<a; b++){
			if(kata[a] == kata[b]){
				jumlah[b] += 1;
				jumlah[a] = 0;
				break;
			}
		}
	}
	
	for(int i=0; i<12; i++){
		if(jumlah[i]>0){
			cout << kata[i] << ": " << jumlah[i] << endl;
		}
	}
	return 0;
}
