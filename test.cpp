#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101], mat [101][101], s1[101], s2[101];
    char *p;
    int i, j, cnt, ok;
    i = 0; ok = 0;
    p = strtok(s, " ");
    while (p)
    {
        strcpy(mat[i], p);
        i++;
        p = strtok(NULL, " ");
    }
    cnt = i;
    for (i = 0; i < cnt - 1; i++)
        for (j = i + 1; j < cnt; j++)
        {
            if (strlen(mat[i]) > strlen(mat[j]))
                if (strlen(mat[i]) - strlen(mat[j]) == 1)
                {
                    strcpy(s1, mat[i]);
                    strcpy(s2, mat[j]);
                    strcpy(s1 + strlen(s1)/2, s1 + strlen(s1)/2 + 1);
                    if(strcmp(s1, s2) == 0)
                        ok = 1;
                }
            if (strlen(mat[j]) > strlen(mat[i]))
                if (strlen(mat[j]) - strlen(mat[i]) == 1)
                {
                    strcpy(s1, mat[j]);
                    strcpy(s2, mat[i]);
                    strcpy(s1 + strlen(s1)/2, s1 + strlen(s1)/2 + 1);
                    if(strcmp(s1, s2) == 0)
                        ok = 1;
                }  
        }
    if(ok == 0)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}