import heapq

def dijkstra(graph, start, end, wait_time):
    n = len(graph)
    dist = [float('inf')] * n
    dist[start] = 0
    
    pq = [(0, start)]
    
    while pq:
        curr_time, node = heapq.heappop(pq)
        
        if node == end:
            return curr_time
        
        if curr_time > dist[node]:
            continue
        
        for neighbor, edge_time in graph[node]:
            new_time = curr_time + edge_time + wait_time[node]
            if new_time < dist[neighbor]:
                dist[neighbor] = new_time
                heapq.heappush(pq, (new_time, neighbor))
    
    return -1

def main():
    n, m, q = map(int, input().split())
    
    graph = [[] for _ in range(n)]
    wait_time = [0] * n
    
    for _ in range(m):
        u, v, w = map(int, input().split())
        graph[u-1].append((v-1, w))
        graph[v-1].append((u-1, w))
    
    for _ in range(q):
        u, v, x = map(int, input().split())
        print(dijkstra(graph, u-1, v-1, [x] * n))

if __name__ == "__main__":
    main()
