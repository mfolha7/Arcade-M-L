#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jogoPerguntas();
void jogoCobra();
void jogoGousmas();

//===================================================MENU DO JOGO===============================================================
int main() {
	int jogo;
	
	do{
	printf("=== ARCADE M&L ===\n\n");
	printf("1 - Pergunta e Resposta.\n");
	printf("2 - Cobra na Caixa!\n");
	printf("3 - Gousmas War.\n");
	printf("4 - Sair.\n\n");
	printf("DIGITE O NUMERO CORRESPONDENTE AO JOGO QUE DESEJA INICIAR: ");
	scanf("%d", &jogo);
	
	switch(jogo){
		case 1:
			system("cls");
			jogoPerguntas();
			break;
		
		case 2:
			system("cls");
			jogoCobra();
			break;
			
		case 3:
			system("cls");
			jogoGousmas();
			break;
			
		case 4:
			system("cls");
			printf("\nSAINDO...\n\n");
			break;
		
		default:
			printf("\nOPCAO INVALIDA");
			printf("\nPressione ENTER para digitar novamente uma opcao valida (1-4)");
			getchar();
			getchar();
			system("cls");
			break;
		}
		
} while(jogo!=4);
	return 0;
	
}
//===================================================JOGO PERGUNTA E RESPOSTA===================================================
void jogoPerguntas(){
	int resposta;
	char jogar;
	
	do{
	system("cls");
	printf("=== PERGUNTA E RESPOSTA ===\n\n");
	printf("O JOGO \"PERGUNTA E RESPOSTA\" APRESENTA 5 PERGUNTAS E VOCE PRECISA RESPONDE-LAS DIGITANDO UM NUMERO DE 1 A 4.\nPARA PONTUAR, DIGITE A ALTERNATIVA CORRETA.\n\n");
	
	printf("Pressione ENTER para continuar...");
	getchar();
	getchar();
	//===================================================primeira pergunta===================================================
	printf("\nQual e a unidade basica de armazenamento em um computador?\n");
	printf("1 - Byte\n");
	printf("2 - Bit\n");
	printf("3 - Kilobyte\n");
	printf("4 - Megabyte\n");
	printf("Resposta:"); scanf("%d", &resposta);
	
	if(resposta==2){
		printf("Resposta CORRETA!");
	}
	else{
		printf("Resposta ERRADA! A alternativa correta era \"2-Bit\".");
	}
	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();
	
	//===================================================segunda pergunta===================================================
	printf("\n-------------------------------------------------------------------------------------------------------\n");
	printf("\nQual e o nome da espada lendaria usada por Link?\n");
	printf("1 - Sword of Light\n");
	printf("2 - Dragon Slayer\n");
	printf("3 - Excalibur\n");
	printf("4 - Master Sword\n");
	printf("Resposta:"); scanf("%d", &resposta);
	
	if(resposta==4){
		printf("Resposta CORRETA!");
	}
	else{
		printf("Resposta ERRADA! A alternativa correta era \"4-Master Sword\".");
	}
	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();
	
	//===================================================terceira pergunta===================================================
	printf("\n-------------------------------------------------------------------------------------------------------\n");
	printf("\nQual o maior planeta do sistema solar?\n");
	printf("1 - Marte\n");
	printf("2 - Saturno\n");
	printf("3 - Jupiter\n");
	printf("4 - Sol\n");
	printf("Resposta:"); scanf("%d", &resposta);
	
	if(resposta==3){
		printf("Resposta CORRETA!");
	}
	else{
		printf("Resposta ERRADA! A alternativa correta era \"3-Jupiter\".");
	}
	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();
	
	//===================================================quarta pergunta===================================================
	printf("\n-------------------------------------------------------------------------------------------------------\n");
	printf("\nOs personagens Michael, Franklin e Trevor sao protagonistas de qual jogo?\n");
	printf("1 - Cyberpunk 2077\n");
	printf("2 - GTA 5\n");
	printf("3 - Resident Evil 4\n");
	printf("4 - Shadow of The Colossos\n");
	printf("Resposta:"); scanf("%d", &resposta);
	
	if(resposta==2){
		printf("Resposta CORRETA!");
	}
	else{
		printf("Resposta ERRADA! A alternativa correta era \"2-GTA 5\".");
	}
	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();
	
	//===================================================quinta pergunta===================================================
	printf("\n-------------------------------------------------------------------------------------------------------\n");
	printf("\nNo filme Carros, qual e o nome do campeonato que o Relampago McQueen se torna vencedor\n");
	printf("1 - Radiator Springs\n");
	printf("2 - Indy 500\n");
	printf("3 - Copa Pistao\n");
	printf("4 - California Racer\n");
	printf("Resposta:"); scanf("%d", &resposta);
	
	if(resposta==3){
		printf("Resposta CORRETA!");
	}
	else{
		printf("Resposta ERRADA! A alternativa correta era \"3-Copa Pistao\".");
	}
	printf("\nPressione ENTER para continuar...");
	getchar();
	getchar();
	printf("\n-------------------------------------------------------------------------------------------------------\n");
	//===================================================Jogar novamente===================================================

	do {
        printf("Voce deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar);
        
        if (jogar != 's' && jogar != 'n') {
            printf("Por favor, escolha apenas 's' para continuar ou 'n' para sair.\n");
        }
    } while (jogar != 's' && jogar != 'n');
	
} while (jogar == 's');

	system("cls");	
}
//===================================================JOGO COBRA NA CAIXA========================================================
void jogoCobra() {
    int botao, cobra, escolha, turno, p1, p2, i;
    int caixasAbertas[6]; 
    char jogar;
    char nomes[7][10] = {"Joel", "Luke", "Harry", "Taylor", "Mike", "Steve", "Ellie"};

    srand(time(NULL));

    do {
    	int fimDeJogo = 0;
        system("cls");
        printf("=== COBRA NA CAIXA! ===\n\n");
        printf("O JOGO \"COBRA NA CAIXA\" E UM JOGO PARA DOIS JOGADORES.\n\nUMA DAS CAIXAS ESCONDE O BOTAO QUE GARANTE A VITORIA. ");
        printf("OUTRA CAIXA ESCONDE UMA COBRA, QUE RESULTA EM DERROTA IMEDIATA.\nAS DEMAIS CAIXAS ESTAO VAZIAS. ESCOLHA COM CUIDADO E BOA SORTE!\n\n");
	
		printf("Pressione ENTER para continuar...\n");
		getchar();
		getchar();
//===================================================escolha do player 1===================================================
        printf("Escolha seu personagem entre os disponiveis:\n");
        for(i = 0; i < 7; i++) printf("%d - %s\n", i + 1, nomes[i]);

         
        do {
            printf("\n=== JOGADOR 1 ===\nEscolha (1-7): ");
            
            if (scanf("%d", &p1) != 1) { 
        	printf("\nOPCAO INVALIDA");
        	printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
        	getchar();
			getchar();
        while (getchar() != '\n'); 
        p1 = 0; 
        
        continue;
    }
    
            if(p1 < 1 || p1> 7){
            	printf("\nOPCAO INVALIDA");
        		printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
				getchar();
				getchar();
			}
        } while (p1 < 1 || p1 > 7);

//===================================================escolha do player 2===================================================

        do {
            printf("\n=== JOGADOR 2 ===\nEscolha (1-7): ");
            if (scanf("%d", &p2) != 1) { 
        	printf("\nOPCAO INVALIDA");
        	printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
        	getchar();
			getchar();
        	while (getchar() != '\n'); 
        	p2 = 0; 
        	
        	continue;
    		}
    
            if(p2 < 1 || p2> 7){
            	printf("\nOPCAO INVALIDA");
        		printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
				getchar();
				getchar();
			}
			
			if(p2==p1){
				printf("\nOPCAO INVALIDA");
				printf("\nEsse perssonagem ja foi escolhido.");
				printf("\nPressione ENTER para escolher outro personagem...");
				getchar();
				getchar();
			}
        } while (p2 < 1 || p2 > 7 || p2==p1);

//===================================================sorteio das caixas e do primeiro a  jogar===================================================
        turno = rand() % 2; 
        botao = (rand() % 5) + 1;
        do { cobra = (rand() % 5) + 1; } while (cobra == botao);
        for(i = 0; i <= 5; i++) caixasAbertas[i] = 0;

        printf("\nSorteio: %s comeca!\n", (turno == 0) ? nomes[p1-1] : nomes[p2-1]);
        printf("Pressione ENTER para continuar...");
        getchar();
		getchar();
		system("cls");
        
        while (!fimDeJogo) {
            char* atual = (turno % 2 == 0) ? nomes[p1-1] : nomes[p2-1];
			
            printf("=== RODADA DE %s ===\n", atual);
            printf("Escolha uma caixa (1-5): ");
            scanf("%d", &escolha);
          

//===================================================validacao das caixas===================================================            
            if (escolha < 1 || escolha > 5 || caixasAbertas[escolha] == 1) {
                printf("Invalido ou ja aberta! Pressione ENTER.\n");
                getchar();
				getchar();
                printf("\n-------------------------------------------------------------------------------------------------------\n\n");
                continue;
            }

            caixasAbertas[escolha] = 1;

            if (escolha == botao) {
                printf("\nVITORIA! %s achou o botao e abriu a porta!\n", atual);
                printf("Pressione ENTER...");
                getchar();
				getchar();
                fimDeJogo = 1;
            } else if (escolha == cobra) {
                printf("\nPERDEU! %s encontrou a cobra!\n", atual);
                printf("Pressione ENTER...");
                getchar();
				getchar();
                fimDeJogo = 1;
            } else {
                printf("\nCaixa vazia... Turno passa.\n");
                turno++;
                printf("Pressione ENTER...");
                getchar(); getchar();
                printf("\n-------------------------------------------------------------------------------------------------------\n\n");
            }
        }
//===================================================jogar novamente===========================================================
        do {
        printf("\n-------------------------------------------------------------------------------------------------------\n\n");
        printf("Voce deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar);
        
        if (jogar != 's' && jogar != 'n') {
            printf("Por favor, escolha apenas 's' para continuar ou 'n' para sair.\n");
        }
    } while (jogar != 's' && jogar != 'n');

} while (jogar == 's');

	system("cls");	
}
//===================================================JOGO GOUSMAS WAR===========================================================
void jogoGousmas(){
    int furiaP1[2] = {1, 1};
    int furiaP2[2] = {1, 1};
    int p1, p2, i, acao, atacante, alvo, doadora, receptora, pontos;
    int turno, fimDeJogo;
    char jogar;
    char nomes[7][10] = {"Joel", "Luke", "Harry", "Taylor", "Mike", "Steve", "Ellie"};

    srand(time(NULL));

    do {
        system("cls");
        printf("=== GOUSMAS WAR ===\n\n");
        printf("O JOGO \"GOUSMAS WAR\" E UM JOGO PARA DOIS JOGADORES.\n\n");
        printf("NESSE JOGO, CADA JOGADOR CONTROLA DUAS \"GOUSMAS\". CADA GOUSMA POSSUI UM VALOR INTEIRO CHAMADO FURIA. UMA GOUSMA AGUENTA 5 PONTOS DE FURIA.\n");
        printf("TRANSFIRA FURIA A UM INIMIGO PARA SOBRECARREGA-LO E DESTRUI-LO. AO MESMO TEMPO, CONTROLE SEUS PONTOS DE FURIA PARA NAO SER DERROTADO. USE DIVIDIR PARA TRANSFERIR FURIA OU REVIVER UMA GOUSMA\n\n");
		
		printf("Pressione ENTER para continuar...\n");
		getchar();
		getchar();
//===================================================escolha do player 1===================================================
         printf("Escolha seu personagem entre os disponiveis:\n");
        for(i = 0; i < 7; i++) printf("%d - %s\n", i + 1, nomes[i]);

         
        do {
            printf("\n=== JOGADOR 1 ===\nEscolha (1-7): ");
            
            if (scanf("%d", &p1) != 1) { 
        	printf("\nOPCAO INVALIDA");
        	printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
        	getchar();
			getchar();
        while (getchar() != '\n'); 
        p1 = 0; 
        
        continue;
    }
    
            if(p1 < 1 || p1> 7){
            	printf("\nOPCAO INVALIDA");
            	
        printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
		getchar();
		getchar();
			}
        } while (p1 < 1 || p1 > 7);
//===================================================escolha do player 2===================================================
        do {
            printf("\n=== JOGADOR 2 ===\nEscolha (1-7): ");
            
            if (scanf("%d", &p2) != 1) { 
        	printf("\nOPCAO INVALIDA");
        	printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
        	getchar();
			getchar();
        while (getchar() != '\n'); 
        p2 = 0; 
        
        continue;
    }
    
            if(p2 < 1 || p2> 7){
            	printf("\nOPCAO INVALIDA");
            	
        printf("\nPressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 7)...");
		getchar();
		getchar();
			}
			
			if(p2==p1){
				printf("\nOPCAO INVALIDA");
		printf("\nEsse perssonagem ja foi escolhido.");
		printf("\nPressione ENTER para escolher outro personagem...");
		getchar();
		getchar();
			}
        } while (p2 < 1 || p2 > 7 || p2==p1);
//===================================================reset de estado para nova partida===================================================

        furiaP1[0] = 1; furiaP1[1] = 1;
        furiaP2[0] = 1; furiaP2[1] = 1;
        turno = rand() % 2;
        fimDeJogo = 0;

         printf("\nSorteio: %s comeca!\n", (turno == 0) ? nomes[p1-1] : nomes[p2-1]);
        printf("Pressione ENTER para continuar...");
        getchar();
		getchar();
		system("cls");

        while (!fimDeJogo) {
            system("cls");
            char* nomeP1 = nomes[p1-1];
            char* nomeP2 = nomes[p2-1];

//===================================================status das gousmas===================================================
            printf("=== STATUS DAS GOUSMAS ===\n");

			printf("%s (P1): [Gousma 1]: %s | [Gousma 2]: %s\n", nomeP1, 
    			(furiaP1[0] > 5 ? "DESTRUIDA" : "ATIVA"), (furiaP1[1] > 5 ? "DESTRUIDA" : "ATIVA"));

			if(furiaP1[0] <= 5) printf("           (1) Furia: %d\n", furiaP1[0]);
			if(furiaP1[1] <= 5) printf("           (2) Furia: %d\n", furiaP1[1]);

			printf("\n%s (P2): [Gousma 3]: %s | [Gousma 4]: %s\n", nomeP2,
    			(furiaP2[0] > 5 ? "DESTRUIDA" : "ATIVA"), (furiaP2[1] > 5 ? "DESTRUIDA" : "ATIVA"));

			if(furiaP2[0] <= 5) printf("           (3) Furia: %d\n", furiaP2[0]);
			if(furiaP2[1] <= 5) printf("           (4) Furia: %d\n", furiaP2[1]);
			
//===================================================turnos: atacar ou dividir===================================================
            printf("\n---------------------------------------------------\n");
            char* atual = (turno % 2 == 0) ? nomeP1 : nomeP2;
            printf("=== RODADA DE: %s ===\n", atual);
            printf("1 - Atacar (Soma sua furia no inimigo)\n2 - Dividir (Transfere furia entre as suas)\nEscolha: ");
            
            if (scanf(" %d", &acao) != 1) {
    		printf("\nOPCAO INVALIDA: ");
    		while (getchar() != '\n'); 
    		printf("Pressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 2)...");
			getchar();
			getchar();
    		continue;
    }
			if (acao < 1 || acao > 2) {
    		printf("\nOPCAO INVALIDA: ", acao);
    		printf("Pressione ENTER para digitar novamente uma opcao valida (NUMERO DE 1 a 2)...");
			getchar();
			getchar();
    		continue;
	}
		
//=================================================== Acao: Atacar ===================================================
            //vez do p1
			if (acao == 1) {
    		if (turno % 2 == 0) { // Vez do P1
        	printf("\nATAQUE: Escolha qual Gousma vai ATACAR (1 ou 2): ");
        	if (scanf("%d", &atacante) != 1 || atacante < 1 || atacante > 2) {
            printf("\nOPCAO INVALIDA! Voce so tem as Gousmas 1 e 2.\n");
            while (getchar() != '\n'); // Limpa o buffer
            system("pause");
            continue; // Volta para o inicio do turno sem processar o resto
        }
        
        printf("        Escolha qual vai ser o ALVO do inimigo (3 ou 4): ");
        if (scanf("%d", &alvo) != 1 || alvo < 3 || alvo > 4) {
            printf("\nOPCAO INVALIDA! O inimigo so tem as Gousmas 3 e 4.\n");
            while (getchar() != '\n');
            system("pause");
            continue;
        }

        if (furiaP1[atacante-1] <= 5 && furiaP2[alvo-3] <= 5) {
            furiaP2[alvo-3] += furiaP1[atacante-1];
            printf("\nATAQUE REALIZADO! ");
        } else {
            printf("\nAcao invalida! Uma das Gousmas envolvidas ja foi destruida.");
        }
    } 
    else { // Vez do P2
        printf("\nATAQUE: Escolha qual Gousma vai ATACAR (3 ou 4): ");
        if (scanf("%d", &atacante) != 1 || atacante < 3 || atacante > 4) {
            printf("\nOPCAO INVALIDA! Voce so tem as Gousmas 3 e 4.\n");
            while (getchar() != '\n');
            system("pause");
            continue;
        }

        printf("        Escolha qual vai ser o ALVO do inimigo (1 ou 2): ");
        if (scanf("%d", &alvo) != 1 || alvo < 1 || alvo > 2) {
            printf("\nOPCAO INVLIDA! O inimigo so tem as Gousmas 1 e 2.\n");
            while (getchar() != '\n');
            system("pause");
            continue;
        }

        if (furiaP2[atacante-3] <= 5 && furiaP1[alvo-1] <= 5) {
            furiaP1[alvo-1] += furiaP2[atacante-3];
            printf("\nATAQUE REALIZADO! ");
        } else {
            printf("\nAcao invalida! Uma das Gousmas envolvidas ja foi destruida.");
        }
    }
}
//=================================================== Acao: Dividir ===================================================
            else if (acao == 2) {
                int min = (turno % 2 == 0) ? 1 : 3;
                int max = (turno % 2 == 0) ? 2 : 4;
                int offset = (turno % 2 == 0) ? 1 : 3;
                int* f = (turno % 2 == 0) ? furiaP1 : furiaP2;

                printf("Doadora (%d ou %d): ", min, max);
				scanf("%d", &doadora);
				
                printf("Receptora (%d ou %d): ", min, max); 
				scanf("%d", &receptora);
				
				if (doadora == receptora) {
        			printf("\nOPCAO INVALIDA: Voce nao pode transferir pontos para a mesma Gousma!\n");
        			system("pause");
        			continue;
    			}
				

                if (doadora >= min && doadora <= max && receptora >= min && receptora <= max) {
                    int d = doadora - offset;
                    int r = receptora - offset;
                    
                    if (f[d] > 5) {
            		printf("\nOPCAO INVALIDA: A Gousma %d esta DESTRUIDA e nao pode doar furia!\n", doadora);
            		system("pause");
            		continue;
        		}
                    
                    printf("Quantos pontos transferir?: ");
                    if (scanf("%d", &pontos) != 1) {
                        printf("\nOPCAO INVALIDA: Digite um numero!\n");
                        while (getchar() != '\n');
                        system("pause");
                        continue;
                    }
                    
                    // NOVA VALIDAÇÃO: Impede 0 ou negativos e garante que a doadora não morra
                    if (pontos <= 0) {
                        printf("\nOPCAO INVALIDA: Deves transferir pelo menos 1 ponto!\n");
                        system("pause");
                        continue; 
                    }

                    if (f[d] > pontos) {
                        f[d] -= pontos;
                        // Se a receptora estiver destruída, ela renasce com o valor exato (mínimo 1)
                        if (f[r] > 5) {
                            f[r] = pontos;
                            printf("\nSUCESSO: Gousma %d revivida com %d de furia!\n", receptora, pontos);
                        } else {
                            f[r] += pontos;
                            printf("\nSUCESSO: Furia transferida!\n");
                        }
                    } else {
                        printf("\nOPCAO INVALIDA: A doadora deve ficar com pelo menos 1 de furia!\n");
                        system("pause");
                        continue;
                    }
    } else {
        printf("\nOPCAO INVALIDA: Escolha apenas suas proprias gousmas (%d ou %d)!\n", min, max);
        system("pause");
        continue;
    }
}

            if (furiaP2[0] > 5 && furiaP2[1] > 5) { printf("\n%s VENCEU!", nomeP1); fimDeJogo = 1; }
            else if (furiaP1[0] > 5 && furiaP1[1] > 5) { printf("\n%s VENCEU!", nomeP2); fimDeJogo = 1; }
            
            system("pause");
            turno++;
        }
//===================================================jogar novamente===================================================

       do {
        printf("\n-------------------------------------------------------------------------------------------------------\n\n");
        printf("Voce deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar);
        
        if (jogar != 's' && jogar != 'n') {
            printf("Por favor, escolha apenas 's' para continuar ou 'n' para sair.\n");
        }
    } while (jogar != 's' && jogar != 'n');

} while (jogar == 's');

	system("cls");	
}







