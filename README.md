<h1 align="center">
  Prison Architect - Fix Prison Directions Not Saving
</h1>

This mod is for the game Prison Architect. It aims to fix staff and prisoner directions not saving properly, resulting in losing them on save re-load.

I didn't run into any issues during testing, so it should work fine. If you however do end up having any problems, don't be shy and share them, and in-case you know the answer to said problem, why not pull request a fix?

## Uninstall

  Don't worry, the .DLL doesn't download anything, so it's simple to get rid of the mod.
  1. Follow the steps below in [Installation](https://github.com/vojin154/pa_fix_direction_serialization?tab=readme-ov-file#installation), to find the folder, that contains the .DLL.
  2. Once you got the folder. Just find the .DLL, and remove it. Currently the mod uses `opengl32.dll`.
  3. If you did accidentally remove anything you weren't supposed to. You can always verify your files on the platform you are using.

## Installation

- Download the latest version under the releases section.
- Then simply extract the .DLL and drop it in your games folder.

**The games root folder - is the folder, that contains `Prison Architect64.exe`, which is where you drop the extracted .DLL**

**STEAM:**
  - Open your Steam Library and find Prison Architect there. Right click on it and select properties.
  - In the properties menu, go to the Files tab and click on Browse.
  - That will open the games root folder.

**GOG:**
  - **Offline**
    - As a GOG user, you should know where you've downloaded the Prison Architect folder. If you use offline version, then by default that should be `C:\GOG Games\Prison Architect`.
    - The folder should contain `Prison Architect64.exe`. If it does, then drop the mods .DLL there.
  - **GOG Galaxy**
    - Open your GOG Galaxy library and find Prison Architect there. Right click on it and select manage installation, and then click on show folder.
    - That will open the games root folder. 

## Make your own version

1. You should be able to either press the green button saying "Code" and press Download ZIP. Obviously a different way if you have your own.
2. After that you normally extract the files and voilà! You have successfully cloned the project.
3. Open the .sln file using Visual Studio (Latest recommended).
4. Once you have made your changes and are ready to test, then just simply go to "Build" on top of the window and either click "Build Source" or "Build Solution". Both options are completely same, unless you have changed them yourself, which I assume you know the difference if you do.
5. If the build was successfull, then in the location where your .sln file is, you now have a new folder called "Compiled". Open it, then folder "Files" and there's your .DLL, which you can now put into your games folder!

**DON'T BUILD IN DEBUG! THE GAME WILL THINK YOUR GPU ISN'T SUPPORTED AND WILL TRY TO LAUNCH IN SAFE MODE. I removed the debug version of MinHook, without which it won't build, just to be safe.**

## License

This project is licensed under the [MIT License](https://choosealicense.com/licenses/mit/).
