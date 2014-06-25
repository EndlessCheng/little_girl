#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;


struct data
{
    char suit,card;
};

char side[]={'S','W','N','E'};
char st[]={'C','D','S','H'};
char cd[]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
map<char,int> sideM,stM,cdM;

bool comp(data a, data b)
{
    int x=stM[a.suit], _x=stM[b.suit];
    int y=cdM[a.card], _y=cdM[b.card];

    if(x!=_x) return x<_x;
    else return y<_y;
}

int main()
{
    for(int i=0; i<4; i++) sideM[side[i]]=i;
    for(int i=0; i<4; i++) stM[st[i]]=i;
    for(int i=0; i<13; i++) cdM[cd[i]]=i;

    char start;
    int indx;
    data in[55];
    vector<data> pl[4];

    while(scanf(" %c",&start)==1)
    {
        if(start=='#') return 0;

        for(int i=0; i<52; i++)
            scanf(" %c %c",&in[i].suit,&in[i].card);

        indx=sideM[start];
        for(int i=0; i<52; i++)
        {
            indx++;
            indx%=4;
            pl[indx].push_back(in[i]);
        }

        for(int i=0; i<4; i++)
        {
            printf("%c:",side[i]);
            sort(pl[i].begin(), pl[i].end(), comp);
            for(int j=0; j<pl[i].size(); j++) printf(" %c%c",pl[i][j].suit,pl[i][j].card);
            puts("");
        }
        for(int i=0; i<4; i++) pl[i].clear();
    }
    return 0;
}
