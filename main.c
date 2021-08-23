#include <stdio.h>
#include <stdlib.h>
#define USUARIO 16
#define SENHA 5
#define INDICA 100

typedef struct{
char namegame [INDICA];
char lanc [INDICA];
char desen [INDICA];
char distr [INDICA];
}AdcGame;

int main()
{
    AdcGame indc;
    float totalP=0;
    int menu, njogo, cat, opJogos, quantidade;
    char user[USUARIO], senha[SENHA] , senhac[SENHA];

    printf("\n\n------------BEM VINDO AO RPG PASS---------------\n\n");
    printf("\n\n Aqui temos diversos RPGs que podem ser alugados e \njogados");
    printf(", e nao se preocupe, sao todos jogos leves!!!\n\n");
    printf("\n\n---------------CASDASTRE-SE--------------\n\n");
    printf("\n Maximo de caracteres para: Login=15, Senha=4");
        printf("\n Login:");
        scanf("%s",user);
            while(strcmp(senha,senhac)!=0){
        printf("\n Senha: ");
        scanf("%s",senha);
        printf("\n Confirme sua senha:");
        scanf("%s",senhac);

        if(strcmp(senha,senhac)==0){
                printf("\n\nCADASTRADO!!!\n\n");

            }else{
             printf("\nSenhas diferentes, tente novamente.\n");
                }
         }
         system("cls");
    do{
    printf("\n\n------------------------MENU-------------------------------\n\n");
    printf("\t 1.Para ver o catalogo com informacoes\n\t 2.Altere seu cadastro\n");
    printf("\t 3.Alugar jogos e exibir o total a ser pago\n");
    printf("\t 4.Exibir total a pagar");
    printf("\n\t 5.Alterar login e senha");
    printf("\n\t 6.Indicar jogos para loja\n\t 7.Exibir indicacao\n");
    printf("\t Qualquer outro numero para sair\n\n");
    printf("\n Digite o que voce deseja fazer: ");
    scanf("%d", &menu);
    switch(menu){
        case 1: while(cat!=0){

    printf("\n\n  Veja nosso imenso catalogo de jogos:\n\n  Chrono Trigger(1)  Chrono Cross(2)  Chroma Squad(3)");
    printf("  Terraria(4)\n  Pit People(5)  Fallout New Vegas(6) Baldur's Gate II(7)  Undertale(8)\n ");
    printf(" Grimm's Hollow(9)  Stardew Valley(10) The Lord of the Rings Online(11) Final Fantasy(12)");
    printf("\n Escolha um jogo e digite seu numero para saber mais sobre ele: ");
    scanf("%d", &njogo);
    switch(njogo){
        case 1:
                printf("\n\n Nome do Jogo: Chrono Trigger\n Data de lancamento: 22/08/1995\n Desenvolvedora: Square\n");
                printf(" Distribuidora: Square\n Criador do jogo: Akira Toriyama\n Horas medias de jogo: 23 horas\n");
                printf(" Tamanho: 2 GB\n Nota no MetaCritic: 92\n");
                printf(" Requisitos Minimos: CPU- Intel Core i3 2.3GHz\n");
                printf("                     RAM- 4 GB\n");
                printf("                     GPU- INTEL HD Graphics 530\n");
                printf(" Preco: R$49,90      SO- Windows 7/8/8.1/10 (32bit/64bit)\n\n");

        break;
        case 2: printf("\n\n Nome do Jogo: Chrono Cross\n Data de lancamento: 18/11/1999\n Desenvolvedora: SquareSoft\n");
                printf(" Distribuidora: Square\n Criador do jogo: Akira Toriyama\n Horas medias de jogo: 35 horas\n");
                printf(" Tamanho: 2 GB\n Nota no MetaCritic: 94\n");
                printf(" Requisitos Minimos: CPU- Intel Core i3 2.3GHz\n");
                printf("                     RAM- 4 GB\n");
                printf("                     GPU- INTEL HD Graphics 530\n");
                printf(" Preco: 169,90       SO- Windows 7/8/8.1/10 (32bit/64bit\)\n\n");;

        break;
        case 3: printf("\n\n Nome do Jogo: Chorma Squad\n Data de lancamento: 30/04/2015\n Desenvolvedora: Behold Studios\n");
                printf(" Distribuidora: Behold Studios\n Criador do jogo: Saulo Camarotti\n Horas medias de jogo: 12:30 horas\n");
                printf(" Tamanho: 250 MB\n Nota no MetaCritic: 75\n");
                printf(" Requisitos Minimos: CPU- 2000 Mhz \n");
                printf("                     RAM- 512 MB\n");
                printf("                     GPU-  640x480 Resolution\n");
                printf(" Preco: R$ 28,99     SO-Windows XP ou acima dele (64 bits)\n\n");

        break;
        case 4: printf("\n\n Nome do Jogo: Terraria\n Data de lancamento: 16/05/2011\n Desenvolvedora: Re-Logic\n");
                printf(" Distribuidora: Re-Logic\n Criador do jogo: Andrew Spinks\n Horas medias de jogo: 92:30 horas\n");
                printf(" Tamanho: 200 MB\n Nota no MetaCritic: 83\n");
                printf(" Requisitos Minimos: CPU- 2.0 Ghz \n");
                printf("                     RAM- 2,5GB\n");
                printf("                     GPU-  128MB Video Memory\n");
                printf(" Preco: R$ 19,99     SO- Windows 7 ou acima\n\n");

        break;
        case 5: printf("\n\n Nome do Jogo: Pit People\n Data de lancamento: 13/01/2017\n Desenvolvedora: The Behemoth\n");
                printf(" Distribuidora: The Behemoth\n Criador do jogo: Tom Fulp\n Horas medias de jogo: 9 horas 35 min\n");
                printf(" Tamanho: 3 GB\n Nota no MetaCritic: 78\n");
                printf(" Requisitos Minimos: CPU- Intel Core 2 Duo 2GHz  \n");
                printf("                     RAM- 4 GB\n");
                printf("                     GPU-  512 MB Video Card\n");
                printf(" Preco: R$ 37,90     SO- Windows Vista ou acima\n\n");

        break;
        case 6: printf("\n\n Nome do Jogo: Fallout: New Vegas\n Data de lancamento: 19/10/2010\n Desenvolvedora: Obsidian Entretainament\n");
                printf(" Distribuidora: Bethesda Softworks\n Criador do jogo: Travis Stout\n Horas medias de jogo: 100 horas\n");
                printf(" Tamanho: 10 GB\n Nota no MetaCritic: 84\n");
                printf(" Requisitos Minimos: CPU- 2.0GHz Dual Core   \n");
                printf("                     RAM- 2GB \n");
                printf("                     GPU-  NVIDIA GeForce 6\n");
                printf(" Preco: R$19,99      SO- Windows 7 ou acima\n\n");;

        break;
        case 7: printf("\n\n Nome do Jogo: Baldurs Gate II: Shadow of Amn\n Data de lancamento: 24/09/2000\n Desenvolvedora: Black Isle Studios, BioWare\n");
                printf(" Distribuidora: Beamdog\n Criador do jogo: James Ohlen\n Horas medias de jogo: 60 horas\n");
                printf(" Tamanho: 4 GB\n Nota no MetaCritic: 95\n");
                printf(" Requisitos Minimos: CPU- Intel Core Duo 1GHZ\n");
                printf("                     RAM- 512MB \n");
                printf("                     GPU-  OpenGL 2.0 compatible\n");
                printf(" Preco: R$36,90      SO- Windows Vista ou acima\n\n");

        break;
        case 8: printf("\n\n Nome do Jogo: Undertale\n Data de lancamento: 15/09/2015\n Desenvolvedora: Toby Fox\n");
                printf(" Distribuidora: Toby Fox\n Criador do jogo: Toby Fox\n Horas medias de jogo: 8 horas\n");
                printf(" Tamanho: 200 MB\n Nota no MetaCritic: 92\n");
                printf(" Requisitos Minimos: CPU- 2GHZ\n");
                printf("                     RAM- 2 GB \n");
                printf("                     GPU- 128 MB \n");
                printf(" Preco: R$19,90      SO- Windows XP ou acima\n\n");

        break;
        case 9: printf("\n\n Nome do Jogo: Grimms Hollow\n Data de lancamento: 30/10/2019\n Desenvolvedora: Ghost Hunter\n");
                printf(" Distribuidora: Ghost Hunter\n Criador do jogo: Bem Iawrence\n Horas medias de jogo: 3 horas\n");
                printf(" Tamanho: 350 MB\n Nota no MetaCritic: 80\n");
                printf(" Requisitos Minimos: CPU-Intel Pentium 4 1.5GHz \n");
                printf("                     RAM- 2 GB \n");
                printf("                     GPU- 256 MB \n");
                printf(" Preco: 4,99         SO- Windows XP, Vista, 7, 8, ou 10\n\n");
        break;
        case 10: printf("\n\n Nome do Jogo: Stardew Valley\n Data de lancamento: 26/11/2016\n Desenvolvedora: Converned Ape\n");
                printf(" Distribuidora: Converned Ape\n Criador do jogo: Eric Bone\n Horas medias de jogo: 90 horas\n");
                printf(" Tamanho: 500 MB\n Nota no MetaCritic: 89\n");
                printf(" Requisitos Minimos: CPU- 2GHz  \n");
                printf("                     RAM- 2GB \n");
                printf("                     GPU- 256 MB \n");
                printf(" Preco: 24,99        SO- Windows XP, Vista, 7, 8, ou 10\n\n");
        break;
        case 11: printf("\n\n Nome do Jogo: The Lord of The Rings Online\n Data de lancamento: 06/06/2007\n Desenvolvedora: WB Games Boston\n");
                printf(" Distribuidora: Standing Stone Games Ape\n Criador do jogo: WB Games Boston, Standing Stone Games\n Horas medias de jogo: 200 horas\n");
                printf(" Tamanho: 12 GB\n Nota no MetaCritic: 86\n");
                printf(" Requisitos Minimos: CPU- Intel Pentium 4 3.0GHz   \n");
                printf("                     RAM- 1GB \n");
                printf("                     GPU- 128 MB \n");
                printf(" Preco: 4,99         SO- Windows XP\n\n");
        break;
        case 12: printf("\n\n Nome do Jogo: Final Fantasy VII\n Data de lancamento: 31/01/1997\n Desenvolvedora: Square Enix\n");
                printf(" Distribuidora: Square Enix\n Criador do jogo: Yoshitaka Amano\n Horas medias de jogo: 36 horas\n");
                printf(" Tamanho: 3 GB\n Nota no MetaCritic: 92\n");
                printf(" Requisitos Minimos: CPU- 2GHz \n");
                printf("                     RAM- 1GB \n");
                printf("                     GPU-  DirectX 9.0c- compatible\n");
                printf(" Preco: 19,99        SO- Windows XP\n\n");

        break;
        default: printf("\n\n\n\n  JOGO NAO LISTADO  \n\n\n");

        }
        printf(" (Digite 1 para aceitar ou qualquer numero para negar)\n Deseja continuar vendo o catalogo?:");
                         scanf("%d",&cat);
        }
            break;
        case 2: printf("\nt\n");
            break;
        case 3:
            printf("\n Alugue quantos jogos quiser!!!");
            printf("\n\nJogos\t\t\tNumero   Preco");
            printf("\nChrono Trigger\t\t   1   R$49,90");
            printf("\nChrono Cross\t\t   2   R$169,90");
            printf("\nChroma Squad\t\t   3   R$28,90");
            printf("\nTerraria\t\t   4   R$19,90");
            printf("\nPit People\t \t   5   R$37,90");
            printf("\nFallout: New Vegas\t   6   R$19,90");
            printf("\nBaldur's Gate II\t   7   R$36,90");
            printf("\nUndertale\t\t   8   R$19,90");
            printf("\nGrimm's Hollow\t\t   9   GRATUITO");
            printf("\nStardew Valley\t\t   10  R$24,90");
            printf("\nTLOTRO\t\t\t   11  GRATUITO");
            printf("\nFinal Fantasy VII\t   12  19,90");
            printf("\nPara nao comprar nada\t   0");
        do{
            printf("\n\nO que deseja alugar?");
            scanf("%d", &opJogos);
            if(opJogos!=0){
            printf("\nQuantos deseja alugar?");
                scanf("%d", &quantidade);
            switch(opJogos){
            case 1:
                totalP=totalP+(quantidade*49.90);
                break;
            case 2:
                totalP=totalP+(quantidade*169,90);
                break;
            case 3:
                totalP=totalP+(quantidade*28,90);
                break;
            case 4:
                totalP=totalP+(quantidade*19,90);
                break;
            case 5:
                totalP=totalP+(quantidade*37,90);
                break;
            case 6:
                totalP=totalP+(quantidade*19,90);
                break;
            case 7:
                totalP=totalP+(quantidade*36,90);
                break;
            case 8:
                totalP=totalP+(quantidade*19,90);
                break;
            case 9:
                totalP=totalP+(quantidade*0);
                break;
            case 10:
                totalP=totalP+(quantidade*24,90);
                break;
            case 11:
                totalP=totalP+(quantidade*0);
                break;
            case 12:
                totalP=totalP+(quantidade*19,90);
                break;
            }
          }
        }while(opJogos!=0);
            break;
        case 4: printf("\nO preco a ser pago e %.2f", totalP);
            break;
        case 5: printf("Seu login e senha atuais sao %s e %s",user, senha);
                printf("\nDigite seu novo login(max 15 caracteres): ");
                fflush(stdin);
                scanf("%s", user);
                printf("Digite sua nova senha(max 4 caracteres): ");
                fflush(stdin);
                scanf("%s", senha);
                printf("Seu novo login eh %s e sua nova senha eh %s",user, senha);
            break;
        case 6: printf("Digite o nome do jogo: ");
                fflush(stdin);
            fgets(indc.namegame,INDICA,stdin);
                printf("Digite o lancamento do jogo: ");
                fflush(stdin);
            fgets(indc.lanc,INDICA, stdin);
                printf("Digite o nome da desenvolvedora: ");
                fflush(stdin);
            fgets(indc.desen,INDICA, stdin);
                printf("Digite a distribuidora : ");
            fgets(indc.distr,INDICA, stdin);
            break;
        case 7: printf("Nome do jogo indicado: %s", indc.namegame);
                printf("Data do lançamento: %s", indc.lanc);
                printf("Desenvolvedor: %s", indc.desen);
                printf("Distribuidora: %s", indc.distr);
            break;

        default: printf("\ntchau!!\n");
        menu=0;
            break;
        }
    }while(menu!=0);

    return 0;
}
