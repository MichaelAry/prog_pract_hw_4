#include <iostream>

const int SIZE=6;  
void inputGrid(bool grid[SIZE][SIZE]);
void outputGrid(const bool grid[SIZE][SIZE]);
int findPerimeter(const bool grid[SIZE][SIZE]);


int main(){
    bool grid[SIZE][SIZE]={false};  
    inputGrid(grid);
    outputGrid(grid);
    std::cout<<"Perimeter: "<<findPerimeter(grid)<<std::endl;  
    return 0;
}

void inputGrid(bool grid[SIZE][SIZE]){
    std::cout<<"Input grid"<<std::endl;
        for (int i=1;i<SIZE-1;i++){
            for(int j=1;j<SIZE-1;j++){
                std::cin>>grid[i][j];
            }
            std::cout<<std::endl;
        }
}

void outputGrid(const bool grid[SIZE][SIZE]){
    std::cout<<"Output grid:"<<std::endl;
    for (int i=1;i<SIZE-1;i++){
        for (int j=1;j<SIZE-1;j++){
            std::cout<<grid[i][j]<<" ";
        }
        std::cout<<std::endl;  
    }
    std::cout<<std::endl;  
}

int findPerimeter(const bool grid[SIZE][SIZE]) {
    int count=0;
    for (int i=1;i<SIZE-1;i++){
        for (int j=1;j<SIZE-1;j++){
            if (grid[i][j]){
                count+=(grid[i][j]!=grid[i-1][j])?1:0;  
                count+=(grid[i][j]!=grid[i+1][j])?1:0;  
                count+=(grid[i][j]!=grid[i][j-1])?1:0;  
                count+=(grid[i][j]!=grid[i][j+1])?1:0;  
            }
        }
    }
    return count;
}

