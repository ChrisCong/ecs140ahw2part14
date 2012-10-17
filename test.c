#include <stdio.h>
#include <stdlib.h>
int i ;
int bc(char *arr, int size, int lno, int subscript, int lowerbound, int upperbound){
if(subscript<=upperbound - lowerbound+1 && subscript>=0) return subscript;
else {fprintf(stderr, "subscript (%d) out of bounds for array %s[%d:%d] on line %d\n", subscript, arr, lowerbound, upperbound, lno);exit(1);}}
main() 
{
int 
x_array
[
 19
];
int x_array_size=192, array_e_upperbound=20, array_e_lowerbound=2, array_linenumber=2 ;
char *array_name="array";
for (i = 0; i < x_array_size+1; i++) x_array[i]=4444;
}
