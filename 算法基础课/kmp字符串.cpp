#include<iostream>
using namespace std;
const int N=100010,M=1000010;
char q[N],s[M];
int ne[N];//保存next数组
int main()
{
    int n,m;
    cin>>n>>q+1>>m>>s+1;//下标均从1开始
    for(int i=2,j=0;i<=n;i++)
    //j表示匹配成功的长度,i表示q数组中的下标,因为q数组的下标是从1开始的,只有1个时,一定为0,所以i从2开始
    {
        while(j&&q[i]!=q[j+1]) j=ne[j];
        //如果不行可以换到next数组
        if(q[i]==q[j+1]) j++;
        //成功了就加1
        ne[i]=j;
        //对应其下标
    }
    //j表示匹配成功的长度,因为刚开始还未开始匹配,所以长度为0
    for(int i=1,j=0;i<=m;i++)
    {
        while(j&&s[i]!=q[j+1]) j=ne[j];
        //如果匹配不成功,则换到j对应的next数组中的值
        if(s[i]==q[j+1]) j++;
        //匹配成功了,那么j就加1,继续后面的匹配
        if(j==n)//如果长度等于n了,说明已经完全匹配上去了
        {
            printf("%d ",i-j);
            //因为题目中的下标从0开始,所以i-j不用+1;
            j=ne[j];
            //为了观察其后续是否还能跟S数组后面的数配对成功
        }
    }
    return 0;
}
