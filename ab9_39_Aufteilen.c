//create an int nums[10], scan the numbers from the user and check if they are even or odd
//create int odds[10] and int evens[10] and sort the numbers from the first array into them
//print the odds first, then the evens
#include <stdio.h>

int checkEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void printArray(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d) %d\n", i + 1, arr[i]);
    }
}

int main(void)
{
    int len = 10;
    int nums[len];
    int odds[len];
    int evens[len];
    int check;
    int indexEven = 0;
    int indexOdd = 0;

    printf("Type in 10 integers:\n");

    for (int i = 0; i < len; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for(int j = 0; j < len; j++)
    {
        check = checkEven(nums[j]);

        if (check == 1)
        {
            evens[indexEven] = nums[j];
            indexEven++;
        }

        else
        {
            odds[indexOdd] = nums[j];
            indexOdd++;
        }
    }

    printf("Odd Numbers:\n");
    printArray(odds, indexOdd);

    printf("Even Numbers:\n");
    printArray(evens, indexEven);

    return 0;
}
