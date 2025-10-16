animes = ['Jujutsu no Kaisen','Hunter x Hunter','Naruto','One Piece','Fairy Tail']
for anime in animes:
    classificacao = int(input(f"Classifique o anime: {anime}, entre 1(ruim) a 10(otimo), ou 0 para encerrar o programa "))
    while classificacao not in range(0,11):
        classificacao = int(input(f"Por favor digite um valor valido: "))
    if classificacao == 0:
        break
    print(f"Voce avaliou {anime} com uma nota {classificacao}")
print("Programa encerrado...")