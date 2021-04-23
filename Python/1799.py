class Grafo:
    def __init__(self, vertices):
        self.vertices = vertices
        self.grafo = [[] for i in range(self.vertices)]
        self.chaves = []
        self.distancia_minima_entrada = 0
        self.indice_asterisco = 0
        self.contador = 0

    def adiciona_aresta(self, u, v):
        self.grafo[u].append(v)
        self.grafo[v].append(u)
    
    def retorna(self):
        return self.grafo

    def mostra_lista(self):
        for i in range(self.vertices):
            print(self.chaves[i], end = " --> ")
            for i in self.grafo[i]:
                print(self.chaves[i], end = "  ")
            print("")

    def dicionario(self, dicionario):
        self.chaves = list(dicionario.keys())
        self.indice_asterisco = self.chaves.index("*")

    def bfs(self, origem):
        self.contador += 1
        visitados = [-1] * self.vertices
        distancias = [0] * self.vertices
        vertice_pai = [0] * self.vertices
        visitados[origem] = origem
        vertice_pai[0] = 0
        distancias[0] = 0
        fila = [origem]
        while fila:
            vertice = fila.pop(0)
            for i in self.grafo[vertice]:
                if visitados[i] < 0:
                    fila.append(i)
                    visitados[i] = i
                    vertice_pai[i] = vertice
                    distancias[i] = distancias[vertice] + 1
        self.distancia_minima_entrada = self.distancia_minima_entrada + distancias[self.indice_asterisco]
        if self.contador == 2:
            print(self.distancia_minima_entrada)
'''        
        print(distancias)
        print(vertice_pai)
        print(visitados)
        print(self.distancia_minima_entrada, self.indice_asterisco)
          
        else:
            visitados = [-1] * self.vertices
            distancias = [0] * self.vertices
            vertice_pai = [0] * self.vertices
            visitados[origem] = origem
            vertice_pai[0] = 0
            distancias[0] = 0
            fila = [origem]
            while fila:
                vertice = fila.pop(0)
                for i in self.grafo[vertice]:
                    if visitados[i] < 0:
                        fila.append(i)
                        visitados[i] = i
                        vertice_pai[i] = vertice
                        distancias[i] = distancias[vertice] + 1
            distancia_minima = distancias[self.chaves.index("*")]
            print(distancias)
            print(vertice_pai)
            print(visitados)
'''
vertices, arestas = input().split()
vertice = int(vertices)
arestas = int(arestas)
dicionario = {}
cont = 0
grafo = Grafo(vertice)

for i in range(arestas):
    a, b = input().split()
    if a not in dicionario:
        dicionario[a] = cont
        cont += 1
    if b not in dicionario:
        dicionario[b] = cont
        cont += 1 
    grafo.adiciona_aresta(dicionario[a], dicionario[b])


#print(dicionario)
grafo.dicionario(dicionario)
grafo.bfs(dicionario["Entrada"])
grafo.bfs(dicionario["Saida"])
#grafo.mostra_lista()
