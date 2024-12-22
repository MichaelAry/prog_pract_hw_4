#include<iostream>
#include<ctime>
#include<cmath>
#include<iomanip>
//вы разрешили сделать матрицу третьего порядка :)🥰🥰😘

int entD();
void entMatr(int matr[][6],int x);
void outMatr(int matr[][6]);
void entTrMatr(int matr[][6],int trMatr[][6]);
const int s=6;//size

int main(){
    srand(time(0));
    int x=entD();
    int matr[s][6]{0};
    int trMatr[s][6]{0};
    entMatr(matr,x);
    outMatr(matr);
    entTrMatr(matr,trMatr);
    std::cout<<std::endl;
    outMatr(trMatr);
    return 0;
}

int entD(){
    float n{0};
    do{
        std::cout<<"Enter a natural number: ";
        std::cin>>n;
    }while((n<=0)||(int(n)!=n));
    return n;
}

void entMatr(int matr[s][6],int x){
    for(int i{0};i<s;i++){
        for(int j{0};j<s;j++){
                matr[i][j]=rand()%x+1; 
        }
    }
}

void outMatr(int matr[s][6]){
        for(int i{0};i<s;i++){
            for(int j{0};j<s;j++){
                std::cout<<std::setw(7)<<matr[i][j] << " ";
        }
            std::cout<<std::endl;
    }
}

void entTrMatr(int matr[][6],int trMatr[][6]){
    for (int i{0};i<s;i++){
        for (int j{0};j<s;j++){
            if(i+j>=s){
                break;
            }
            else{
                trMatr[i][j]=pow(matr[j][i],matr[i][j]);
            }
        }
    }
}