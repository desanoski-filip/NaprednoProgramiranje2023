#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, time, localtime, asctime */

// Filip Desanoski INKI 1015

int main ()
{
  time_t rawtime;         // deklarira promenliva za skladiranje na raw(neobrabotena) vremenska vrednost
  struct tm * timeinfo;   // deklarira pointer na struktura od tip "tm" za skladiranje na podelenata vremenskata vrednost

  time ( &rawtime );      // ja dobiva momentalnata vremenska vrednost i ja skladira vo promenlivata "rawtime" koristejki time() funkcija*/
  timeinfo = localtime ( &rawtime );  /* ja pretvora neobrabotenata vremenska vrednost vo podelena vremenska vrednost vo 
                                        lokalnata vremenska zona koristejki localtime() funkcija */

  /* funkcijata asctime() ja konvertira podelenata vremenska vrednost vo string citliv za covek
  sto go pretstavuva datumot i vremeto i go pecati so pomos na funkcijata printf() . */
  printf ( "The current date/time is: %s", asctime (timeinfo) );

  return 0;  
}
