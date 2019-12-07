# PROJETO_QT_FINALIZADO
PROJETO_FINALIZADO



# MANUAL DO PROJETO

	

 - Projeto construído no QT Creator para a disciplina de Técnicas de
   Programação, período: 2019.2, IFPB : campus João Pessoa.  	O projeto
   consiste na criação de uma interface que sirva como gerenciador de
   receitas. Nela o usuário entra o nome da receita, anexa um link(ou
   URL) à mesma, atribui uma categoria, determina o seu grau de
   dificuldade e classifica à mesma através de uma nota(número de
   estrelas).

# PROJETO: GERENCIADOR DE RECEITAS

	

 - Esse programa busca oferecer uma maneira prática do usuário gerenciar
   qualquer receita das quais ele tenha feito, guardando-as como em um
   livro de receitas. 	Sempre que estiver afim de cozinhar, ele pode
   abrir o "livro", decidir o prato que quer fazer e ir direto ao site
   para vê os ingredientes e modo de preparo, sem a necessidade de perder
   tempo pesquisando.

## CONHECENDO A INTERFACE

	

 - O gerenciador tem sua interface dividida em duas partes:
   	 		A primeira parte é aonde o usuário entra com os dados de cada receita: nome,link(URL),categoria, dificuldade e o n°de estrelas.

![PARTE 1 : CADASTRO](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/interface%20aba%201.1.png)
 
![PARTE 1 : CADASTRO](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/interface%20aba%201.2.png)
          
		

 - Enquanto a segunda parte é aonde ficam as receitas cadastradas:

![PARTE 2 : RECEITAS CADASTRADAS](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/interface%20aba%202.png)

## REGRAS DE CADASTRO

		

 - Para cadastrar uma receitar, o usuário deve preencher todos os campos
   corretamente,isto é, a receita deve ter pelo menos 4 caracteres de
   tamanho, é obrigatório atribuir o link da receita, bem como a sua
   categoria,seu grau de dificuldade e por fim, a sua nota.

		
![CADASTRO](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/interface%20aba%201.1.png)
 
![CADASTRO](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/interface%20aba%201.2.png)
				
		

 - Caso algum dos campos esteja preenchido de maneira errônea:

![Cadastro incorreto](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/cadastro%20errado.png)
    
## RECEITAS CADASTRADAS


**ACESSAR O LINK**
	

 - Para acessar o website da receita basta apenas da um clique simples
   no URL associado a ela que automaticamente irá levá-lo ao site.
   
![clicar no link](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/acessar%20link.png)

![site acessado](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/link%20acessado.png)


**ESTATÍSTICAS**
		
 - Para cada receita cadastrada o programa calcula as seguintes
   estatísticas:

![ESTATÍSTICAS](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/estat%C3%ADscas.png)

**BOTÕES DE ORDENAÇÃO**

		

 - Existem três métodos para ordenar as receitas cadastradas,  as
   alternativas de ordenar são: por nome, pela dificuldade, pelo n° de
   estrelas. Basta apenas clicar no botão de sua preferência.

![Sem ordenação](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/antes%20de%20ordenar.png)

	

 - Ordenar por nome:

	
![Ordenou pelo nome](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/ordenou%20por%20nome.png)

	

 - Ordenar pelo número de estrelas:

![Ordenou pelas estrelas](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/ordenou%20pelas%20estrelas.png)

	

 - Ordenar pela dificuldade:

![Ordenou pela dificuldade](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/ordenou%20pela%20dificuldade.png)

**BOTÕES ADICIONAIS**

		

 - Logo abaixo dos botões de ordenação existem mais dois botões, o 1°
   serve para resetar a tabela, isto é, limpar todas as receitas
   cadastradas;

		
![Antes de clicar no botão](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/resetar%20tabela%201.png)

![Após o clique](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/resetar%20tabela%202.png)

		

 - Enquanto o segundo botão, atualizar dados, serve como um método de
   evitar possíveis bugs nas estatísticas após a exclusão/edição de
   alguma receita, recomenda-se clicar no mesmo sempre que
   alterar/excluir algum dado.

![Antes do clique](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/atualizar%20dados%201.png)

![Após o clique](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/atualizar%20dados%202.png)

## EDITAR DADOS

		

 - Para editar dados é simples, ainda na aba das receitas cadastradas,
   basta apenas da dois cliques no item que queira editar.

![Antes do click duplo](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/editar%201.png)

		

 - Assim que efetuar o click duplo a seguinte aba irá aparecer,fique a
   vontade para alterar os dados, mas siga as mesmas regras do cadastro:
   
![enter image description here](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/aba%20editar%20excluir.png)
		

 - Após as alterações e depois de clicar no botão de editar,
   retornamos a nossa tabela, com os novos dados e as novas
   estatísticas:

![Após a edição](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/editar%203.png)

## EXCLUIR UMA RECEITA

		

 - Para excluir uma receita basta apenas clicar duas vezes na receita para aparecer a seguinte tela:

![Excluir](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/aba%20editar%20excluir.png)
			
		

 - Selecionando a opção excluir, basta apenas um click simples para
   continuar, irá aparecer uma mensagem  pedindo confirmação e logo após
   essa aqui:

![Excluir receita](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/menu%20excluir%202.png)
		

 - Após a exclusão, a tabela é novamente atualizada:

![Tabela atualizada](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/menu%20excluir%203.png)
		 

## SALVAR DADOS

		

 - Novamente no canto superior esquerdo, encontramos no menu a opção de
   salvar os dados:

![Salvar](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/menu.png)
		

 - Com um click simples somos levados a seguinte aba, aonde você escolhe
   o local aonde quer salvar os dados e o nome do arquivo:

![Salvar um arquivo](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/menu%20salvar.png)

		

 - O programa irá salvar a relação de receitas em um arquivo .csv( Comma
   Separated Values = Valores Separados por Vírgula).

## CARREGAR DADOS

		

 - Ainda na aba do menu, também temos a opção de carregar os dados
   salvos anteriormente:

		
![Menu - Carregar](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/menu.png)

		

 - Com apenas um click somos levados a seguinte aba:

![Carregar - arquivo](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/menu%20carregar.png)

![Arquivo - carregado](https://github.com/LuizWalker/PROJETO_QT_FINALIZADO/blob/master/imagens%20READme/atualizar%20dados%201.png)
	  

 - Frisando que apenas arquivos .csv devem ser selecionados.



## Informações adicionais

 Responsável pelo projeto: Luiz Walker.
 Estudante do IFPB - campus João Pessoa.
 Curso: Bacharelado em Engenharia Elétrica.
 Disciplina: Técnicas de Programação.
 Email: luizwalkeramaro@gmail.com.
