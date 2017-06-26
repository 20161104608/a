//
//  main.c
//  a
//
//  Created by s20161104608 on 2017/6/22.
//  Copyright © 2017年 s20161104608. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main(int argc,const char * argv[]){
    char time[10],gps,latitude1,longitude1,year[10],s[5];
    double latitude,longitude,v,course;
    FILE *fp2;
    fp2=fopen("//Users//S20161104608//Desktop//Gps1.log","r");
    while(fp2)
    {
        if(fp2==NULL)
    {
        printf("打开文件错误，或者要打开的文件不存在");
    
    }
    else
    {
        fscanf(fp2,"SGPRMC,%6s,%c,%1f,%c,%1f,%1f,%6s,%s",time,&gps,&latitude,&latitude1,&longitude,&longitude1,&v,&course,year,s);
        if(gps=='A'){
            printf("现在为%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[0],year[1],year[2],year[3],year[4],year[5],time[0],time[1],time[2],time[3],time[4],time[5]);
            if(latitude1=='N')
            {
                printf("该位置为北纬%1f度\n",latitude);
            }
            else
            {                                                                                                                                                                                             
                printf("该位置为南纬%1f度\n",latitude);
            }
            if(longitude1=='E')
            {
                printf("该位置为东经%1f度\n",longitude);
            }
            else
            {
               printf("该位置为西经%1f度\n",longitude);
            }
                printf("地面速率是%1f节,地面航向是%1f度\n",v,course);
        }
            else
            {
                printf("无效定位\n");
            }
    }
    }
    fclose(fp2);
}
