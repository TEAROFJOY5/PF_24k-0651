/*
Given a list of integers, find out the number that has the highest frequency. If there are one
or more such numbers, output the smaller one.
Input
First line of input will contain an integer T = number of test cases. Each test case will contain
two lines. First line will contain an integer N = number of elements in the sequence and 1 &lt;= N
&lt;= 1000. Next line will contain N space separated integers of sequence A. For each Ai in
sequence A, 1<= Ai <= 10001.

 */
#include <stdio.h>
#include <stdlib.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        int freq[10002] = {0};
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            freq[A[i]]++;
        }
        int maxFreq = 0, result = 10002;
        for (int i = 1; i <= 10001; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = i;
            } else if (freq[i] == maxFreq && i < result) {
                result = i;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}

