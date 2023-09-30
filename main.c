#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9][9] = {{0,0,9,0,0,0,1,0,0},
                     {0,0,0,4,0,5,0,0,0},
                     {8,0,0,0,3,0,0,0,2},
                     {0,5,0,1,0,7,0,6,0},
                     {0,0,1,0,0,0,3,0,0},
                     {0,6,0,5,0,3,0,7,0},
                     {1,0,0,0,5,0,0,0,9},
                     {0,0,0,7,0,4,0,0,0},
                     {0,0,2,0,0,0,8,0,0}};


    printGame(arr, 9,9);
    GameOptions();

    int op, numRow, numCol, num;

    while(1){

        printf("op = ");
        scanf("%d", &op);

        if(op == 1){
            printf("numRow = ");
            scanf("%d", &numRow);
            printf("numCol = ");
            scanf("%d", &numCol);
            printf("num = ");
            scanf("%d", &num);
            system ("cls");
            addNumber(arr, 9,9, numRow, numCol, num);
            GameOptions();
        }

        if(op == 2){
            printf("numRow = ");
            scanf("%d", &numRow);
            printf("numCol = ");
            scanf("%d", &numCol);
            system ("cls");
            deleteNumber(arr ,9,9,numRow, numCol);
            GameOptions();

        }

        if(op == 3){
            system ("cls");
            printGame(arr, 9,9);
            GameResult();
            break;

        }


    }
    return 0;
}
