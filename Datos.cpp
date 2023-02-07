#include <iostream>

using namespace std;
int main(int arg, char *args[]){

const int maxn = 2100;
const ld eps = 1e-7;

int Sgn(ld x){ return fabs(x)<eps?0:(x>0?1:-1); }

int n;
struct point
{
    ld x,y;
    friend inline point operator -(const point &a,const point &b){return (point){a.x-b.x,a.y-b.y};}
    inline ld rad(){ return x/y; }
};
struct Line
{
    point a,b;
    ld val;
}L[maxn];

struct node
{
    int i,ad;
    ld rad;
    friend inline bool operator <(const node x,const node y)
    {
        int Sig=Sgn(x.rad-y.rad);
        if(!Sig) return x.ad>y.ad;
        return Sig<0;
    }
}a[maxn<<1]; int cnt;
ld ans;
void Upd(ld now)
{
    for(int i=1;i<=cnt;i++)
    {
        if(a[i].ad==1) now+=L[a[i].i].val;
        else now-=L[a[i].i].val;
        ans=max(ans,now);
    }
}

int main()
{
    //freopen("tmp.in","r",stdin);
    //freopen("tmp.out","w",stdout);

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        ld l,r,h; scanf("%Lf%Lf%Lf",&l,&r,&h); if(Sgn(l-r)>0) swap(l,r);
        L[i]=(Line){(point){l,h},(point){r,h}};
        L[i].val=r-l;
        ans=max(ans,L[i].val);
    }

    for(int i=1;i<=n;i++)
    {
        cnt=0;
        for(int j=1;j<=n;j++) if(Sgn(L[i].a.y-L[j].a.y))
        {
            ld r1=(L[j].a-L[i].a).rad(),r2=(L[j].b-L[i].a).rad();
            if(Sgn(r1-r2)>0) swap(r1,r2);
            a[++cnt]=(node){j,1,r1};
            a[++cnt]=(node){j,-1,r2};
        }
        sort(a+1,a+cnt+1);
        Upd(L[i].val);
    }
    printf("%.0Lf\n",ans);

    return 0;
}
}