#include <stdio.h>
#include <stdlib.h>

char C[3][3] = {{'_', '_', '_'}, {'_', '_', '_'},{'_', '_', '_'}};
int attemp = 9;
int row;
int column;
void tampilan(){
    printf("Tic Tac Toe\n");
    for(int baris = 0; baris < 3; baris++){
        for(int kolom = 0; kolom < 3; kolom++){
            printf("%c ", C[baris][kolom]);
        }
        printf("\n");
    }
}
int masukan1(){
    printf("giliran player 1\n");
    printf("pilih baris: ");
    scanf("%d", &row);
    printf("pilih kolom: ");
    scanf("%d", &column);
    return 0;
}
int masukan2(){
    printf("giliran player 2\n");
    printf("pilih baris: ");
    scanf("%d", &row);
    printf("pilih kolom: ");
    scanf("%d", &column);
    return 0;
}
void mekanik1(){
    if(row >= 1 && row <= 3 && column >= 1 && column <= 3){
            if(C[row-1][column-1] != 'X' && C[row-1][column-1] != 'O'){
                C[row-1][column-1] = 'X';
                attemp--;
            }else{
                printf("sudah terisi\n");
                masukan1();
                mekanik1();
            }
        }else{
            printf("masukan salah\n");
            masukan1();
            mekanik1();
        }
}
void mekanik2(){
    if(row >= 1 && row <= 3 && column >= 1 && column <= 3){
            if(C[row-1][column-1] != 'X' && C[row-1][column-1] != 'O'){
                C[row-1][column-1] = 'O';
                attemp--;
            }else{
                printf("sudah terisi\n");
                masukan2();
                mekanik2();
            }
        }else{
            printf("masukan salah\n");
            masukan2();
            mekanik2();
        }
}
int cek(){
    if(C[0][0] == 'X' && C[0][1] == 'X' && C[0][2] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[1][0] == 'X' && C[1][1] == 'X' && C[1][2] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[2][0] == 'X' && C[2][1] == 'X' && C[2][2] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[0][0] == 'X' && C[1][0] == 'X' && C[2][0] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[0][1] == 'X' && C[1][1] == 'X' && C[2][1] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[0][2] == 'X' && C[1][2] == 'X' && C[2][2] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }

    else if(C[0][0] == 'O' && C[0][1] == 'O' && C[0][2] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[1][0] == 'O' && C[1][1] == 'O' && C[1][2] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[2][0] == 'O' && C[2][1] == 'O' && C[2][2] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[0][0] == 'O' && C[1][0] == 'O' && C[2][0] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[0][1] == 'O' && C[1][1] == 'O' && C[2][1] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[0][2] == 'O' && C[1][2] == 'O' && C[2][2] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[0][0] == 'X' && C[1][1] == 'X' && C[2][2] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[0][0] == 'O' && C[1][1] == 'O' && C[2][2] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }
    else if(C[0][2] == 'X' && C[1][1] == 'X' && C[2][0] == 'X'){
        printf("Player 1 is The Winner\n");
        return 1;
    }
    else if(C[0][2] == 'O' && C[1][1] == 'O' && C[2][0] == 'O'){
        printf("Player 2 is The Winner\n");
        return 1;
    }else if(attemp == 0){
        printf("draw\n");
        return 1;
    }
}
int main(int argc, char *argv[]){
    while(attemp > 0){
        tampilan();
        masukan1();
        mekanik1();
        if(cek()==1){
            break;
        }

        tampilan();
        masukan2();
        mekanik2();
        if(cek()==1){
            break;
        }

    }
    return 0; 
}