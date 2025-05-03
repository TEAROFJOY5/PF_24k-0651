/*
Given a list of integers allocated dynamically ,perform insertion &amp; deletion on an array on
the given position. Reallocate array with size greater than the initialized if size is full.  e:g 
Input
First line of input will contain an integer T = number of test cases. Each test case will contain
two options(insertion's deletion). First line will contain an integer N = number of elements in 
the sequence and 1 <= N <= 1000. Next line will contain N space separated integers of sequence 
A. For each Ai in sequence A, 1<= Ai <= 10001."
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int capacity = N + 10;
        int *arr = (int *)malloc(capacity * sizeof(int));
        int size = N;

        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int Q;
        scanf("%d", &Q);

        while (Q--) {
            char op[10];
            scanf("%s", op);

            if (op[0] == 'i' || op[0] == 'I') {
                int pos, val;
                scanf("%d %d", &pos, &val);

                if (size == capacity) {
                    capacity *= 2;
                    int *temp = realloc(arr, capacity * sizeof(int));
                    if (temp == NULL) {
                        printf("Memory allocation failed.\n");
                        free(arr);
                        return 1;
                    }
                    arr = temp;
                }

                if (pos < 0 || pos > size) {
                    printf("Invalid insertion position\n");
                } else {
                    for (int i = size; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = val;
                    size++;
                }
            } else if (op[0] == 'd' || op[0] == 'D') {
                int pos;
                scanf("%d", &pos);

                if (pos < 0 || pos >= size) {
                    printf("Invalid deletion position\n");
                } else {
                    for (int i = pos; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr);
    }

    return 0;
}
