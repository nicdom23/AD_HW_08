# AD_HW_08
Last homework for the Algorithm Design course at DSSC a.y. 2019/2020

## Last Homework
29/06/2020

I implemented Dijkstra's algorithm by arrays. I represented the graph as an array of nodes with a dense Adjacency matrix, which in this case it is a density matrix. I reused the code from the Strassen Algorithm, and I assumed that negative weights presumed no connection(so $u\in Adj\{v\}$ iff WeightMatrix[v][u]>=0). So the number of edges is around $|E| \approx \frac{|V|^2}{2}$. 

The execution time of this code should then be $O(|V|^2+|E|)=O(|V|^2)$. We see the plot:

![](array_dijkstra.jpg)