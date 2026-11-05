#include<stdio.h>
#include<conio.h>
int a,b,u,v,i,j,ne = 1;
int visited[10] = {0}, min, mincost = 0,cost[10][10];
void main()
{
	printf("\n Enter the numner of nodes:");
	scanf("%d",&n);
	printf("\n Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		scanf("%d", &cost[i][i]);
		if(cost[i][j] == 0)
		cost[i][j] = 999;
	}
	visited[1] = 1;
	printf("\n");
	while(ne < n)
	{
		for(i=1,min=999;i<=n;i++)
		for(j=1;j<=n;j++)
		if(cost[i][i] < min)
		if(visited[i] != 0)
		{
			min=cost[i][j];
			a = u = i;
			b = v = j;
		}
		if(visited[u] == 0 || visited[v] == 0)
		{
			printf("\n Edge %d:(%d%d)cost:%d",ne++,a,b,min);
			mincost += min;
			visited[b] = 1;
		}
		cost[a][b] = cost[b][a] = 999;
	}
	printf("\n Minimum cost=%d", mincost);
	getch();
}