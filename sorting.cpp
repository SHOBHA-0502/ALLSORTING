#include<iostream>
using namespace std ;
void sort_kro(int arr[], int n){
    
//     for(int i =0 ; i<n-1; i++){
//         int min = arr[i];
//         int minindex = i; 
//         for(int j = i+1; j < n ; j++){
//             if(arr[j] < arr[i]){
//                  min = arr[j];
//                  minindex = j ;
//             }
//         }
//             int temp = arr[i];
//             arr[i] = arr[minindex];
//             arr[minindex] = temp;
        



//  }
///////////////////////////////////////////////
//  for(int i =0 ; i< n-1 ; i++){
//      for(int j = 1; j<n-1; j++){
//          if(arr[j]>arr[j+1]){
//              int temp = arr[j];
//              arr[j] = arr[j+1];
//              arr[j+1] = temp;
//          }
//      }
//  }
//////////////////////////////
// for(int i =1 ; i<n ; i++){
//     int current = arr[i];
//     int j = i-1;
//     while(arr[j]>= current && j>=0){
//         arr[j+1] = arr[j];
//         j--;


//     }
//     arr[j+1] = current ;
// }
/////////////////////////////////
if(n ==0 || n == 1){
    return ;
}


    int min = arr[0];
    int minindex = 0;
    for(int i = 1; i<n ; i++){
        if(arr[i]<min){
            min = arr[i];
            minindex=i ;
        }
    }
    int temp = arr[0];
    arr[0] = arr[minindex];
    arr[minindex] = temp;



  sort_kro(arr+1,n-1);



}
//////////////////////////////////////////
int main(){
    int n ; 
    cin>>n ;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort_kro(arr,n);
    for(int i =0 ; i<n ; i++){
        cout<< arr[i]<< " ";
    }

}