#include <stdio.h>

  int main() {
  int n;
  
printf("enter size of the array");
scanf("%d", &n);
int arr[n];  //Declare an array of size n

  printf("enter elements of array\n");
for (int i=0; i<n; i++) {
scanf("%d", &arr[i]);
}
printf("the array is\n");
for (int i=0;i<n;i++){
printf("%d\t", arr[i]);

}
printf("\n");


for(int i=0; i<n-1;i++) {
  for (int j=i+1; j<n; j++) {
    if(arr[i]>arr[j]) {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
  }
}
printf("sorted array is\n");
for(int i=0; i<n; i++) {
  printf("%d\t", arr[i]);
}


    return 0;
  }


