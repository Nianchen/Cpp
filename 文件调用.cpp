#include<stdio.h>
#include <cstdlib>
int main(){
    FILE *fp;
    char ch;
   
    //����ļ������ڣ�������ʾ���˳�
    if( (fp=fopen("E:\\demo.txt","rt")) == NULL ){
        puts("Fail to open file!");
        exit(0);
    }
    //ÿ�ζ�ȡһ���ֽڣ�ֱ����ȡ���
    while( (ch=fgetc(fp)) != EOF ){
        putchar(ch);
    }
    putchar('\n');  //������з�
    fclose(fp);
    return 0;
}
