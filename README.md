Tobii EyeX Plugin for Unreal Engine 4
=====================================

OVERVIEW

  The EyeX Plugin for Unreal Engine 4 makes it possible to create games that the
  player can interact with using her eyes. It does that by integrating the Tobii 
  EyeX Engine API into the Unreal Engine development environment.
  
  The plugin can be inserted into any game built with the Unreal Engine 4 and 
  used from both blueprints and C++ code.
  
CONTACT

  If you have problems, questions, ideas, or suggestions, please use the forums
  on the Tobii Developer Zone (link below). That's what they are for!

WEB SITE

  This plugin is hosted on GitHub:
  
  https://github.com/TobiiTechnology/EyeXforUE4

  Visit the Tobii Developer Zone web site for the latest news and support:

  http://developer.tobii.com/

GETTING STARTED

  0. Take a look at the developer's guide in this package.

  1. Check out the 4.5 branch of EpicGames/UnrealEngine, or your fork of choice, 
     from GitHub. Download and install the required files as described in the 
	 readme.md file.
	 Or, if you use an installed version of the Unreal Engine, you can skip 
	 steps 1-3.

  2. Optionally merge the pull request https://github.com/EpicGames/UnrealEngine/pull/582
     This removes the offset error that is present when the game starts. The 
	 workaround is to move the mouse pointer over the viewport.
  
  3. Build the Unreal Engine as described in the readme.md file.

  4. Download the EyeX SDK for C/C++ from developer.tobii.com. Extract the files 
     and copy the lib and include directories to Plugins/TobiiEyeX/ThirdParty/EyeX.
	 Note that the SDK license differs from the one used for this plugin.

  5. Locate the EyeXSamples.uproject file in the EyeX Plugin package. Right-
     click and select Generate Visual Studio project files. Open the Visual 
	 Studio solution file that appears. Build and run the sample project 
	 (EyeXSamples). The EyeXSamples editor should launch. Click play to start 
	 the samples.

  6. To import the plugin into your own game project:
     - Create a new directory in your Unreal project directory called "Plugins".
	 - Copy the contents of the Plugins directory in this repo into that 
	   directory.
	 - Start the editor and open the plugin viewer (can be found in the 
	   Windows->Plugins menu).
	 - Add a reference to the module in your build script (MYPROJECT.Build.cs). 
	   The relevant row might look something like:
	   PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "TobiiEyeX" });
	   
  7. Use the plugin through the EyeX function library (Blueprints) and/or the 
     IEyeXPlugin interface (C++).

  HAVE FUN!!!

REVISION HISTORY

  20 Nov 2014: First public release.

CONTRIBUTORS (excluding the Tobii developer communications team)

  Fredrik Lindh (Temaran) who set the ball rolling.
  Tim Lindeberg
  Special thanks to getnamo whose unofficial Hydra plugin has been very useful 
  as a working example of plugin code.
