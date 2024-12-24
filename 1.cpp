#include <iostream>
#include <ctime>

const int size1=8,size2=3;
void fillMatr(char matr[][3]);
void checkingTheOrder(char matr[][3]);
void CheckingForAPolynomial(char matr[][3]);

int main(){
	srand(time(0));
	char matr[size1][size2];
	fillMatr(matr);
	checkingTheOrder(matr);
	CheckingForAPolynomial(matr);
    return 0;
}

void fillMatr(char matr[][size2]){
	char a='a';
	for (int i=0;i<size1;i++){
		for (int j=0;j<size2;j++){
			matr[i][j]=a+rand()%25;
		}
	}
}

void checkingTheOrder(char matr[][size2]){
	for (int i=0;i<size1;i++) {
		int count=0;
		char a='0';
		for (int j=0;j<size2;j++){
			std::cout<<matr[i][j]<< " ";
			if(matr[i][j]>a){
				count+=1;
			}
			a=matr[i][j];
		}
		(count==size2)?std::cout<<"The string is arranged in alphabetical order"<<std::endl :
			std::cout<<"The string is not in alphabetical order"<<std::endl;
	}
}

void CheckingForAPolynomial(char matr[][size2]) {
	for (int i=0;i<size2;i++) {
		int count=0;
		for (int j=0;j<size1/2;j++){
			if (matr[j][i]==matr[size1-j-1][i]){
				count+=1;
			}
		}
		(count==size1/2)?std::cout<<"The "<<i+1<<" column is polynomial"<<std::endl :
			std::cout<<"The " <<i+1<<" column is not polynomial"<<std::endl;
	}
}




