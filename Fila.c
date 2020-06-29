#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 1000

int main() {
    int n, k, m, j, v[tam], w[tam], i,cont=0, z;
    scanf("%d", &n);
    for(k=0;k<n;k++){
        cont=0;
        scanf("%d", &m);
        for(j=0;j<m;j++){v[j]=0;}
        for(j=0;j<m;j++){scanf("%d", &v[j]);}
        for(i=0;i<m;i++){w[i]=v[i];}
        for(j=0;j<m;j++)for(i=0;i<m;i++){
            if(i<j &&v[j]>v[i]){z=v[i];v[i]=v[j];v[j]=z;}}
        
        /*for(j=0;j<m;j++)printf("%d ", v[j]);*/
        for(j=0;j<m;j++){if(v[j]==w[j])cont++;} 
        printf("%d\n", cont);
        
    }
	return 0;
}