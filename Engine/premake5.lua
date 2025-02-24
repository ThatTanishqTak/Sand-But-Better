project "Engine"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

    targetdir ("%{wks.location}/bin/" .. outputDir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputDir .. "/%{prj.name}")

    files
	{
		"Src/**.h",
		"Src/**.cpp"
	}

	defines
    {
        "_CRT_SECURE_NO_WARNINGS"
    }

	includedirs
	{
		"%{IncludeDir.raylib}"
	}

	links
	{
		"%{LibraryDir.raylib}"
	}

    filter "system:windows"
		systemversion "latest"

		links
		{
			"%{Library.Winmm}"
		}

	    filter "configurations:Debug"
		    runtime "Debug"
		    symbols "on"

	    filter "configurations:Release"
		    runtime "Release"
		    optimize "on"