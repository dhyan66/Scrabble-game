#include <stdio.h>
#define length 70
int main(){
    int n; // array size
    scanf("%d",&n);
    int w; // number of words
    scanf("%d",&w);
    // declaring the variables
    char array[n][n];

    for(int i =0; i<n; i++){
        for(int j=0; j<n;j++){
            array[i][j] = '.';
        }
    }

    for (int i = 0; i < w; i++) {

        int x;
        int y;
        char d;
        char s[length];

        scanf("%d %d %c %s", &x, &y, &d, s);

        int index = 0;
        char store;
       store = s[0];
        while (s[index] != '\0') {
            if (d == 'H') {
                if(store == s[index] || array[y][x+index] == '.'){
                    array[y][x+index] = s[index] ;
                    store = s[index];
                }
                else if(store!=s[index]){
                    printf("Invalid word placement: (%d,%d) \n",x,y);
                }
            }
            else if (d == 'V') {
                if(store == s[index] || array[y+index][x] == '.'){
                    array[y+index][x] = s[index];
                    store = s[index];
                }
                else if(store!=s[index]){
                    printf("Invalid word placement: (%d,%d) \n",x,y);
                }
            }

            index++;
        }
    }
    int f;
    scanf("%d",&f);


    for(int i =0; i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",array[i][j]);
        }
        printf("\n");

    }
    return 0;


}