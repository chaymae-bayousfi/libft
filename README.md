# 📚 Libft - Ma Bibliothèque C Personnelle

Bienvenue sur **Libft**, votre première bibliothèque C réimplémentant les fonctions standards !  
Ce projet est réalisé dans le cadre de l'école 42 et a pour but de consolider vos bases en C, en développant vos propres versions de fonctions classiques.

---

## ✨ Sommaire

- [🚀 À propos du projet](#-à-propos-du-projet)
- [📦 Fichiers et Organisation](#-fichiers-et-organisation)
- [⚙️ Compilation & Utilisation](#️-compilation--utilisation)
- [🛠️ Fonctions implémentées](#️-fonctions-implémentées)
- [💡 Exemples d'utilisation](#-exemples-dutilisation)
- [🤝 Contribution](#-contribution)
- [📄 Licence](#-licence)
- [👤 Auteur](#-auteur)

---

## 🚀 À propos du projet

Libft est une collection de fonctions utilitaires en C, écrites from scratch sans utiliser les fonctions de la libc (sauf `write`, `malloc`, et `free`).  
C'est **une base solide** pour tous vos futurs projets en C, notamment à 42.

---

## 📦 Fichiers et Organisation

```
libft/
├── ft_*.c           # Fichiers source des fonctions
├── ft_*.h           # Headers (si présents)
├── Makefile         # Pour compiler la bibliothèque
└── libft.a          # Bibliothèque statique générée
```

---

## ⚙️ Compilation & Utilisation

### 🏗️ Compiler la bibliothèque

```bash
cd libft
make        # Compile la bibliothèque libft.a
make clean  # Supprime les fichiers objets
make fclean # Supprime les fichiers objets ET libft.a
make re     # Recompile tout à zéro
```

### 🔗 Lier votre projet avec Libft

Ajoutez simplement `libft.a` à votre compilation :
```bash
gcc main.c -Llibft -lft -o monprog
```

---

## 🛠️ Fonctions implémentées

| Catégorie         | Fonctions Principales                                    |
|-------------------|---------------------------------------------------------|
| Conversion        | `ft_atoi`, `ft_itoa`                                    |
| Chaînes           | `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strcat`...   |
| Mémoire           | `ft_memset`, `ft_memcpy`, `ft_bzero`, `ft_calloc`...    |
| Caractères        | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_tolower`...|
| Affichage         | `ft_putchar_fd`, `ft_putstr_fd`...                      |
| Listes chaînées   | (bonus) `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`... |
| ...               | Et bien d'autres encore !                               |

👉 Retrouvez la liste complète dans le dossier [libft/](./libft/).

---

## 🤝 Contribution

Toute contribution est la bienvenue !  
Proposez vos améliorations, corrigez des bugs, ou ajoutez des tests.  
N'hésitez pas à ouvrir une issue ou une pull request. ✨

---

## 📄 Licence

Projet réalisé dans le cadre pédagogique de l'école 42.  

---

## 👤 Auteur

- **Chaymae Bayousfi**  
  [Mon GitHub](https://github.com/chaymae-bayousfi)

---

> ⭐️ Si ce projet vous a aidé, laissez un ⭐️ !

```
🎉 Bon courage dans votre aventure C ! 🎉
```
