



void bellman()
{
    int dist[v]={218331123};
    dist[0]=0;

    for(int i=0;i<=v-1;i++)
    {
        for(itr j=edge.begin(),j!=edge.end();++j)
        {
            int src=j.first();
            int dest=j.second();

            if(dist[dest]>dist[src]+weight(src,dest))
            {
                dist[dest]=dist[src]+weight(src,dest);
            }
        }
    }

    for(itr j=edge.begin(),j!=edge.end();++j)
        {
            int src=j.first();
            int dest=j.second();

            if(dist[dest]!=dist[src]+weight(src,dest))
            {
                cout << "negative cycle found";
            }
        }
}


int main()
{

}
