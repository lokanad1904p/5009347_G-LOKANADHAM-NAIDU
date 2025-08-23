#include <stdio.h>
int main() 
{
    char time[11];
    scanf("%s",time);

    int hr=(time[0]-'0')*10+(time[1]-'0');//hour conversion takes place
    if (time[8]=='A')
    {
        if(hr==12)
        {
            time[0]='0';
            time[1]='0';
        }
    }
    else 
    {
        if(hr!=12)
        {
            hr+=12;
            time[0]=(hr/10)+'0';
            time[1]=(hr%10)+'0';
        }
    }
    time[8]='\0';
    printf("%s\n",time);
    return 0;
}




