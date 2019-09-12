#include <stdio.h>
#include "car.h"

//�ۤv�w�q��function��""
int main(void)
{
	int ch;

	blocks_read();
	//�q���Ū�����̦���ê��
	jewels_read();

    map_reset();
    blocks_put_on_map();
    jewels_put_on_map();
    car_put_on_map();
    #ifndef ONLINE_JUDGE
    map_show();
    #endif

#ifndef ONLINE_JUDGE
	freopen("actions.txt", "r", stdin);
#endif

	while ((ch=getchar()) != EOF) {
		if (ch=='R') {
			car_rotate90();
		}

		if (ch=='F') {
			car_move();
		}

		map_reset();
		blocks_put_on_map();
		jewels_put_on_map();
		car_put_on_map();

#ifndef ONLINE_JUDGE
		map_show();
#endif
	}


	printf("Earnings: %d\n", car_earnings);
	printf("Position: row=%d, col=%d\n", car_row, car_col);
	char dirs[] = "RDLU";
	printf("Direction: %c\n", dirs[car_direction]);


	return 0;
}
void blocks_read(void)
{
	int n, i;
	int row, col;
#ifndef ONLINE_JUDGE
	freopen("blocks.txt", "r", stdin);
#endif
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d%d", &row, &col);
		blocks[row][col] = 1;
	}
}
void jewels_read(void)
{
	int n, i;
	int row, col;
#ifndef ONLINE_JUDGE
	freopen("jewels.txt", "r", stdin);
#endif
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d%d", &row, &col);
		jewels[row][col] = 1;
	}
}
void blocks_put_on_map(void)
{
	int i, j;
	for (i=0; i<MAP_SIZE; i++) {
		for (j=0; j<MAP_SIZE; j++) {
			if (blocks[i][j])
				map[i][j] = '#';
		}
	}
}
void jewels_put_on_map()
{
	int i, j;
	for (i=0; i<MAP_SIZE; i++) {
		for (j=0; j<MAP_SIZE; j++) {
			if (jewels[i][j])
				map[i][j] = '$';
		}
	}
}
void map_reset(void)
{
	int i, j;
	for (i=0; i<MAP_SIZE; i++) {
		for (j=0; j<MAP_SIZE; j++) {
			map[i][j] = '.';
		}
	}
	for (i=0; i<MAP_SIZE; i++) {
		map[i][0] = 'H';
		map[i][MAP_SIZE-1] = 'H';
	}
	for (j=0; j<MAP_SIZE; j++) {
		map[0][j] = 'H';
		map[MAP_SIZE-1][j] = 'H';
	}
}

void map_show(void)
{
	int i, j;
	for (i=0; i<MAP_SIZE; i++) {
		for (j=0; j<MAP_SIZE; j++) {
			printf("%c", map[i][j]);
		}
		printf("\n");
	}

}
void car_put_on_map(void)
{
	int i, j;
	for (i=0; i<CAR_SIZE; i++) {
		for (j=0; j<CAR_SIZE; j++) {
			map[i+car_row][j+car_col] = car[i][j];
		}
	}
}

void car_rotate90(void)
{
	int tem[CAR_SIZE][CAR_SIZE], i, j;
	for(i=0; i<CAR_SIZE; i++){
        for (j=0; j<CAR_SIZE; j++){
            tem[j][CAR_SIZE-1]=  car[i][j];
        }
	}
    for(i=0; i<CAR_SIZE; i++){
        for (j=0; j<CAR_SIZE; j++){
            car[i][j]=  tem[i][j];
        }
	}
	car_direction = (car_direction+1)%4;
}

void car_move(void)
{
	/* your code */
	int car_row_try = car_row;
	int car_col_try = car_col;
	int i, j, vaild ;
	if (car_direction == 0){
        car_col_try++;
	}else if (car_direction == 1){
	    car_row_try++;
	}else if (car_direction == 2){
	    car_col_try--;
	}else if(car_direction == 3){
	    car_row_try--;
	}
	vaild = 1;
	for (i=0; i<CAR_SIZE; i++){
        for (j=0; j<CAR_SIZE; j++){
            if (blocks[car_row_try+1][car_col_try +1] ||
                map[car_row_try+1][car_col_try +1])
                    vaild = 0;
        }
	}
	if (vaild){
        car_row = car_row_try;
        car_col = car_col_try;
	}
	for (i=0; i<CAR_SIZE; i++){
        for (j=0; j<CAR_SIZE; j++){
            if (jewels[car_row+i][car_row+j])
            car_earnings++;
            jewels[car_row+i][car_row+j] ==0;
        }
	}
}
