#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
    int p=0,q=0,r=0;
    for(int i=0;i<size;i++){
        if (t[i]>p){
            r=q;
            q=p;
            p=t[i];
        }
        if (t[i]>q && t[i]<p){
            r=q;
            q=t[i];
        }
        if (t[i]>r && t[i]<q){
            r=t[i];
        }
    }
    return r;
}
