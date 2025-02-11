#include<stdio.h>
enum month{jan=1,feb=2,mar=3,april=4,may=5,june =6 , jul=7,aug=8,sep=9,oct=10,nov=11 , dec=12
};
int main(){
	enum month today=feb;
	if(today==may|| today==june){
		printf("its holiday season\n");
	}
	else{
		printf("uhh!! working months");
	}
	return 0;
}
