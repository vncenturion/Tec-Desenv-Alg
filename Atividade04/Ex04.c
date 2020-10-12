/*
URI 2157
Input
The input has an integer value C indicating the number of test cases. 
Then each case has two integer values ​​E and B ( 1 ≤ B ≤ E ≤ 12221 ), 
indicating the start and end of the sequence.

Output
For each test case, print the respective mirror sequence.
*/

#include <stdio.h>
#include <string.h>


int main() {
  int n,m,i,j,t;
  char ss[101] ;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)printf("%d",i);
      for(i=m;i>=n;i--)
      {
        sprintf( ss, "%d", i );
        for( j = strlen(ss)-1;j>=0;j--) printf("%c",ss[j]);
      }
    printf("\n");
  }
  
  return 0;
}