//
// Created by Teacher on 24-4-26.
//

//13课

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
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int a,ahour,amin,asecond;
//    int b,bhour,bmin,bsecond;
//    scanf("%d:%d:%d",&ahour,&amin,&asecond);
//    scanf("%d:%d:%d",&bhour,&bmin,&bsecond);
////    a = ahour*3600+amin*60+asecond;
////    b = bhour*3600+bmin*60+bsecond;
////    cout<<b-a;
//    printf("%d",(bhour*3600+bmin*60+bsecond)-(ahour*3600+amin*60+asecond));
//    return 0;
//}

//取地址符注意事项，scanf参数我们传入的本质是一个变量的地址而不是变量本身，这样的好处是函数可以不关心你给我个什么东西，我都不需要看看里面是什么
//函数只需要把东西往这个地址里一丢就行了，减少了程序运行的时间和损耗，不关心里面是什么
//而printf由于需要输出这个内容，而不是给这个内容赋值，所以传入的是变量本身，这个函数需要看看这个变量地址里装了什么东西并取出来


//14课


//例子14.1
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    double d;
//    cin>>d;
//    printf("%f\n",d);  //双精度浮点数输出
//    printf("%.5f\n",d);//五位小数
//    printf("%e\n",d); //科学计数法
//    printf("%g\n",d); //自动选择宽度
//    return 0;
//}


//例子14.2
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    double d;
//    int y;
//    scanf("%lf",&d);//输入双精度浮点数
//    scanf("%d",&y);//输入你想他在第几位保留并且会四舍六入五成双
//    printf("%.*lf\n",y,d);//打印输出
//    return 0;
//}


//例子14.3
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    double n;
//    int m;
//    scanf("%lf",&n);
//    n+=0.5;//完成四舍五入
//    m=n;//本题精髓，把浮点数用整型来输出，会自动抹去后面的0
//    printf("%d",m);
//    return 0;
//}


//例子15.1
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    bool b;
//    int x;
//    //输入true和false查看结果
//    cin>>x;
//    b=x;
//    x=b;
//    cout<<x;
//    return 0;
//}


//例子15.2
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x;
//    cin>>x;
//    //判断偶数 单行（不推荐）
//    if(x%2==0) cout<<"yes";
//    return 0;
//}

//例子15.2
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x;
//    cin>>x;
//    //判断偶数 多行（推荐） 因为顺序结构的影响让人下意识忽略了这里其实是存在分支的，可读性会下降，尽可能通过换行来明确分支内容，哪怕只有一句话。
//    if(x%2==0)
//        cout<<"yes";
//    return 0;
//}

//例子15.3 输出最大数
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int a,b,c,max;
//    cin>>a>>b>>c;
//      断点引入，意义和价值，如何掌握。过去都是顺序结构而非选择或者循环结构，没有那么需要断点，但是随着程序执行流程的分支和循环复杂化
//      我们很需要断点来调试逐步查看程序的执行而非通过完全的脑内模拟，以方便我们写程序
//    //断点调试时，如果if是换行的那么也会非常直观，而不需要老是去比对
//    max=a;
//    if(b>max)max=b;
//    if(c>max)max=c;
//    cout<<max;
//    return 0;
//}

//例子15.3 输出最大数 换行if
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int a,b,c,max;
//    cin>>a>>b>>c;
//    //断点调试时，如果if是换行的那么也会非常直观，而不需要老是去比对 案例输入88 99 10
//    max=a;
//    if(b>max)
//        max=b;
//    if(c>max)
//        max=c;
//    cout<<max;
//    return 0;
//}


//例子16.1 判断正负
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    //大于
//    if(n>0) cout<<"positive";
//    //等于
//    if(n==0) cout<<"zero";
//    //小于
//    if(n<0) cout<<"negative";
//    return 0;
//}


//例子16.2 开灯
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    //大于
//    if(n>0) cout<<"positive";
//    //等于
//    if(n==0) cout<<"zero";
//    //小于
//    if(n<0) cout<<"negative";
//    return 0;
//}

//例子16.3 收费
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    double w;
//    cin>>w;
//    if(w<=20)
//        printf("%.2lf",w*1.68);
//    if(w>20)
//        printf("%.2lf",w*1.98);
//    return 0;
//}

