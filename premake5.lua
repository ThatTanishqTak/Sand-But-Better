include "Dependencies.lua"

workspace "Sand-But-Better"
    architecture "x86_64"
    startproject "Sand"

    configurations
	{
		"Debug",
		"Release"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "Engine"
include "Sand"