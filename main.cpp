#include<bits/stdc++.h>
using namespace std;
void print(char ch[5][2]);
int main() {
	char ch[5][5];
	char notasd;
	//printf("%x\n",&ch[4][4]+8);
	//printf("%x\n",&notasd);
	for (int  i = 0; i < 5; i++) {
		//	printf("%x %x\n",&i);
	//scanf("%c",&notasd);
//	printf("%d\n",i);
		cout << i << endl;
		cin >> &ch[i][0];
		printf("%d %d %d\n",ch[i][0],ch[i][1],i);
	}
	//print(ch);
}
//void print(char ch[5][2]) {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << ch[i][j];
//		}
//		cout << endl;
//	}
//}
