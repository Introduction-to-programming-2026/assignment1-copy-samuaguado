#include <stdio.h>

// TODO: change N if you want more inputs
const int N = 3;

// TODO: implement this function
float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // TODO: ask user for N scores and store them in scores[]
    for(int i=0; i<N; i++){
        printf("Score: ");
        scanf("%d", &scores[i]);
    }
    // Example prompt: "Score: "

    // TODO: print average
    printf("Average: %.2f\n", average(N, scores));
    // Example: printf("Average: %.2f\n", average(N, scores));
}
float average(int legnth, int array[]){
        int sum = 0;

        for(int i = 0; i< legnth; i++){
            sum = sum + array[i];
        }
        return (float)sum/legnth;
    }
