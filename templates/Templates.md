## C'est quoi un template ?
> Un template  est une fonctionnalité puissante ajoutée au C++. Il vous permet de définir des classes et fonctions génériques et fournit ainsi un support pour la programmation générique.
>
>La programmation générique est une technique qui consiste à écrire du code d'une manière indépendante de tout type de données particulier.

## Comment fonctionnent les modèles ?
>Les templates sont expansés(créer plusieurs copies du template) au moment du compilation. C'est comme les macros. La différence est que le compilateur effectue une vérification de type avant l'expansion du template. L'idée est simple, le code source ne contient que la fonction/classe, mais le code compilé peut contenir plusieurs copies de la même fonction/classe.

## Fonction Template
>Une fonction template fonctionne de manière similaire à une fonction normale, avec une différence clé. Une seule fonction template peut fonctionner avec différents types de données à la fois, mais une seule fonction normale ne peut fonctionner qu'avec un seul ensemble de types de données.
>
>Normalement, si vous devez effectuer des opérations identiques sur deux ou plusieurs types de données, vous utilisez la surcharge de fonctions, donc créer deux fonctions avec les types de données requises.
>
>Cependant, une meilleure approche serait d'utiliser des modèles de fonction car vous pouvez effectuer la même tâche en écrivant moins de code, efficace et maintenable.
## Comment déclarer une fonction template ?
>Une fonction template commence par le mot-clé "**template**" suivi du ou des paramètres du template à l'intérieur de **< >** qui est suivi de la déclaration de fonction.
>
```c++
template <typename T> // ou template <class T>
type_de_retour nom_fonction (T param1, T param2, ...) {
  // Code du fonction
}
```
>
>Dans le code ci-dessus, T est un type générique (type du template )qui accepte différents types de données (int, float) et typename est un mot-clé.
>
>Vous pouvez également utiliser le mot-clé "**class**" au lieu de "**typename**" dans l'exemple ci-dessus.
>
>Lorsqu'un argument d'un type de données est passé à **nomFonction()**, le compilateur génère une nouvelle version de **nomFonction()** pour le type de données donné.