#include <stdio.h>
#include <stdlib.h>

int main()
{
    //example array1 {{1,2,1,1} , {2,0,0,1}  , {1,0,0,3} , {1,1,3,0}}
    //example array2 {{1,0,0,3} , {1,1,3,0}  , {2,0,0,1} , {1,2,1,1}}

    int n;
    printf("How much should the arrays be? (For example, if we want 4 to 4, we must enter 4) ");
    scanf("%d" , &n);

    int array[n][n];
    int array1[n][n];
    int count = 0 ;
    int count1 = 0;

    //1.arrays elements
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
            printf("1. Array[%d][%d] ==> " , i+1 , j+1);
            scanf("%d" ,&array[i][j]);
        }
    }
    printf("\n");

    //2.arrays elements
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
            printf("2. Array[%d][%d] ==> " , i+1 , j+1);
            scanf("%d" ,&array1[i][j]);
        }
    }

    printf("\n");


    for(int i = 0 ;  i<n ; i++){
        for(int j = 0 ; j<n ; j++ ){
                for(int k=0 ; k<n ; k++){

                    if(array[i][k] == array1[j][k]){
                    count++;

                }

                if(count==n){
                    count1++;
                    for(int g=0 ; g<n ; g++){
                        array1[j][g]=-1;

                    }
                }

            }
            count = 0;
        }
    }


    if(count1 == n ){
        printf("These two graphs are isomorphic.");
    }
    else{
        printf("these graphs are not isomorphic");
    }
}
