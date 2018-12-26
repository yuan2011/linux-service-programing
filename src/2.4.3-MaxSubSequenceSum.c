/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  最大子序列和问题
 *
 *        Version:  1.0
 *        Created:  2017年05月24日 10时46分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  袁致远 (mn), yuanzhiyuan@nfschina.com
 *        Company:  中科方德
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<unistd.h>

/*
 *ecb N-1 N-1 j    == N^3+3N^2+2N
 *    i=0 j=i k=i         6
 *    O(N^3)
 * */
int MaxSubsequenceSum1(const int A[], int N){
    int ThisSum, MaxSum, i, j, k;
    MaxSum = 0;
    for(i=0; i<N; i++){
        usleep(10000);
        for(j=i; j<N; j++){
            usleep(10000);
            ThisSum=0;
            for(k=i; k<=j; k++){
                usleep(10000);
                ThisSum += A[k];
            }
            if(ThisSum > MaxSum){
                usleep(10000);
                MaxSum = ThisSum;
            }
        }
    }
    printf("MaxSum=%f\n", (double)MaxSum);
    return MaxSum;
}

int MaxSubsequenceSum2(const int A[], int N){
    int ThisSum, MaxSum, i, j;
    MaxSum = 0;
    for(i=0; i<N; i++){
        ThisSum=0;
        for(j=i; j<N; j++){
            ThisSum += A[j];

            if(ThisSum > MaxSum){
                MaxSum = ThisSum;
            }
        }
    }
    printf("MaxSum=%d\n", MaxSum);
    return MaxSum;
}

/*
 *分治法
 *把数据分为左右两部分后求和相加
 * */
int MaxSubsequenceSum3(const int A[], int Left, int Right){
}

/*
 *联机算法：一旦数据被读入，它就不需要被记忆,在任意时刻，
 *算法都能对已经读入的数据给出子序列问题的正确答案。
 *(常量空间、线性时间运行)
 * */
int MaxSubsequenceSum4(const int A[], int N){
    int ThisSum, MaxSum, j;
    ThisSum = MaxSum = 0;
    for(j=0; j<N; j++){
        ThisSum +=A[j];

        if(ThisSum > MaxSum)
          MaxSum = ThisSum;
        else if(ThisSum < 0)
          ThisSum = 0;
    }
    printf("MaxSum=%d\n", MaxSum);
    return MaxSum;
}

int main(int argc, char ** argv[]){
    int A[]={4, -3, 5, -2, -1, 2, 6, -2};
    int N=5;
    MaxSubsequenceSum4(A, N);
    return 0;
}


