workspace "Lagrange"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
	}

	startproject "LagrangeVisualizer"
	
project "LagrangeCore"
	location "LagrangeCore"
	kind "StaticLib"
	language "C++"

	out_dir = "%{cfg.system}-%{cfg.buildcfg}-%{cfg.architecture}";

	targetdir("build/" .. out_dir .. "%{prj.name}")
	objdir("build-obj/" .. out_dir .. "%{prj.name}")
	
	files
	{
		"%{prj.name}/Source/**.h", 
		"%{prj.name}/Source/**.cpp",
		"%{prj.name}/Dependencies/pempek_assert/**.cpp",
	}

	removefiles  
	{
	}

	includedirs 
	{	
		"%{prj.name}/Source",
		"%{prj.name}/Dependencies/glm-1.0.1",
		"LagrangeCore/Dependencies/pempek_assert",
	}

	libdirs
	{
		"%{prj.name}/Dependencies/glm-1.0.1",
		"%{prj.name}/Dependencies/pempek_assert",
	}
		
	links
	{
		"kernel32.lib",
		"user32.lib",
		"gdi32.lib",
		"winspool.lib",
		"comdlg32.lib",
		"advapi32.lib",
		"shell32.lib",
		"ole32.lib",
		"oleaut32.lib",
		"uuid.lib",
		"odbc32.lib",
		"odbccp32.lib"
	}

	buildoptions { "/sdl" }

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

	filter "configurations:Debug"
		symbols "On"
		defines
		{
			"WIN32",
			"_DEBUG",
			"_CONSOLE"
		}

	filter "configurations:Release"
		optimize "On"
		defines 
		{
			"WIN32",
			"NDEBUG",
			"_CONSOLE"
		}

	filter {"system:windows", "configurations:Debug"}
		buildoptions { "/MDd" }
	filter {"system:windows", "configurations:Release"}
		buildoptions { "/MD" }
	

project "LagrangeVisualizer"
	location "LagrangeVisualizer"
	kind "ConsoleApp"
	language "C++"

	targetdir("build/" .. out_dir .. "%{prj.name}")
	objdir("build-obj/" .. out_dir .. "%{prj.name}")

	
	files
	{
		"%{prj.name}/Mains/ApplicationMain.cpp", 
		"%{prj.name}/Source/**.h", 
		"%{prj.name}/Source/**.cpp",
	}

	removefiles  
	{

	}

	includedirs 
	{
		"%{prj.name}/Source",
		"LagrangeCore/Source", 
		"LagrangeCore/Dependencies/glm-1.0.1",
		"LagrangeCore/Dependencies/pempek_assert",
	}

	links
	{
		"LagrangeCore",
	}

	buildoptions { "/sdl" }

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

	filter "configurations:Debug"
		symbols "On"
		defines
		{
			"WIN32",
			"_DEBUG",
			"_CONSOLE"
		}

	filter "configurations:Release"
		optimize "On"
		defines 
		{
			"WIN32",
			"NDEBUG",
			"_CONSOLE"
		}

	filter {"system:windows", "configurations:Debug"}
		buildoptions { "/MDd" }
	filter {"system:windows", "configurations:Release"}
		buildoptions { "/MD" }

	postbuildcommands 
	{
		
	}
