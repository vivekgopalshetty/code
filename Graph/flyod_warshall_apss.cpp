


void flyod_warshall()
{
    for(int k=0;k<n;k++)
    {
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
}
