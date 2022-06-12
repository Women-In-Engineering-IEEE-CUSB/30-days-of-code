#include <bits/stdc++.h>
using namespace std;

struct trie 
{
  vector<int> term;
  struct trie* next[26];
  struct trie* fail;
  trie() 
  {
    fail = NULL;
    for (int i=0; i<26; i++)
      next[i] = NULL;
  }
};
trie *root;

void insert(char str[], int index)
{
  trie* p = root;
  int len = strlen(str);
  for (int i=0; i<len; i++)
  {
    int idx = str[i]-'a';
    if (p->next[idx]==NULL)
      p->next[idx] = new trie();
    p = p->next[idx];
  }
  p->term.push_back(index);
}

void buildfail()
{
  queue<trie*> q;
  q.push(root);
  while(!q.empty())
  {
    trie* cur = q.front();
    q.pop();
    for (int i=0; i<26; i++)
    {
      if (cur->next[i] != NULL)
      {
        if (cur == root)
          cur->next[i]->fail = root;
        else
        {
          trie* p = cur->fail;
          while (p!=NULL && p->next[i] == NULL)
            p = p->fail;
          if (p==NULL)
            cur->next[i]->fail = root;
          else
            cur->next[i]->fail = p->next[i];
        }
        q.push(cur->next[i]);
      }
    }
  }
}


vector<pair<vector<int>, int> > query(char str[])
{
  vector<pair<vector<int>, int> > ret;
  int len = strlen(str);
  trie* p = root;
  for (int i=0; i<len; i++)
  {
    int idx = str[i] - 'a';
    while (p->next[idx] == NULL && p!=root)
      p = p->fail;
    if (p->next[idx] == NULL)
      continue;
    p = p->next[idx];
    trie* pp = p;
    while (pp != root)
    {
      if (!pp->term.empty())
        ret.push_back(make_pair(pp->term, i));
      pp = pp->fail;
    }
  }
  return ret;
}

int main()
{
  int n;
  int health[100000];
  char str[2000001];
  scanf("%d", &n);
  root = new trie();
  for (int i=0; i<n; i++)
  {
    scanf("%s", str);
    insert(str, i);
  }
  for (int i=0; i<n; i++)
    scanf("%d", &health[i]);
  buildfail();
  int q;
  scanf("%d", &q);
  long long mins=9999999999999,maxs=0;
  for (int i=0; i<q; i++)
  {
    int a,b;
    scanf("%d %d %s", &a, &b, str);
    vector<pair<vector<int>,int> > ret = query(str);
    long long sum = 0;
    for (int i=0; i<ret.size(); i++)
      for (int j=0; j<ret[i].first.size(); j++)
        if (ret[i].first[j] >= a && ret[i].first[j] <= b)
          sum += health[ret[i].first[j]];
    if (sum > maxs)
      maxs = sum;
    if (sum < mins)
      mins = sum;
  }
  printf("%lld %lld\n", mins, maxs);
}
