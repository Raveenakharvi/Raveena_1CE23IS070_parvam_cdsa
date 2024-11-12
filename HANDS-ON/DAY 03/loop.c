#include<stdio.h>
int main(){
    int arr[]={1,5,15,20};

    for(int i = 0 ; i < 4 ; i++){
        switch(arr[i]){
            //range 1 to 6
            case 1 ... 6:
            printf("%d in  range 1 to 6\n");
            break;
            //range 7 to 20
            case 7 ... 20:
            printf("%d in range 7 to 20\n");
            break;
            default:
            printf("%d not in range\n");
            break;
        }
    }
    return 0;
}
