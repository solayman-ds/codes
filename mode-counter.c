#include <stdio.h>
// Main function
#define SIZE 100
int main()
{
    int arr1[SIZE], n, ctr = 0;  // Declare an array to store integer values, n for array size, and ctr for counting duplicates
    int i, j, k;  // Declare loop counters
    // Prompt the user to input the number of elements to be stored in the array
    printf("\n\nPrint all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the array
    }
    // Print unique elements in the array
    //printf("\nThe unique elements found in the array are: \n");
    int counter_mat[n][2];
    for (i =0 ; i<n ; ++i)
            {
            counter_mat[i][0]=arr1[i];    
            counter_mat[i][1]=1;
            }
    for (i = 0; i < n; i++)
        {
            ctr = 1;  // Reset the counter for each element
            for (j = 0, k = n; j < k + 1; j++)
            {
                /* Increment the counter when the search value is duplicate. */
                if (i != j)
                {
                    if (arr1[i] == arr1[j])
                    {
                        ctr++;
                        counter_mat[i][1]+=1;
                    }
                    
                }
            }
            printf("array entry arr1[%d]= %d has appeared %d times \n", i, arr1[i], counter_mat[i][1]);
            if (ctr == 1)
            {
                printf("unique entry: arr1[%d]=%d \n", i, arr1[i]);  // Print the unique element
            }
        }
    
    int max = counter_mat[0][1];
    int mode=0;
    for (i=0; i<n ;++i)
        {
            if(max < counter_mat[i][1])
                {
                    max= counter_mat[i][1];
                    mode=i;

                }


        }

    printf("mode = %d \n",  counter_mat[mode][0]);
    return 0;  // Return 0 to indicate successful execution
}