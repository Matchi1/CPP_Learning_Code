# Exercice 1

# Question 1

Les langages "compilé" ou "semi-compilé" nécessitent de créer un fichier binaire
pour pouvoir exécuter le code.
C'est pourquoi les types doivent être explicité dans le code.

Les langages "interprété" peuvent être exécuté directement, toutes les erreurs
sont affichées lors de l'exécution du programme.

# Question 2

**Comment les identifier ?**

Une erreur de compilation caractérise les erreurs de syntaxes dans le code 
tandis qu'une erreur d'exécution indique les incohérences dans l'état des variables.

**À quel moment se produisent-elles ?**

Les erreurs de compilation apparaissent au moment de la compilation et les erreurs 
d'exécution au moment du lancement du programme.

**Comment les corriger ?**

Pour corriger les erreurs de compilation, il suffit de vérifier la ligne du code
concernant, et corriger les erreurs de syntaxe.

Pour corriger les erreurs d'exécution sont les erreurs les plus difficiles à détecter
car il faut analyser le code et utiliser un debugger pour régler le problème.

# Question 3

**Que signifie en pratique l'expression "undefined behavior" (UB) ?**

"undefined behaviour" signifie que le programme n'arrive pas à compiler.

**Peut-on compiler un programme contenant du code classifié UB par le standard ?**

non

**Si oui, que peut-il se produire au moment de son exécution ?**

Dans tout les cas, le programme ne s'exécutera pas correctement, cela peut
provoquer une segfault ou encore une incohérence dans les données du programme.

# Exercice 2

## Question 1

### Sans -Werror

`const short s1;` : doit être initialisé

`bool b3{i1};` : Problème de conversion

`char c8{"a"};` : Problème de type

`double&      d12;` : Il faut initialiser la variable à référencer

`int&       i15 = i1;` : On référence une variable constante

`int&       i16 = b2;` : Problème de référencement

### Avec -Werror

On remarque que les erreurs sont les mêmes que ce soit avec ou sans l'option
-Werror

## Question 2

s0 : valeur indéfinie
u17 : 2

# Exercice 3

## Question 1

```
#include <iostream>

int add(const int a, const int b) {
  return a + b;
}

void add_to(int& a, const int b) {
  a += b;
}

int main() {
  const int x{10};
  int y = add(x, x);
  add_to(y, 22);
  std::cout << y << std::endl;
  return 0;
}
```

## Question 2

par valeur : on effectue une copie de la valeur, l'argument entré n'est pas modifiable
il est préférable de l'utiliser lorsque la valeur à copier occupe très peu
d'espace mémoire, notamment les types primitifs

par référence : on effectue une référence à la variable, l'argument entré est donc modifiable.
C'est utile lorsque l'on veut modifier plusieurs valeurs et garder répercuter ces modifications
sur les arguments.

par référence constante : on effectue une référence à la variable mais l'argument n'est pas
modifiable
Elle est utile lorsque l'argument entré est assez gros comme un tableau ou un vector,
donc copier les variables est très peu performant.

## Question 3

`int count_a_occurrences(const std::string& s);`

`void update_loop(float dt, const std::string& errors_out);`

`bool are_all_positives(const std::vector<int>& values, int negative_indices_out[], int& negative_count_out);`

`std::string concatenate(std::string str1, std::string str2);`

# Exercice 4

```
std::vector<unsigned int> count_lower(std::string word) {
	std::vector<unsigned int> counts (26);
	for(auto letter : word)
	{
		int index = letter - 'a';
		(counts[index])++;
	}
}
```
