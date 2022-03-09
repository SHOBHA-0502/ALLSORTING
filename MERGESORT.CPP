#include <iostream>
using namespace std;
void mergewhole(int input[],int start,int mid,int end){
    int *p=new int[end-start+1];
    int k=0;
    int i=start;
    int j=mid+1;
    while(i<=mid &&j<=end){
        if(input[i]<input[j]){
            p[k]=input[i];
            i++;
            k++;
        }
        else{
            p[k] = input[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        p[k]=input[i];
        k++;
        i++;
    }
    while(j<=end){
        p[k]=input[j];
        k++;
        j++;
    }
    for(int x=0;x<k;x++){
        input[start]=p[x];
        start++;
    }
}



void mergeSort(int input[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    mergeSort(input,start,mid);
    mergeSort(input,mid+1,end);
    mergewhole(input,start,mid,end);

}




void mergeSort(int input[], int size){
	// Write your code here
    mergeSort(input, 0, size-1);
      
}




int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}