#include <stdio.h>

int main() {
    int testcase;
    char g[10][10], s[10];
    int i, j, k;
    scanf("%d", &testcase);
    while(testcase--) {
        for(i = 1; i <= 8; i++)
            scanf("%s", g[i]+1);
        scanf("%s", s);
        int turn = 0;
        if(s[0] == 'W') turn = 0;
        else            turn = 1;
        int dx[] = {0,0,1,1,1,-1,-1,-1};
        int dy[] = {1,-1,0,1,-1,0,1,-1};
        while(scanf("%s", s) == 1) {
            if(s[0] == 'Q')
                break;
            if(s[0] == 'L') {
                int first = 0;
                for(i = 1; i <= 8; i++) {
                    for(j = 1; j <= 8; j++) {
                        if(g[i][j] != '-')  continue;
                        for(k = 0; k < 8; k++) {
                            int x = i + dx[k], y = j + dy[k];
                            int ok = 0;
                            while(x >= 1 && x <= 8 && y >= 1 && y <= 8) {
                                if(g[x][y] == '-')
                                    break;
                                if(g[x][y] == 'W' && turn == 0)
                                    {ok |= 2;break;}
                                if(g[x][y] == 'B' && turn == 1)
                                    {ok |= 2;break;}
                                ok |= 1;
                                x += dx[k], y += dy[k];
                            }
                            if(ok == 3) break;
                        }
                        if(k != 8) {
                            if(first)   putchar(' ');
                            first = 1;
                            printf("(%d,%d)", i, j);
                        }
                    }
                }
                if(!first)  puts("No legal move.");
                else        puts("");
            }
            if(s[0] == 'M') {
                again:
                int x = s[1]-'0', y = s[2]-'0';
                g[x][y] = turn ? 'B' : 'W';
                int valid = 0;
                for(i = 0; i < 8; i++) {
                    int tx = x + dx[i], ty = y + dy[i];
                    int ok = 0;
                    while(tx >= 1 && tx <= 8 && ty >= 1 && ty <= 8) {
                        if(g[tx][ty] == '-')
                            break;
                        if(g[tx][ty] == 'W' && turn == 0)
                            {ok |= 2;break;}
                        if(g[tx][ty] == 'B' && turn == 1)
                            {ok |= 2;break;}
                        ok |= 1;
                        tx += dx[i], ty += dy[i];
                    }
                    if(ok == 3) {
                        valid = 1;
                        tx = x + dx[i], ty = y + dy[i];
                        while(tx >= 1 && tx <= 8 && ty >= 1 && ty <= 8) {
                            if(g[tx][ty] == '-')
                                break;
                            if(g[tx][ty] == 'W' && turn == 0)
                                {break;}
                            if(g[tx][ty] == 'B' && turn == 1)
                                {break;}
                            g[tx][ty] = turn ? 'B' : 'W';
                            tx += dx[i], ty += dy[i];
                        }
                    }
                }
                turn = !turn;
                if(valid == 0)
                    goto again;
                int W = 0, B = 0;
                for(i = 1; i <= 8; i++) {
                    for(j = 1; j <= 8; j++) {
                        if(g[i][j] == 'B')  B++;
                        if(g[i][j] == 'W')  W++;
                    }
                }
                printf("Black -%3d White -%3d\n", B, W);
            }
        }
        for(i = 1; i <= 8; i++, puts(""))
            for(j = 1; j <= 8; j++)
                putchar(g[i][j]);
        if(testcase)
            puts("");
    }
    return 0;
}
