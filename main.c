//
// Created by mihon on 2017/6/7.
//
/*
 *  这里是多行注释
 *  clion 构建快捷键 ctrl + f9
 *        运行快捷键 shift + f10
 */
#include<stdio.h> /* 这里好像缺少头文件哦*/

int main() { /*这里没有主函数名称的 -> 这里输入我们的主函数*/
    printf("Hello World!\n"); /*看下打印语句是否正确*/
    printf("C程序中一定是从我开始的\n");
    printf("你是我的小呀小苹果儿\n");
    printf("怎么爱你都不嫌多\n");
    printf("红红的小脸温暖我的心窝\n");
    printf("点亮我生命的火 火火火火\n");
//  这是一首思念家乡的诗
    printf("床前明月光，\n");
    printf("疑是地上霜。\n");
    printf("举头望明月，\n");
    printf("低头思故乡。\n");
    /*
     * 短短的四句诗，写得清新朴素，明白如话。它的内容是单纯的，但同时又是
     * 丰富的。
     * 它是容易理解的，但却又是体味无尽的。诗人所没有说的比他已经说出来的
     * 要多得多。
     * 它的构思是细致而深曲的，但却又是脱口吟成、浑然无迹的。从这里，我们
     * 不难领会到李白绝句的“自然”、“无意于工而无不工”的妙境。
     */
    int myAge = 18; //这里的命名正确吗？
    printf("恭喜修改正确，你的年龄为:%d", myAge);
    /*
     * C语言规范，标识符可以是字母(A~Z，a~z)、数字(0~9)、下划线_组成的字符串
     * 并且第一个字符必须是字母或下划线。
     */
    int age = 15;
    int height = 162;
    float weight = 82.5;
    char isFat = 'y';
    printf("年龄: %d 岁\n", age);
    printf("身高: %d 厘米\n", height);
    printf("体重: %f 千克\n", weight);
    printf("是否属于肥胖儿童: %c\n",isFat);

    int xAge = 18;
    float xHeight = 1.85;
    char xUnit = 'M';
    printf("小明今年%d岁\n",xAge);
    printf("小明的身高%.2f%c\n",xHeight,xUnit);
    printf("小明现在在慕课网上学习IT技术\n");

    return 0;

}

