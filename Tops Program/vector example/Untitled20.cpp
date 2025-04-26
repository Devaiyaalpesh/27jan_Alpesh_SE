#include<iostream>

struct tag{
auto int x;
static int y;
};
main()
{
struct tag s;
s.x=4;
s.y=5;
printf("%d",s.x);
}

