// 1. highest element in array
// 2. each element in array is unique or not
// 3. no of digits in binary representation of that decimal
// 4. tower of Hanoi

#include<stdio.h>

int a[40],option,i,n;

int display()
{
    printf("Elements in array are:\n");
    for(i=0;i<n;i++)
        printf("%d   ",a[i]);
    printf("\n\n");
}

int highest()
{
    int high = a[0];
    for(i=0;i<n;i++)
    {
        if(high < a[i])
            high = a[i];
    }
    printf("Highest element is %d\n\n",high);
}

int binary()
{
    int binary,digit;
    printf("Enter position of element:  ");
    int pos;
    scanf("%d",&pos);
    binary = a[pos-1];

    if(binary == 0)
        digit = 0;
    else if(binary==1)
        digit = 1;
    else if(binary==2)
        digit = 2;
    else if(binary==3)
        digit = 2;
    else if(binary==4)
        digit = 3;
    else if(binary==5)
        digit = 3;
    else if(binary==6)
        digit = 3;
    else if(binary==7)
        digit = 3;
    else if(binary==8)
        digit = 4;
    else
        digit = 4;

    printf("no. of digits in binary representation of %d is %d\n\n",a[pos-1],digit);
}

int main()
{
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(;;)
    {
        printf("1. Display elements\n2. Highest element\n3. Array is unique or not\n4. binary representation of that decimal\n5.Exit\nChoice:   ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: display();
                    break;

            case 2: highest();
                    break;

            case 3: //unique();
                    break;

            case 4: binary();
                    break;

            case 5: exit(1);
                    break;

            default:printf("Invalid choice!\n");
                    break;
        }
    }
    return 0;
}
