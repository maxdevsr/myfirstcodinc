#include<iostream>
int main(int argc, char** argv) {

int i, numero[3];

printf("\n\n Por favor, insira o valor: \n");

for(i=0; i<3; i++)
{
printf("\n Digite o %d valor: ", i+1);

scanf("%d", &numero[i]);
}

printf("\n\n\n Valores finais: \n");

for(i=0; i<3; i++)
{


int a;

a = (3*numero[i]);




if((a%2)==0)
{
printf("\n O %d valor : %d e o Valor e par\n", i+1, (3*numero[i]));
}
else
{
printf("\n O %d valor : %d e o Valor e impar\n", i+1, (3*numero[i]));
}
}

return 0;

}