#include<iostream>

using namespace std;
int partition(int input[], int l , int r){
    int pivote = input[r];
    int i = l-1;
    for(int j = l ; j < r; j++){
        if(input[j]<pivote){
            i++;
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    }
            int vtemp = input[i+1];
            input[i+1] = input[r];
            input[r] = vtemp;
    
    return i+1;
}


void quicksort(int input[], int l, int r ){
    if(l<r){
        int pi = partition(input,l,r);
        quicksort(input,l,pi-1);
        quicksort(input,pi+1,r);
    }
}

void quickSort(int input[], int size) {
  quicksort(input, 0, size-1);

}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


