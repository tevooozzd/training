"""
Como acessar a profissão da pessoa?
Como verificar se "São Paulo" está na tupla?
Como contar quantas vezes "Carlos" aparece na tupla?
Como converter essa tupla para uma lista?
"""


dados = ("Carlos", 32, "Engenheiro", "São Paulo")
profissao = dados[2]
print(f"A profissão presente na tupla é {profissao}")
print("Está" if "São Paulo" in dados else "Não está")
print(f"Carlos se repete {dados.count("Carlos")}")
print(list(dados))