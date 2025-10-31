/*Create a file named "Number.txt"� that contains a list of 
integers. Write a program to extract the prime numbers from  
that file and write them on "Prime.txt" file
*/
#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fptr1;
    fptr1 = fopen("Number.txt", "wb+");
    if (fptr1 == NULL) {
        printf("Error opening file");
        exit(1);
    }

    int n, i;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
        fwrite(&arr[i], sizeof(int), 1, fptr1);
    }

    rewind(fptr1);
    printf("\nTotal elements are:\n");
    while (fread(&arr[i], sizeof(int), 1, fptr1)) {
        printf("%d\t", arr[i]);
    }

    rewind(fptr1);
    FILE *fptr2;
    fptr2 = fopen("Prime.txt", "wb+");
    int num, j, c;

    while (fread(&num, sizeof(int), 1, fptr1)) {
        if (num < 2)
               continue;
        c = 0;
        for (j = 2; j <= num / 2; j++) {
            if (num % j == 0) {
                c = 1;
                break;
            }
        }
        if (c == 0) {
            fwrite(&num, sizeof(int), 1, fptr2);
        }
    }

    rewind(fptr2);
    printf("\nPrime numbers:\n");
    while (fread(&num, sizeof(int), 1, fptr2)) {
        printf("%d\t", num);
    }

    fclose(fptr1);
    fclose(fptr2);
}
