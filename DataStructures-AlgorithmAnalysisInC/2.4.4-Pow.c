/*
 * =====================================================================================
 *
 *       Filename:  2.4.4-Pow.c
 *
 *    Description:  幂运算,计算X^N
 *
 *        Version:  1.0
 *        Created:  2017年05月24日 18时11分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  袁致远 (mn), yuanzhiyuan@nfschina.com
 *        Company:  中科方德
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdbool.h>
#define isEven(N) N&1? false: true //偶数为true，奇数为false
int
Pow(long int X, int N){
   if(N==0) 
     return 1;
   if(N==1)
     return X;
   if(isEven(N))
     return Pow(X*X, N/2);
   else
     return Pow(X*X, N/2)*X;
}

int main(){
    printf("pow=%d\n", Pow(3,2));
    return 0;
}
