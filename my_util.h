#ifndef MY_UTIL_H
#define MY_UTIL_H


//API

void rand_array(int n, int x[], int min, int max);
void rand_array_float(float n, float x[], float min, float max);
void print_array(int a, int x[], char label[]);
float get_ave(int a, int x[]);
int get_sum(int n, int x[]);
int get_count(int n, int x[], int min, int max);
int get_max(int n, int x[]);
int get_values_in_range(int n, int in[], int out[], int min, int max);


//sequence

int delete(int n, int x[], int y[], int k);
int insert(int n, int x[], int y[], int k, int p);






#endif // MY_UTIL_H
