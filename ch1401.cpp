#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
char s[N];
int n,l1,r1,l2,r2;
unsigned long long f[N],p[N];
int main(){
    scanf("%s%d",s+1,&n);
    int m=strlen(s+1); p[0]=1;
    for (int i=1;i<=m;++i){
        f[i]=f[i-1]*131+(s[i]-'a'+1);
        p[i]=p[i-1]*131;
    }
    for (int i=1;i<=n;++i){
        scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
        if (f[r1]-f[l1-1]*p[r1-l1+1]==f[r2]-f[l2-1]*p[r2-l2+1]) printf("Yes\n");
            else printf("No\n");
    }
    return 0;
}