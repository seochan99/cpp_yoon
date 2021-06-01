#include <stdio.h>

int main(void)
{
    int num;
    int o=0,total=0;
    char arr[80];
    scanf("%d",&num);
    
    for(int i=0;i<num;i++)
    {
        scanf("%s",arr[i]);
    }
    
    for(int i=0;i<num;i++)
    {
        if(arr[i]=="o")
        {
            o++;
            total+=o;
        }else if(arr[i]=="x")
        {
            o=0;
        }

    }
    
    
    
    
    
    return 0;
}
