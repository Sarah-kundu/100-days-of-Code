#include<stdio.h>

int main(){
    char ch[10];

    printf("Enter a string");
    scanf("%c", ch);

    for(int i=0; ch[i]!= '\n'; i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            ch[i]==' ';
        }
    }

    printf("The new string is %c", ch);

    getchar();
    getchar();
    return 0;
    

}