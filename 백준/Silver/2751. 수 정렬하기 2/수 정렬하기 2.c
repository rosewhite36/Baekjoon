#include <stdio.h>

int arr[1000001];
int temp[1000001];

void merge(int a[], int s, int m, int e) {
    int i = s;
    int j = m + 1;
    int k = s;

    while (i <= m && j <= e) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    while (i <= m) {
        temp[k++] = a[i++];
    }

    while (j <= e) {
        temp[k++] = a[j++];
    }

    for (int idx = s; idx <= e; idx++) {
        a[idx] = temp[idx];
    }
}

void MergeSort(int a[], int s, int e) {
    if (s < e) {
        int m = (s + e) / 2;
        MergeSort(a, s, m);
        MergeSort(a, m + 1, e);
        merge(a, s, m, e);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    MergeSort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}
