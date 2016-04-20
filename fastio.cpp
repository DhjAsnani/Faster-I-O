#include <iostream>
#include <cstdio>
#define gc getchar_unlocked
void fastinputint(int &x)
{
register int c=gc();
x=0;
for (;(c<48||c>57);c=gc());
for (;c>47 && c<58; c=gc()) { x=(x<<1)+(x<<3)+c-48;}
}

int main()
{   

    int n,k;
    fastinputint(n);
    fastinputint(k);
    int cyris;
    int cnt=0;
    while(n--)
    {
     int num;
     fastinputint(num);
     if(num%k==0)cnt++; 
    }    
    printf("%d",cnt);
    return 0;             
}
