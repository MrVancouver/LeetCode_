# LeetCode_
### Grupo de estudos para realizar códigos do LeetCode e compartilhar ideias entre nós.
## Glossário
 - [Merge_Strings](#merge_string)
 - [Find_The_Difference](#find_the_difference)
 - [StrStr](#strstr)
 - [isAnagram](#isanagram)
 - [repeated_pattern](#repeated_pattern)
 - [movezero](#movezero)

<a id="merge_string"></a>

1. Merge_Strings
 - Função no qual devemos mesclar duas strings(s1 e s2), alternando pelos caracteres e retornar o resultado das duas juntas. Por exemplo:
~~~
s1 = [ab];
s2 = [cd];
---------------
output = [acbd];
~~~

<a id="find_the_difference"></a>

2. Find_The_Difference
 - Se utilizando da representação decimal de cada caracter dentro da Tabela ASCII, devemos encontrar o resultado da diferença entre uma string e outra. Por exemplo:
~~~
s1 = [ab];
s2 = [cd];
s1 vale 195(a = 97 , b = 98)
s2 vale 199(c = 99 , d = 100)
return(199 - 195)
---------------
output = 4;
~~~

<a id="strstr"></a>

3. StrStr
 - Aqui devemos receber duas string, uma que contém uma frase e outra uma palavra, então caso a palavra esteja presente exatamente dentro da frase devemos retornar o index da posição inicial da palavra dentro da frase. Por exemplo:
~~~
frase = "Ventilador espanta mosquito"
palavra = "espanta"
-------------------------------------
output = frase[11] // ou seja, na posição 11 na frase se encontra o inicio da palavra
~~~

<a id="isanagram"></a>

4. isAnagram
 - Aqui recebemos duas Strings no qual devemos compara-las e verificar se são anagramas, ou seja, se possuem as mesmas letras e tamanho, podendo ou não a sua organização de letras ser diferente entre si. Por exemplo:
~~~
str1 = ["palavra"];
str2 = ["plaarva"];
-------------------
output = true;
~~~

<a id="repeated_pattern"></a>

5. Repeated_Pattern
 - Aqui devemos verificar se a string que é entregue tem um padrão de repetição dentro dela mesma. Por exemplo:
~~~
string = ["abcabcabcabc"];
--------------------------
output = true;
~~~

<a id="movezero"></a>

6. movezero
 - Neste código devemos receber um array de números inteiros e organizar o array movendo os números 0's para o final do array e mover os outros números para o início do array. Por exemplo:
~~~
array = {0, 1, 2, 0, 5, 9};
---------------------------
output = {0, 0, 1, 2, 5, 9};
~~~