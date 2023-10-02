static int zeros = 56;

void printGame(int arr[][9], int row, int col){

    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            if(((i == 0 && j == 2) || (i == 0 && j == 6)) || ((i == 1 && j == 3) || (i == 1 && j == 5)) || ((i == 2 && j == 0) || (i == 2 && j == 4) || (i == 2 && j == 8)) || ((i == 3 && j == 1) || (i == 3 && j == 3) || (i == 3 && j == 5) || (i == 3 && j == 7)) || ((i == 4 && j == 2) || (i == 4 && j == 6)) || ((i == 5 && j == 1) || (i == 5 && j == 3) || (i == 5 && j == 5) || (i == 5 && j == 7)) || ((i == 6 && j == 0) || (i == 6 && j == 4) || (i == 6 && j == 8)) || ((i == 7 && j == 3) || (i == 7 && j == 5)) || ((i == 8 && j == 2) || (i == 8 && j == 6))){
                printf("\033[1;31m%d   ", arr[i][j]);
            }

            else{
                if(arr[i][j] == 0){
                    printf("\033[1;37m%d   ", arr[i][j]);
                }
                else{
                    printf("\033[1;32m%d   ", arr[i][j]);
                }
            }

        }

        printf("\n\n");

    }

}

void addNumber(int arr[][9], int row, int col,int numRow, int numCol, int num){

    if(numRow == 0){

        if(numCol == 2 || numCol == 6){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{
                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, 9,9);
                zeros--;
            }

        }


    }

    if(numRow == 1){

        if(numCol == 3 || numCol == 5){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, 9,9);
                zeros--;
            }
        }

    }

    if(numRow == 2){

        if(numCol == 0 || numCol == 4 || numCol == 8){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }
            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
        }


    }

    if(numRow == 3){

        if(numCol == 1 ||numCol == 3 || numCol == 5 || numCol == 7){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

         else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }
            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
    }


    }

    if(numRow == 4){

        if(numCol == 2 || numCol == 6){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

         else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
    }


    }

    if(numRow == 5){

        if(numCol == 1 ||numCol == 3 || numCol == 5 || numCol == 7){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

         else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
    }


    }

    if(numRow == 6){

        if(numCol == 0 || numCol == 4 || numCol == 8){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

         else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
    }


    }

    if(numRow == 7){

        if(numCol == 3 || numCol == 5){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

         else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
    }


    }

    if(numRow == 8){

        if(numCol == 2 || numCol == 6){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

         else{
            int rowFlag = 1, colFlag = 1, rIndex, cIndex;
            for(int i = 0; i < col; i++){

                if(arr[numRow][i] == num){
                    rowFlag = 0;
                    cIndex = i;
                }

            }

            for(int i = 0; i < row; i++){

                if(arr[i][numCol] == num){
                    colFlag = 0;
                    rIndex = i;
                }

            }

            if(rowFlag == 0){

                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,numRow, cIndex);
                printGame(arr, 9,9);

            }

            else if(colFlag == 0){
                printf("\033[1;31m%d exists in (%d, %d)\n\n", num,rIndex, numCol);
                printGame(arr, 9,9);
            }

            else{

                arr[numRow][numCol] = num;
                printf("\n");
                printGame(arr, row, col);
                zeros--;
            }
        }


    }

}

void deleteNumber(int arr[][9], int row, int col,int numRow, int numCol){

    static int deletes = 2;

    if(numRow == 0){

        if(numCol == 2 || numCol == 6){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }

        }

    }

    if(numRow == 1){

        if(numCol == 3 || numCol == 5){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }

    }

    if(numRow == 2){

        if(numCol == 0 || numCol == 4 || numCol == 8){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }
    }

    if(numRow == 3){

        if(numCol == 1 ||numCol == 3 || numCol == 5 || numCol == 7){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }

    }

    if(numRow == 4){

        if(numCol == 2 || numCol == 6){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }
    }

    if(numRow == 5){

        if(numCol == 1 ||numCol == 3 || numCol == 5 || numCol == 7){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }

    }

    if(numRow == 6){

        if(numCol == 0 || numCol == 4 || numCol == 8){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }

    }

    if(numRow == 7){

        if(numCol == 3 || numCol == 5){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }
    }

    if(numRow == 8){

        if(numCol == 2 || numCol == 6){
            printf("\033[1;31mSecured Number\n\n");
            printGame(arr, 9,9);
        }

        else{
            if(arr[numRow][numCol] != 0){
                deletes--;
            }
            zeros++;
            if(deletes >= 0){
                arr[numRow][numCol] = 0;
                printf("You have %d times to delete numbers\n\n", deletes);
                printGame(arr, row, col);
            }

            else if(deletes < 0){
                printf("You have 0 times to delete numbers\n\n");
                printGame(arr, row, col);
            }
        }
    }


}

void GameResult(){

    if(zeros > 0){

        printf("\033[1;31mTry Again, %d Numbers is Missed\n\n", zeros);

    }

    else if(zeros == 0){

        printf("\033[1;32mCongratulations!\n\n");

    }

}

void GameOptions(){

    printf("\n\n");
    printf("\033[1;34mOptions:\n");
    printf("\033[1;33m1- Enter 1 to Add / Edit Number\n");
    printf("2- Enter 2 to Delete Number\n");
    printf("3- Enter 3 to Display The Result\n\n");

}
