/*
 * =====================================================================================
 *
 *       Filename:  2.4.4-BinarySearch.c
 *
 *    Description: 给定X和排好序的A0,
 *    A1...AN-1,求使得Ai=X的下标i，如果X不再数据中返回i=-1.
 *
 *        Version:  1.0
 *        Created:  2017年05月24日 17时00分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  袁致远 (mn), yuanzhiyuan@nfschina.com
 *        Company:  中科方德
 *
 * =====================================================================================
 */

#include<stdio.h>
#define NotFound -1
#define ElementType int

/*
 *数据已经排好顺序，使用二分法查找（对分查找）
 *从High-Low=N-1开始，并在High-Low>=-1结束，O(logN)=log(N-1)+2
 * */
int 
BinarySearch(const ElementType A[], ElementType X, int N){
    int Low, Mid, High;
    Low = 0; High = N-1;
    while(Low < High){
        Mid=(Low+High)/2;
        if(A[Mid]<X)
          Low=Mid+1;
        else if(A[Mid]>X)
          High=Mid-1;
        else
          return Mid; //found
    }
    return NotFound;   //notfound is define -1

}

int main(){
    int A[]={1, 2, 6, 8, 30, 66, 78};
    int N=7;
    printf("mid=%d\n", BinarySearch(A, 8, N));
    return 0;
}


