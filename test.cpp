#include<stdio.h>
//#include<string.h>
int main()
{
    char names[100];
    int i;
    gets(names);
    int n=strlen(names);
    for(i=0;i<n;i++){
        if(names[i]>='a'&&names[i]<='z'){
            names[i]='A'+(names[i]-'a');
        }
    }
    printf("%s",names);
}
