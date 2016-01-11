#ifndef app_h
#define app_h
#include <access.h>

 #define date_len 50
 struct date_info{int d,m,y,total;};
 struct date_info Age(char *bdate, char *tdate);

 Public int sc_dl();
 Public int numl();
 Public int capsl();
 Public int scrll();
 Public int Age_main();
 Public int cls_pmos();
 Public int calculator();
 Public int cursor_pos();
 Public int ata_read_print();
 Public int optd();
 Public void ui_events_viewer();
 
 Private int calc_days(int aaa);
 Private void make_total(struct date_info *aa);
 Private void fill_date_info(char *date,struct date_info *a);
 Private int no_leaps(int year);
#endif
