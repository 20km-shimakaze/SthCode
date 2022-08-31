#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;
const int M = 50010 ;
int n , m ;
int stack [M] , top = 0 , index = 0;
bool instack [M] ;
int dfn[M] , low[M] ;
int cnt = 0 ;
vector <int> e[M] ;
int belong[M] ;
int out[M] ;

void init (int n)
{
    top = 0 ;
    cnt = 0 ;
    index = 0 ;
    memset (stack , -1 , sizeof(stack)) ;
    memset (instack , 0 , sizeof(instack)) ;
    memset (dfn , -1 , sizeof(dfn)) ;
    memset (low , -1 , sizeof(low)) ;
    for (int i = 0 ; i <= n ; i++)
        e[i].clear () ;
    memset (belong , -1 , sizeof(belong)) ;
    memset (out , 0 , sizeof(out)) ;
}

void tarjan (int u)
{
    int v ;
    dfn[u] = low[u] = index++ ;
    instack[u] = true ;
    stack[++top] = u ;
    for (int i = 0 ; i < e[u].size () ; i++) {
        v = e[u][i] ;
        if (dfn[v] == -1) {
            tarjan (v) ;
            low[u] = min (low[u] , low[v]) ;
        }
        else if (instack[v])
            low[u] = min (low[u] , dfn[v]) ;
    }
    if (low[u] == dfn[u]) {
        cnt++ ;
        do {
            v = stack[top--] ;
            instack[v] = false ;
            belong[v] = cnt ;
        } while (u != v) ;
    }
}

int main ()
{
   //freopen ("a.txt" , "r" , stdin) ;
    int u , v ;
    while (~ scanf ("%d" ,&n)) {
        if (n == 0)
            break ;
        init (n) ;
        scanf ("%d" , &m) ;
        while (m--) {
            scanf ("%d%d" , &u , &v) ;
            e[u].push_back (v) ;
        }
        for (int i = 1 ; i <= n ; i++) {
            if (dfn[i] == -1)
                tarjan (i) ;
        }
        for (int i = 1 ; i <= n ; i++) {
            for (int j = 0 ; j < e[i].size () ; j++) {
                if (belong [i] != belong[e[i][j]])
                    out[belong[i]] ++;
            }
        }
        int k = 0 ;
        for (int i = 1 ; i <= n ; i++) {
            if (out[belong[i]] == 0) {
                if (k++)
                    printf (" ") ;
                printf ("%d" , i) ;
            }
        }
        puts ("") ;
    }
    return 0 ;
}