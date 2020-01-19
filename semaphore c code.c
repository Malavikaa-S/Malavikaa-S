#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int n,i,g=0;
int sem=0;
void wait()
{
    sem-=1;

}
void signal()
{
    sem+=1;
}
void block()
{
    g+=1;
}
void unblock()
{
    g-=1;
}
void disp(char *str)
{

    print("\n %3d %30s, balls in bag %d/t ball => %d. i+1, str, sem,g);
          ")
}
void golfer()
{
    if(sem>0)
    {
        wait();
        disp("a ball hit");
    }
    else
    {
        block();
        disp("needs more balls");
        i--;
    }
}
void retr()
{
    if(sem<20)
    {
        signal();
        disp("retriver fill balls;
        if(g)
        {
            unblock();
            i++;
            golfer();
        }
    }
}
int main(int argc,char *argv[])
{
    srand(time (0));
    for(i=0;i<16;i++)
        if(rand()%2)
    {
        retr();

    }
    else
    {
        golfer();
    }
    printf("\n");
}
