#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
    cout << "Enter number of nodes: ";
    cin >> node;

    cout << "Enter number of edges: ";
    cin >> edge;

    vector<vector<int>> adj(node+1);

    for(int i=1;i<=edge;i++)
    {
        int startp,endp;
        cout << "Edge " << i << endl;
        cout << "Starting node: ";
        cin >> startp;
        cout << "Ending node: ";
        cin >> endp;
        adj[startp].push_back(endp);
    }
    // DFS
    vector<bool> visited(node+1,false);
    stack<int> st;

    int source = 1;
    st.push(source);
    cout << "DFS traversal: ";

    while(!st.empty())
    {
        int nd=st.top();
        st.pop();
        if(!visited[nd])
        {
            cout << nd << " ";
            visited[nd] = true;
        }
        for(int i=adj[nd].size()-1;i>=0;i--)
        {
            int child = adj[nd][i];
            if(!visited[child])
            {
                st.push(child);
            }
        }
    }
    return 0;
}
