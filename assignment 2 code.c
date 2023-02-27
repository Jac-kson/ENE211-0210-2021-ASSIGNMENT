#include <stdio.h>
/*main-prints 0 to 9
 *return : 0 (success)*/

int main (void){
    char t = '0';
    while (t <= '9'){
    putchar (t);
    t = t + 1;
    }

  return 0;
}
