/* Problem: Write a program to read a matrix of size m*n from the keyboard and display the same using function. */

#include<iostream>
using namespace std;

int i,j,r,c;
int matrixdata[1000][1000];
void read_matrix(int r,int c);
void display_matrix(int r,int c);

int main(){
    cout<<"Enter the size of matrix. \n";
    cout<<"Enter the size of row. \n";
    cin>>r;
    cout<<"Enter the size of colom. \n";
    cin>>c;
    cout<<"Now Enter the data. ";
    read_matrix(r,c);

    cout<<"Now data is displayed below. \n";

    display_matrix(r,c);
    return 0;
}

void read_matrix(int r,int c){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>matrixdata[i][j];
        }
    }
}

void display_matrix(int r,int c){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<matrixdata[i][j]<<" ";
        }
        cout<<endl;
    }
}
