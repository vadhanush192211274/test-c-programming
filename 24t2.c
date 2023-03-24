#include<stido.h>
int main()
{
union a
{
int i;
char ch[2];
};
union a u;
u.chr[0]=3;
u.chr[1]=2;
printf("%d,%d,%d\n",u.chr[0],u.chr[1],u.i);
return o;
}
