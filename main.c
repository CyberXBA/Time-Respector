#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#define A "TimeRespector says > 5 minutes passed : "
#define WAIT 1
void onemin() {

for(;;){
char            name[20] = {0}; 
    fd_set          input_set;
    struct timeval  timeout;
    int             ready_for_reading = 0;
    

    timeout.tv_sec = WAIT;  
    timeout.tv_usec = 0;

    ready_for_reading = select(1, &input_set, NULL, NULL, &timeout);
	time_t s, val =1;
	struct tm* current_time;
	s = time(NULL);
	current_time = localtime(&s);
	

if(current_time->tm_sec == 0 && current_time->tm_sec < 10){
	switch(current_time->tm_min){



case 1:
	printf(A"1/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 2:
	printf(A"2/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;

case 3:
	printf(A"3/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	
	break;

case 4:
	printf(A"4/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;


case 5:
	printf(A"5/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;


case 6:
	printf(A"6/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;


case 7:
	printf(A"7/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;

case 8:
	printf(A"8/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;

case 9:
	printf(A"9/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;

case 10:
	printf(A"10/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;


case 11:
	printf(A"11/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 12:
	printf(A"12/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 13:
	printf(A"13/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 14:
	printf(A"14/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 15:
	printf(A"15/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 16:
	printf(A"16/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 17:
	printf(A"17/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 18:
	printf(A"18/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 19:
	printf(A"19/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 20:
	printf(A"20/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 21:
	printf(A"21/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 22:
	printf(A"22/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 23:
	printf(A"23/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 24:
	printf(A"24/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 25:
	printf(A"25/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 26:
	printf(A"26/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 27:
	printf(A"27/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 28:
	printf(A"28/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 29:
	printf(A"29/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 30:
	printf(A"30/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 31:
	printf(A"31/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 32:
	printf(A"32/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 33:
	printf(A"33/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 34:
	printf(A"34/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 35:
	printf(A"35/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 36:
	printf(A"36/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 37:
	printf(A"37/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 38:
	printf(A"38/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 39:
	printf(A"39/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 40:
	printf(A"40/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 41:
	printf(A"41/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 42:
	printf(A"42/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 43:
	printf(A"43/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 44:
	printf(A"44/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 45:
	printf(A"45/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 46:
	printf(A"46/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 47:
	printf(A"47/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 48:
	printf(A"48/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 49:
	printf(A"49/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 50:
	printf(A"50/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 51:
	printf(A"51/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 52:
	printf(A"52/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 53:
	printf(A"53/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 54:
	printf(A"54/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 55:
	printf(A"55/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 56:
	printf(A"56/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 57:
	printf(A"57/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 58:
	printf(A"58/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 59:
	printf(A"59/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 60:
	printf(A"60/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;
case 0:
	printf(A"0/60 , ");
	printf("%02d:%02d:\n",current_time->tm_hour,current_time->tm_min);
	system("mpg123 -q test.mp3");
	break;

default:
	break;




}
}
}



}



int main(){
char cmd[10];
printf("▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n█▄▄░▄▄█▄░▄█░▄▀▄░█░▄▄██░▄▄▀█░▄▄█░▄▄█▀▄▄▀█░▄▄█▀▄▀█▄░▄█▀▄▄▀█░▄▄▀██\n███░████░██░█▄█░█░▄▄██░▀▀▄█░▄▄█▄▄▀█░▀▀░█░▄▄█░█▀██░██░██░█░▀▀▄██\n███░███▀░▀█▄███▄█▄▄▄██░██░█▄▄▄█▄▄▄█░████▄▄▄██▄███▄███▄▄██▄█▄▄██\n▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n");
printf("[!] Choose one: 1(one minute) 2(2 minutes) 3(5 minutes)\n > ");
scanf("%s", cmd);
if(strcmp(cmd,"1")==0)
	onemin();
else
	exit(0);






}
