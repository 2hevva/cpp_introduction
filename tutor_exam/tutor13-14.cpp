//
// Created by Teacher on 24-4-26.
//


//例13.1 使用cin cout
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    char c;
//    int i;
//    float f;
//    double d;
//    cin>>c>>i>>f>>d;
//    cout<<c<<" "<<i<<fixed<<setprecision(6)<<" "<<f<<" "<<d;
//    return 0;
//}

//例13.1 使用scanf和printf
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    char c;
//    int i;
//    float f;
//    double d;
//    scanf("%c%d%f%lf",&c,&i,&f,&d);
//    printf("%c %d %.6f %.6lf",c,i,f,d);
//    return 0;
//}

//例13.2 不用if使用printf和scanf自带格式控制方式
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int a;
//    scanf("%d",&a);
//    printf("%02d:%02d:%02d",a/3600,(a%3600)/60,a%60);
//    return 0;
//}

//例13.2 使用cin和cout对象流处理方式
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x;
//    cin>>x;
//    cout<<setfill('0')<<setw(2)<<x/3600<<":"<<setw(2)<<(x%3600)/60<<":"<<setw(2)<<x%3600%60;
//    return 0;
//}

//使用流处理方式看上去更规范，易读性也更强，出错的概率相对printf和scanf比较小
//所以c++添加了这种输入和输出的方式，c语言时期是没有的
//然而相对应的代价就是cin和cout因为使用了对象，需要连接库和更复杂的函数来调用
//势必在运行速度和内存损耗上更高
//但相对规范和安全的使用方式在工程和平时生活使用当中我们应该更多积极的去使用对象化的方式，也更容易找到bug定位问题
//而在某些极端情况下比如嵌入式开发板要求内存小，或者竞赛要求运行速度的话我们可以考虑使用scanf和printf
//这便是空间换取时间思想的入门 过去计算机内存还是256mb时期是不支持我们使用损耗相对较大但方便的方式
//随着科技的进步，内存容量和cpu的计算速度，会有越来越方便我们人类开发的框架出现，但核心的本质还是算法和语言还有数据结构，在特殊的需要方面依然扮演着举足轻重的作用
//美国登月使用的主芯片计算机就是256mb的内存，依然完成了壮举

////例13.3
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,ahour,amin,asecond;
    int b,bhour,bmin,bsecond;
    scanf("%d:%d:%d",&ahour,&amin,&asecond);
    scanf("%d:%d:%d",&bhour,&bmin,&bsecond);
//    a = ahour*3600+amin*60+asecond;
//    b = bhour*3600+bmin*60+bsecond;
//    cout<<b-a;
    printf("%d",(bhour*3600+bmin*60+bsecond)-(ahour*3600+amin*60+asecond));
    return 0;
}

//取地址符注意事项，scanf参数我们传入的本质是一个变量的地址而不是变量本身，这样的好处是函数可以不关心你给我个什么东西，我都不需要看看里面是什么
//我只需要把东西往这个地址里一丢就行了，减少了程序运行的时间和损耗
//而printf由于需要输出这个内容，而不是给这个内容赋值，所以传入的是变量本身，这个函数需要看看这个变量地址里装了什么东西并取出来