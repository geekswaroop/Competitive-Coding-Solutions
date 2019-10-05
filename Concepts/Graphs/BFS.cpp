#include<bits/stdc++.h>
using namespace std;

queue<int> q;
vector<bool> used(n);
vector<int> d(n), p(n);

void bfs(vector< vector<int> > adj, int n, int s)
{
	q.push(s);
	used[s]=True;
	p[s]=-1;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(int u : adj[v])  //Checking each vertex connected to v
		{
			if(!used[u])
			{
				used[u]=True;
				q.push(u);
				d[u] = d[v]+1;
				p[u]=v;
			}
		}
	}
}
int main()
{
	vector<vector<int>> adj;
	int n; //Number of vertices
	int s; //Source vertex
}