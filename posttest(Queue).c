#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 3

typedef struct{
int count;
int front;
int rear;
int item[MAXQUEUE];
}QUEUE;

QUEUE antrean;

void inisialisasi(QUEUE *Q){
Q->count=0;
Q->front=0;
Q->rear=0;
}

int isEmpty(QUEUE *Q){
int hasil=0;
if (Q->count==0){
hasil=1;
}
return hasil;
}

int isFull(QUEUE *Q){
int hasil=0;
if (Q->count==MAXQUEUE){
hasil=1;
}

return hasil;
}

void insert(QUEUE *Q, int data){
    if (isFull(Q)){
        printf("Antrian penuh\n");
    }else{
        Q->item[Q->rear]=data;
        Q->rear=(Q->rear+1)%MAXQUEUE;
        Q->count++;
    }
}
void hapus(QUEUE *Q){
    if (isEmpty(Q)){
        printf("Antrian sudah kosong \n");
    }else{
        Q->front=(Q->front+1)%MAXQUEUE;
        Q->item[Q->front] = 0; 
        Q->count--;
    }
}

void printQueue(QUEUE *Q){
    int i;
    if (isEmpty(Q)){
        printf("Antrian kosong \n");
    }else{
            printf("Antrean mahasiswa ");
        for (i=Q->front;i!=Q->rear;i=(i+1)%MAXQUEUE){
            printf("%d ",Q->item[i]);
        }
        printf("\n");
    }
}

int main(){
inisialisasi(&antrean);

printf("Masukan 17\n");
insert(&antrean, 17);
printQueue(&antrean);

printf("Masukan 45\n");
insert(&antrean, 45);
printQueue(&antrean);

printf("Masukan 77\n");
insert(&antrean, 77);
printQueue(&antrean);

printf("Menghapus 17 dari antrean\n");
hapus(&antrean);
printQueue(&antrean);

printf("Masukan 15\n");
insert(&antrean, 15);
printQueue(&antrean);

return 0;
}
