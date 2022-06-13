
# My_rpg

The goal of this project is to create an rpg (role playing game) on the theme of our choice we were 3 for this project



## Description 📜

Your game must follow the following rules:
- The player needs to have characteristics which you can find in the status menu.
- The player can fight enemies, statistics will impact the fights results.
- There must be NPC in your game.
- You need to implement at least one quest.
- The player must have an inventory which can contain a limited set of items.
- The player can earn experience by winning fights and accomplishing specific actions.
- With enough experience, the player can level up, upgrading its statistics.


During this project we only had the right to some functions here


![Alt text](image/auth.png?raw=true "Title")


We made a scene system for menus, inventories, gameplay etc.
Then we created an intuitive menu with buttons that have corresponding hitboxes.
There was a button to start the game, one to close it, another for the options and a last one which explained how to play and the mechanics.


![Alt text](image/home.png?raw=true "Title")


In the option menu we created buttons to modify the framerates which can go from 30 to 90, the sound of the music and the sound of the noises, one for the credits, and a last one to go back.


![Alt text](image/menu.png?raw=true "Title")


The how to play button has several images that explain how to move, open the inventory, what are the attacks.


![Alt text](image/how.png?raw=true "Title")

Once you want to play, you press the play button and a screen appears to choose your character, each character has its own characteristics. Elfes are faster, women hit harder and men have more life


![Alt text](image/choose.png?raw=true "Title")


For the 3D effect we have superimposed 2 maps, one only with the elements that we want to draw over the player (trees, poles...), the other where the player will walk.


![Alt text](image/3D.png?raw=true "Title")


We can talk to the NPCs who will take us forward in the quest.


![Alt text](image/start.png?raw=true "Title")


There is an NPC who can sell keys that allow you to encounter the bosses, without the keys no bosses.


![Alt text](image/talk_key.png?raw=true "Title")


![Alt text](image/choose_key.png?raw=true "Title")


In the inventory you will find the current quest, your skills (speed, intelligence...), and the keys you have.


![Alt text](image/inventory.png?raw=true "Title")


The fights are played turn by turn, you play and then the monster plays. Your attacks will be unlocked by purchasing them. The attacks can have several effects, such as poison which will do damage at the end of each turn, regenshield which regenerates the shield at the end of the turn, bleeding etc... The attacks had particle effects to show which effects were applied.


![Alt text](image/combat1.png?raw=true "Title")


![Alt text](image/combat2.png?raw=true "Title")



## Installation 🔌

Install my_rpg

```bash
  git clone git@github.com:Pablodeibar/my_rpg.git
  cd my_rpg
  make
```
    
## Start 🎬

Start my_rpg

```bash
  ./my_rpg
```