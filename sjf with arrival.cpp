#include<stdio.h>

void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum, int at[]) {
    int remaining_time[n];
    for (int i = 0; i < n; i++)
        remaining_time[i] = bt[i];
    int t = 0; // Current time
    while (1) {
        int done = 1;
        for (int i = 0; i < n; i++) {
            if (at[i] <= t && remaining_time[i] > 0) {
                done = 0; // There is a pending process
                if (remaining_time[i] > quantum) {
                    t += quantum;
                    remaining_time[i] -= quantum;
                }
                else {
                    t = t + remaining_time[i];
                    wt[i] = t - bt[i] - at[i];
                    remaining_time[i] = 0;
                }
            }
        }
        if (done == 1)
            break;
    }
}

void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findAvgTime(int processes[], int n, int bt[], int quantum, int at[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    findWaitingTime(processes, n, bt, wt, quantum, at);
    findTurnAroundTime(processes, n, bt, wt, tat);
    printf("Processes  Arrival Time  Burst Time  Waiting Time  Turnaround Time\n");
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf(" %d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i], at[i], bt[i], wt[i], tat[i]);
    }
    printf("\nAverage Waiting Time = %.2f", (float)total_wt / n);
    printf("\nAverage Turnaround Time = %.2f", (float)total_tat / n);
}

int main() {
    int processes[] = {1, 2, 3}; // Process IDs
    int arrival_time[] = {0, 1, 2}; // Arrival time of processes
    int burst_time[] = {10, 5, 8}; // Burst time of processes
    int n = sizeof(processes) / sizeof(processes[0]); // Number of processes
    int quantum = 2; // Time quantum
    findAvgTime(processes, n, burst_time, quantum, arrival_time);
    return 0;
}

