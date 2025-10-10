filmes = ['1','2','3','4','5']

for filme in filmes:

    while True:

        classificacao = input(f"{filme} de 1 a 5? (ou 0 para parar): ")

        if classificacao == '0':

            print(f"{filme} interrompida.")

            break  # Encerra o loop interno com "break"

        classificacao = int(classificacao)

        if classificacao < 1 or classificacao > 5:

            print()

        else:

            print(f"{filme} com {classificacao} estrelas.\n")

            break  # Sai do loop interno