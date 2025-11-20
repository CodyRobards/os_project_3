#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN  50
typedef struct{
    int pages_num;
    int curr;
    int pages[MAXLEN];
    int faults;
    int used[MAXLEN];

}memory;
memory* memory_init(int n){
   // TO-DO
}

int search_process(memory* m, int process);
void add_process(memory* m, int process);
void display_pages(memory* m);
int memory_FIFO(int num);

int search_process(memory* m, int process){
    // TO-DO
}


void add_process(memory* m, int process){
   // TO-DO
}

void display_pages(memory* m){
   // TO- DO
}

int memory_FIFO(int num){
    memory* m = memory_init(num);
    int input;
    printf("Replacement Policy = FIFO\n");
    printf("-------------------------------------\n");
    printf("Page   Content of Frames\n");
    printf("----   -----------------\n");
    while(1){
        scanf("%d", &input);
        if(input == -1)
            break;
        add_process(m, input);
    }
    printf("-------------------------------------\n");
    printf("Number of page faults = %d\n", m->faults);
    return 0;
}

int main(){
    int num;
    char algo[6];

    scanf("%d", &num);
    scanf("%s", algo);
    //printf("%s", algo);

    if(strcmp(algo, "FIFO") == 0)
        memory_FIFO(num);
}
