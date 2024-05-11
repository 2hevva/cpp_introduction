//
// Created by Teacher on 2024/5/11.
//

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