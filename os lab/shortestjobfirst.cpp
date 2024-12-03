#include <stdio.h>
// #include <conio.h>

int main() {
    int bt[20], wt[20], tat[20], i, n;  // Specify the size for wt[]
    float wtavg, tatavg;

    // Assuming 'discr()' is defined elsewhere if needed, otherwise remove it.
    // discr();

    printf("\nEnter the number of processes -- ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {  // Corrected the 'for' loop syntax
        printf("\nEnter the Burst Time for Process %d -- ", i + 1);  // Correct loop to ask burst time for each process
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;  // First process has no waiting time
    tat[0] = bt[0];  // Turnaround time for first process is its burst time
    wtavg = 0;  // Initialize wtavg
    tatavg = bt[0];  // Initialize tatavg with the first process' burst time

    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = tat[i - 1] + bt[i];
        wtavg += wt[i];
        tatavg += tat[i];
    }

    printf("\nPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME");
    for (i = 0; i < n; i++) {
        printf("\n%d\t\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);  // Removed '\p' and formatted correctly
    }

    printf("\nAverage Waiting Time -- %f", wtavg / n);
    printf("\nAverage Turnaround Time -- %f", tatavg / n);

    // If 'getch()' is needed and <conio.h> is included, uncomment the line below
    // getch();

    return 0;  // Add return 0 for int main()
}



