/*
 * =====================================================================================
 *
 *       Filename:  2.4.4-Gcd.c
 *
 *    Description:
 *    欧几里德算法计算最大公因数，两个数的最大公因数是同时整除二者的最大整数。Gcd(50,15)=5
 *
 *        Version:  1.0
 *        Created:  2017年05月24日 17时31分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  袁致远 (mn), yuanzhiyuan@nfschina.com
 *        Company:  中科方德
 *
 * =====================================================================================
 */

#include<stdio.h>

/*
 *if M>N;2logN=O(logN)
 *当相邻的两个数是斐波那契数列时，欧几里德算法复杂度最大。
 * */
unsigned int
Gcd(unsigned int M, unsigned int N){
    unsigned int Rem;
    int n=0;
    while(N>0){
        Rem=M%N;
        M=N;
        N=Rem;
        n++;
    }
    printf("n=%d\tGcd=%d\n",n, M);
    return M;
}

int main(){
    Gcd(2,1);
    return 0;
}
