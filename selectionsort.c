 #include <stdio.h>
int main()
{
	int arr[100], n,i,j,temp;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
   for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
//    int n = 5;
//    int arr[] = {4,5,1,3,6};
    for( i = 0; i < n; i++) {
        for( j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for( i = 0; i < n; i++)  {
        printf("%d ", arr[i]);
    }
    return 0;
}
