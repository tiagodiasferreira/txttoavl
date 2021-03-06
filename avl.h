#define MAX 50

typedef struct TipoAVL
{
    char palavra[MAX];
    int frequencia;
    struct TipoAVL *esquerda;
    struct TipoAVL *direita;
    int fb;
} PtAVL;

PtAVL* inicializa_avl();
int vazia_avl(PtAVL *avl, int *comp);
int compara(PtAVL *avl, char palavra[MAX], int *comp);
int maior(int i, int j, int *comp);
int maior_igual(int i, int j, int *comp);
int menor(int i, int j, int *comp);
int menor_igual(int i, int j, int *comp);
int igual(int i, int j, int *comp);
PtAVL* rotacao_direita(PtAVL* avl);
PtAVL* rotacao_esquerda(PtAVL *avl);
PtAVL* rotacao_dupla_direita (PtAVL* avl, int *comp);
PtAVL* rotacao_dupla_esquerda (PtAVL *avl, int *comp);
PtAVL* caso_1 (PtAVL *avl, int *comp_ger, int *rot, int *ok);
PtAVL* caso_2 (PtAVL *avl, int *comp_ger, int *rot, int *ok);
PtAVL* insere_avl(PtAVL *avl, char p[], int *comp_ger, int *rot, int *ok);
PtAVL* insere_avl_freq(PtAVL *avl, PtAVL *avl1, int *comp, int *rot, int *ok);
int conta_avl(PtAVL *avl, int *comp);
int aux_frequencia_avl(PtAVL *avl, char p[], int *comp);
void frequencia_avl(FILE *saida, PtAVL *avl, char p[], int *comp);
void contador_avl(PtAVL **avl0, PtAVL *avl1, int f0, int f1, int *comp, int *rot, int *ok);
int altura_avl(PtAVL *avl, int *comp);
int fator_balanceamento_nodo(PtAVL *avl, int *comp);
int fator_balanceamento_avl(PtAVL *avl,  int *comp);
void aux_imprime_avl(FILE *resultado, PtAVL *avl , int *comp);
void imprime_avl(FILE *resultado, PtAVL *avl, int f0, int f1, int *comp);
PtAVL *destroi_avl(PtAVL *avl, int *comp);
