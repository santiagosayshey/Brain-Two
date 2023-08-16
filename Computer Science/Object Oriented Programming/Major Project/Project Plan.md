![](https://lh6.googleusercontent.com/JdUM4yrCDunUIrcJlOlBCVMFXGs4aKI_iiTUaSH5LVmnmLrxEsqr-UalWf1ZSI9PxC7dpc3UE7ZHWdblHwvHoao7ts7d5TlyGUZpf_E0o4ncQRdRfhPS6rItaZvpreaRb-9iCTwPg7oCu540SARXThI)

## Project Idea:

Turn Based Rogue-Like presented entirely using OOP and SFML. Rogue-Likes are video games based on the game ‘Rogue’, originally released in 1980 and are usually characterised by perma-death and randomly generated dungeons. Popular examples include Slay the Spire, The Binding of Isaac, Faster than Light and Hades. 

```
Rogue-like is a catch all term that spans a variety of games over the past 40 years and really can be anything. It’s an interface for video games! They all have the same ‘gameplay loop’ at heart but often evolve into something much more unique. This is what makes it the perfect candidate for a coding project.
```

![](https://lh4.googleusercontent.com/dLKNWOIgrecnC-m2gX2ob7C_kL3sRN8G6YY0vuPPYKglX-BiODk5EJLDqFYDTqzEa0SBnUb2bRWEnuz2aPS85o81r6eAmtC-aMQuTLhIYTYNRfrCjEEZLcMmNv40qR39urUnlIqDrPg9_vBpfgmi6uw)

[https://github.com/santiagosayshey/OOProject](https://github.com/santiagosayshey/OOProject)

## Use Cases / Interactions & User Interface:

### General Idea: 

Each game will always consist of two components - the current game state and the player. Once a new game instance is created, a window will launch, which can be used by the player to interact with the game. The game will work by updating and drawing  ‘drawables’ inside the window each frame. These drawables consist of textures, animated sprites, text and buttons. Each of these drawables will be able to check for collisions as well as update and draw themselves in the current state. The game state defines what entities will be updated and drawn every frame and therefore allow the game to dynamically change its behaviour based on user input. This is achieved by allowing the game to set its own state, and allowing each state to have different definitions of how it updates and renders the current window, whereby each definition can override every other definition. 

*This idea generalises the entirety of the game, which is further expanded upon in the next section where more concrete objects and behaviours are identified and explored.* 

  

### Specific Ideas: 

Building upon this general idea, we can clearly identify some interfaces that will derive a number of different objects that allow the game to scale linearly. This section will cover a majority of the different scenarios in which these inherited classes may operate. It will also heavily cover the interactivity and user interface portion of this plan. 

- Splash Screen

The game begins by loading into the splash state, where a texture is loaded in and used as the background. This texture is used to display the title. The player can advance into the next state by pressing a key on their keyboard. This is achieved by using an event manager, which checks for key presses when the current state updates.  The same is used for mouse clicks and other SFML events such as closing the window. 

- Main Menu
The game will then change into the menu state, which consists of 2 buttons - play and quit. Hovering over each button will update the colour of the button, indicating to the player that they are able to click it. Clicking the button results in the game changing its state; Clicking the quit button will close the window and end the game. Clicking the play button will change the game into the character select state. The menu state also includes another texture similar to the splash screen. 

- Character Select
Within the character select state, the player is able to choose a character to play with. 3 buttons corresponding to three different characters will be displayed, and when clicked, will change the displayed character. The character’s sprite will play an idle animation in the window. This is achieved through the event manager. More information on animation can be found in the function explanations. The button will also draw a text drawable, describing the stats of each of the characters. This button also updates the player’s stats corresponding to each of the characters. These stats include health, armour, attack power, strengths, weaknesses, accuracy, evasion, experience and current level. Once the player has made their decision, they can click the embark button, which will save the current stats to the player and switch the game state to gameplay. 

- Gameplay
The gameplay state derives into various states. This means that each of the states may coexist, and that their information is not destroyed and can therefore be used amongst each other.

- Map
The map state: In this state, a map texture will be displayed and static sprites will be randomly generated in each of the empty level slots. These sprites represent the different levels that the player must beat to win the game. The game consists of dynamic progression, in which the player chooses their own path to the boss. These levels include enemy encounters, treasure rooms, and mystery rooms. To pick a level, the player must have beaten the previous level, and click a current level. Clicking a level results in a new game state:

- Enemy Encounter
This section is planned to be developed using agile methodology and is subject to major changes. The following tries to briefly capture the essence of what these encounters are meant to be. They do not represent the final result. Enemy encounters will use each of the drawables and have multiple inherited gameplay states. 

This section involves using turn based combat to simulate a fight between the player and the enemy. The player and enemy will take turns performing actions on each other such as attacking and defending. These actions may impact their stats and lead to various different states. Attacking the enemy may result in them losing all their health and dying. Similar results can happen to the player. The different scenarios that can occur during an enemy encounter are as follows: Fight start, Player turn, Enemy turn, Player wins, Enemy wins. More could be added in the future. There will also be drawables such as text and buttons to dynamically update the stats of the player and display them on screen. This includes scenarios in which the player is damaged and their health text will update on screen to reflect this. Moreover, sound effects will also be used for greater spectacle. If the player beats a non boss enemy, they will return to the map and select a new level. If they die, they will be sent to the main menu and flavour game over text will display on the screen. 

- Treasure Level
In the treasure state, the player’s current experience is increased such that it results in a level up. When the player levels up, they can choose to increase one of their stats - health, attack power, accuracy or evasion. These are represented with buttons. There also should be a treasure texture loaded in as the background. Once the player has made their choice, the game switches back to the map state. 

- Mystery Level
The mystery state randomly picks between the treasure state and the enemy encounter state. 

In the case that the player beats all the levels, this means they have beaten the entire game, resulting in a game victory state. This state removes all previous states and displays text explaining to the player they have won. It will show stats such as run time, high score, etc. The game will then switch back to the menu state where the player can start a new game or quit.

*Now that we have thoroughly identified any potential objects and their data members / behaviours, it is vital to create a UML class diagram which will not only contain this information, but also highlight any aggregation and hierarchical relationships.*

## UML Class Diagram

![[UML Class Diagram.drawio 1.png]]

## Time Plan

Now that the general core idea of the project has been identified and some proof of concept coding has been completed, it is vital that a proper time plan be created to ensure success in the development portion of this project. The table below provides our general outline for the planning, development, and delivery of the project. As stages are being planned pre-emptively, they are susceptible to change and we may not strictly adhere to it.

![](https://lh5.googleusercontent.com/ZBHzOv5W2jpMY7MiUNt-M86DTvmD4dx3cKcLWTapTXd4-r5ISJrdSM3G9-RTEhhQGXIq9NKqnEjz9xQb7j_zHivcWzo1haOB2330jq5nIuHmYr31w4ohR94vSCg0OMl1JUn2C4FqqOWMvv1o1ECQhBg)
