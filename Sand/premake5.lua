project "Sand"
	kind "ConsoleApp"
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

    filter "system:windows"
		systemversion "latest"

		defines
        {
            "_CRT_SECURE_NO_WARNINGS"
        }

		includedirs
        {
            "%{wks.location}/Engine/src",
		    "%{wks.location}/Engine/vendor"
        }

		links
		{
            "Engine"
		}

	    filter "configurations:Debug"
		    runtime "Debug"
		    symbols "on"

	    filter "configurations:Release"
		    runtime "Release"
		    optimize "on"
            kind "WindowedApp"
		    entrypoint "mainCRTStartup"