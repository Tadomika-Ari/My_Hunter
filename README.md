# 🎯 My Hunter - League of Legends Edition

<div align="center">

![League of Legends](https://img.shields.io/badge/Theme-League%20of%20Legends-0AC8FF?style=for-the-badge)
![C](https://img.shields.io/badge/C-93.4%25-00599C?style=for-the-badge&logo=c)
![Makefile](https://img.shields.io/badge/Makefile-6.6%25-427819?style=for-the-badge)

### 🏹 *"The heart is the strongest muscle"* - Braum

Un jeu de tir inspiré de l'univers de League of Legends, développé en C avec la bibliothèque CSFML. 

[Installation](#-installation) • [Gameplay](#-gameplay) • [Controls](#-controls) • [Features](#-features)

</div>

---

## 📖 À propos

**My Hunter** est un jeu de tir Duck Hunt-like revisité dans l'univers épique de **League of Legends**. Incarnez un champion et testez vos réflexes en chassant des cibles inspirées des créatures et champions de Runeterra ! 

### 🎮 Concept

- 🎯 Visez et éliminez les cibles qui apparaissent à l'écran
- ⚡ Gagnez des points et battez votre record
- 🏆 Défiez vos amis pour devenir le meilleur chasseur de la Faille
- 💀 Attention aux pénalités si vous ratez trop de cibles !

---

## ✨ Features

| Feature | Description |
|---------|-------------|
| 🎨 **Thème LoL** | Interface et sprites inspirés de League of Legends |
| 🎵 **Sound Design** | Effets sonores et musiques de l'univers du jeu |
| 📊 **Score System** | Système de points et de combos |
| ⏱️ **Difficulté Progressive** | Le jeu devient plus difficile au fil du temps |
| 🎯 **Précision Requise** | Testez vos réflexes de joueur ranked |

---

## 🚀 Installation

### Prérequis

Assurez-vous d'avoir installé :
- **GCC** (GNU Compiler Collection)
- **Make**
- **CSFML** (C Simple and Fast Multimedia Library)

#### Installation de CSFML (Ubuntu/Debian)
```bash
sudo apt-get update
sudo apt-get install libcsfml-dev
```

#### Installation de CSFML (Fedora)
```bash
sudo dnf install CSFML-devel
```

### Compilation

```bash
# Cloner le repository
git clone https://github.com/Tadomika-Ari/My_Hunter.git
cd My_Hunter

# Compiler le projet
make

# Lancer le jeu
./my_hunter
```

### Nettoyage

```bash
# Supprimer les fichiers objets
make clean

# Supprimer tous les fichiers générés
make fclean

# Recompiler entièrement
make re
```

---

## 🎮 Gameplay

### 🕹️ Controls

| Touche | Action |
|--------|--------|
| 🖱️ **Souris** | Viser |
| 🖱️ **Clic Gauche** | Tirer |
| ⎋ **ESC** | Quitter le jeu |

### 📊 Système de Score

- ✅ **Cible touchée** :  +10 points
- 🎯 **Headshot** : +25 points (si implémenté)
- 🔥 **Combo** :  Multipliez vos points ! 
- ❌ **Cible manquée** :  Malus ou perte de vie

---

## 🏗️ Structure du Projet

```
My_Hunter/
├── 📁 src/           # Code source C
├── 📁 include/       # Headers (. h)
├── 📁 assets/        # Sprites, sons, musiques
│   ├── sprites/      # Images du jeu
│   ├── sounds/       # Effets sonores
│   └── fonts/        # Polices
├── 📁 lib/           # Bibliothèques externes
├── Makefile          # Automatisation de la compilation
└── README.md         # Ce fichier
```

---

## 🛠️ Technologies

<div align="center">

| Technologie | Usage |
|-------------|-------|
| ![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white) | Langage principal |
| ![CSFML](https://img.shields.io/badge/CSFML-8CC445?style=flat-square) | Graphismes et audio |
| ![Make](https://img.shields.io/badge/Make-427819?style=flat-square) | Build automation |

</div>

---

## 🎨 Inspirations League of Legends

Ce projet s'inspire de l'univers riche de **League of Legends** :

- 🏹 **Champions chasseurs** : Ashe, Caitlyn, Varus
- 🐲 **Créatures de Runeterra** : Dragons, Baron Nashor, Herald
- 🎵 **Ambiance sonore** : Musiques épiques de LoL
- 🎨 **Style visuel** : Direction artistique inspirée du jeu

---

## 📝 Améliorations Futures

- [ ] Système de niveaux avec différentes maps
- [ ] Sélection de champions avec abilities uniques
- [ ] Mode multijoueur compétitif
- [ ] Leaderboard en ligne
- [ ] Plus d'effets visuels et particules
- [ ] Système de skins et customisation

---

## 👤 Auteur

**Tadomika-Ari**

- GitHub: [@Tadomika-Ari](https://github.com/Tadomika-Ari)
- Repository: [My_Hunter](https://github.com/Tadomika-Ari/My_Hunter)

---

## 📜 License

Ce projet est un projet éducatif.  League of Legends et tous les assets associés sont la propriété de **Riot Games**.

---

<div align="center">

### 🌟 Si vous aimez ce projet, n'hésitez pas à lui donner une ⭐ !

**GG WP! ** 🎮

*"Welcome to Summoner's Rift"*

---

Made with 💙 and ☕ by Tadomika-Ari

</div>
