<h1 align="center">Push Swap</h1>
<p align="center">
	<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" />
</p>
<div align="center">
	<img src="https://github.com/amelmnd/push-swap/blob/main/push_swap_demo.gif" width="500" height="300" />
</div>

- [Description](#description)
- [Structure du projet](#structure-du-projet)
- [Utilisation de push_swap](#utilisation-de-push_swap)
	- [Pre-requis](#pre-requis)
	- [Compilation du projet](#compilation-du-projet)
	- [Exécution du projet](#exécution-du-projet)
- [Ressources utiles](#ressources-utiles)
- [Test](#test)

## Description

Le but de ce projet est de développer un programme permettant de trier des données entrées par l'utilisateur et de trier ces entiers (positifs et négatifs) dans une pile passée en paramètre par ordre croissant.

Il n'est autorisé d'utiliser que deux piles avec un ensemble d’instructions limité, et de réaliser le moins de coups possibles.

Ce projet est le premier algorithme de tri que j'ai codé, et pour le faire, j'ai utilisé l'algorithme Bubble Sort pour indexer les chiffres et je les ai ensuite triés à l'aide de l'algorithme Radix.

## Structure du projet
```tree
├── include
├── instruction
├── parsing
├── sort
└── utils
```
- include et utils : fonctions nécessaires au projet
- parsing : fonction de l'input
- instruction : fonctions définissant les actions possibles pour le tri
- sort : les fonctions de tri

## Utilisation de push_swap

### Pre-requis

* **compilateur `gcc`**

### Compilation du projet
```shell
make
```
### Exécution du projet

```shell
./push_swap 2 1 3 6 5 8
```
_Valeur max gérée : 500 nombres aléatoires, en maximum 5500 opérations_

## Ressources utiles
[  Number Generator ](https://numbergenerator.org/permutations-and-combinations/list#!numbers=4&lines=5&low=0&high=100&range=1,2,3,4&unique=true&order_matters=true&csv=&oddeven=&oddqty=0&sorted=false&sets=&addfilters=
)

## Test
- [ push_swap_visualiser](https://github.com/Niimphu/push_swap_visualiser)
_visualiser de la video_
- [ push_swap_leak_tester ](https://github.com/IDC87/push_swap_leak_tester)
- [ louisabricot/push_swap_tester ](https://github.com/laisarena/push_swap_tester)
- [ gemartin99/Push-Swap-Tester ](https://github.com/gemartin99/Push-Swap-Tester)
- [ LeoFu9487/push_swap_tester ](https://github.com/LeoFu9487/push_swap_tester)
