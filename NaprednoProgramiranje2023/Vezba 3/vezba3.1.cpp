/* ctime example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, time, ctime */

// Filip Desanoski INKI 1015

int main ()
{
  time_t rawtime;  // deklarira promenliva za skladiranje na raw(neobrabotena) vremenska vrednost

  time (&rawtime);  /* ja dobiva momentalnata vremenska vrednost i ja skladira vo promenlivata 
                        "rawtime" koristejki time() funkcija*/

  /* ja koristi funkcijata ctime() za da ja konvertira rawtime vrednosta vo string citliv za covek 
  sto go pretstavuva lokalnoto vreme i go pecati koristejki ja funkcijata printf()*/
  printf ("The current local time is: %s", ctime (&rawtime));

  return 0;  
}
