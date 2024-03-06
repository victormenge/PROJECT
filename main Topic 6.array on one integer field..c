#include <stdio.h>

typedef struct {
    int id;
    char name[50];
} Record;

// Function to swap two records
void swap(Record *a, Record *b) {
    Record temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform sorting based on ID field
void sortRecords(Record arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    Record records[] = {
        {3, "Alice"},
        {1, "Bob"},
        {2, "Charlie"}
    };

    int n = sizeof(records) / sizeof(records[0]);

    printf("Records before sorting based on ID:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    sortRecords(records, n);

    printf("\nRecords after sorting based on ID:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    return 0;
}
