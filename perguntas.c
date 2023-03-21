#include <stdio.h>

int main()
{
	
	int esc1, esc2, esc3, esc4, esc5, esc6, esc7, esc8, esc9, esc10;
	int acertos, erros;
	
	acertos = 0;
	erros = 0;
	
	printf("JOGO DAS PERGUNTAS:\n");
	printf("RESPONDA AS 10 PERGUNTAS\n\n\n");
	
	printf("*************************************\n\n\n");
	
	printf("PERGUNTA 1:\n\n");
	printf("Como inserir um comentario dentro do HTML?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) <!-- Comentario --> \n");
	printf("2 - (B) < Comentario > \n");
	printf("3 - (C) </Comentario> \n");
	printf("\n");
	scanf("%d", &esc1);
	printf("\n");
	
	switch(esc1)
	{
		case 1:
			acertos = acertos+1;
			
			printf("Resposta Correta!\n\n");
			
			break;
			
		case 2: 
			
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
			
			break;

		case 3: 
			
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.\n\n");
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 2:\n\n");
	printf("Qual versao do HTML e mais utilizado atualmente?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) HTML 3. \n");
	printf("2 - (B) HTML 5. \n");
	printf("3 - (C) HTML 6. \n");
	printf("\n");
	scanf("%d", &esc2);
	printf("\n");
	
	switch(esc2)
	{
		case 1:
			
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra B.");
			
			break;
			
		case 2: 
			acertos = acertos+1;
			
			printf("Resposta Correta!\n\n");
			
			break;

		case 3: 
			
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra B.\n\n");
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 3:\n\n");
	printf("O que significa SQL?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Linguagem nao estruturada. \n");
	printf("2 - (B) Linguagem de Cadastro em Banco de Dados. \n");
	printf("3 - (C) Structure Query Language. \n");
	printf("\n");
	scanf("%d", &esc3);
	printf("\n");
	
	switch(esc3)
	{
		case 1:
			
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra C.");
			
			break;
			
		case 2: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra C.");
			
			break;

		case 3: 
			
			acertos = acertos+1;
			printf("Resposta Correta!\n\n");
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 4:\n\n");
	printf("Para que serve o ponto-e-virgula no final das linhas no Banco de Dados?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Serve para terminar um comando ou instrucao SQL. \n");
	printf("2 - (B) Serve para deixar o codigo endentado. \n");
	printf("3 - (C) Serve para organizar as linhas de comando. \n");
	printf("\n");
	scanf("%d", &esc4);
	printf("\n");
	
	switch(esc4)
	{
		case 1:
			
			acertos = acertos+1;
			printf("Resposta Correta!\n\n");
			
			break;
			
		case 2: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
			
			break;

		case 3: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
			
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 5:\n\n");
	printf("Para que serve as bibliotecas na linguagem C?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Sao fundamentais para o desenvolvimento de programas em C. \n");
	printf("2 - (B) Serve para anular uma acao. \n");
	printf("3 - (C) Serve para reorganizar o desenvolvimento do programa.. \n");
	printf("\n");
	scanf("%d", &esc5);
	printf("\n");
	
	switch(esc5)
	{
		case 1:
			
			acertos = acertos+1;
			printf("Resposta Correta!\n\n");
			
			break;
			
		case 2: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
			
			break;

		case 3: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
			
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 6:\n\n");
	printf("o que significa main na linguagem C?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Funcao que serve como ponto de termino para a execucao do programa. \n");
	printf("2 - (B) Funcao que serve como ponto de escrita para a execucao do programa. \n");
	printf("3 - (C) Funcao que serve como ponto de partida para a execucao do programa. \n");
	printf("\n");
	scanf("%d", &esc6);
	printf("\n");
	
	switch(esc6)
	{
		case 1:
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra C.");
			
			
			break;
			
		case 2: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra C.");
			
			break;

		case 3: 
			acertos = acertos+1;
			printf("Resposta Correta!\n\n");
			
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 7:\n\n");
	printf("O que significa TI?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Tendencias da Informatica. \n");
	printf("2 - (B) Tecnologia da Informacao. \n");
	printf("3 - (C) Tecnica da Informatica. \n");     
	printf("\n");
	scanf("%d", &esc7);
	printf("\n");
	
	switch(esc7)
	{
		case 1:
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra B.");
			
			
			break;
			
		case 2: 
             acertos = acertos+1;
			 printf("Resposta Correta!\n\n");
  
			
			break;

		case 3: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra B.");
			
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 8:\n\n");
	printf("Qual empresa inventou o computador pessoal?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Microsoft. \n");
	printf("2 - (B) IBM. \n");
	printf("3 - (C) Linux. \n");     
	printf("\n");
	scanf("%d", &esc8);
	printf("\n");
	
	switch(esc8)
	{
		case 1:
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra B.");
			
			
			break;
			
		case 2: 
             acertos = acertos+1;
			 printf("Resposta Correta!\n\n");
  
			
			break;

		case 3: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra B.");
			
			
			break;	
			
				
	}
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 9:\n\n");
	printf("Por que o nome MICROSOFT?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Palavra proveniente da juncao de microscopic e software. \n");
	printf("2 - (B) Porque Bill Gates achou interessante. \n");
	printf("3 - (C) Porque alguem sugeriu esse nome. \n");     
	printf("\n");
	scanf("%d", &esc9);
	printf("\n");
	
	switch(esc9)
	{
		case 1:
             acertos = acertos+1;
			 printf("Resposta Correta!\n\n");
						
			
			break;
			
		case 2: 
            erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
  
			
			break;

		case 3: 
			erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra A.");
			
			
			break;	
			
				
	}
	
	
	printf("*************************************\n\n");
	
	printf("PERGUNTA 10:\n\n");
	printf("O que Steve Jobs inventou?\n\n");
	
	printf("Alternativas:\n\n");
	printf("1 - (A) Xbox. \n");
	printf("2 - (B) Samsung. \n");
	printf("3 - (C) Apple. \n");     
	printf("\n");
	scanf("%d", &esc10);
	printf("\n");
	
	switch(esc10)
	{
		case 1:
            erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra C."); 
						
			
			break;
			
		case 2: 
            erros = erros+1;
			printf("Resposta Errada!\n");
			printf("Alternativa correta letra C.");
  
			
			break;

		case 3: 
             acertos = acertos+1;
			 printf("Resposta Correta!\n\n");
						
			
			break;	
			
				
	}

	printf("-----------------------------------------------\n\n");
	printf("Quantidade de Acertos: %d\n", acertos);
	printf("Quantidade de Erros: %d\n\n", erros);
	printf("-----------------------------------------------\n\n");
	
		return 0;
}
