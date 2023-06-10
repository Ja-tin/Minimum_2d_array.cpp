#include <iostream>
#include <limits.h>

using namespace std;

int findminno(int arr[][30],int rows,int cols){
    int mini=INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int main(){
    int rows, cols;
    cout<<"Enter the no of rows:-";
    cin>>rows;
    cout<<"Enter the no of columns:-";
    cin>>cols;

    int arr[30][30];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=findminno(arr,rows,cols);
    cout<<"The minimum no. is:-"<<max;

    return 0;

}