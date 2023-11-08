#include<stdio.h>
int insert();
int linear_search();
int bubble_sort();
int binary_search();
int option,key,temp,found=0,i,j,n,a[20];
int main(){
    while(option<5){
        printf("\n1.Insert\n2.Linear_Search\n3.Bubble_Sort\n4.Binary_Search ");
        printf("\nEnter your Choice: ");scanf("%d",&option);
        switch(option){
            case 1:{
                insert();
                break;
            }
            case 2:{
                linear_search();
                break;
            }
            case 3:{
                bubble_sort();
                break;
            }
            case 4:{
                binary_search();
                break;
            }
            default:printf("\nInvalid Number:");
        }
    }
}
int insert(){
    printf("\nEnter the Number of Elements: ");
    scanf("%d",&n);
    printf("\nEnter the Elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int bubble_sort(){
    printf("Elements in the array before sorting: \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nElements in the array after sorting: \n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int linear_search(){
   printf("\nEnter the Key to search:");
   scanf("%d",&key);
   for(i=0;i<n;i++){
       if(key==a[i]){
       found=1;
       temp=i;
       }
   }
   if(found==1)
   printf("\nKey has found in an array and it is at %d place in the array",temp+1);
   else
   printf("\nKey not found!");
}
int binary_search(){
    bubble_sort();
    printf("\nEnter the Key to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
       if(key==a[i]){
       found=1;
       temp=i;
       }
    }
    if(found==1)
    printf("\nKey has found in an array and it is at %d place in the array",temp+1);
    else
    printf("\nKey not found!");
}
