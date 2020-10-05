-- author(s): Aneury Perez(aneury1), Victor D.Montero(victordmontero)
-- premake5.lua
workspace "PremakeWxProject"
   configurations { "Debug", "Release" }
   platforms { "Win32", "Win64", "Linux" }
   location "proj_%{_ACTION}"

project "PremakeWxProject"
   kind "WindowedApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"
   objdir "obj"
--- msbuild dir : C:\Windows\Microsoft.NET\Framework64\v4.0.30319
   files ({
	--	"**.h",
	--	"**.hpp",
		"src/**.cpp",
	--	"**.lua",
		"include/**.h",
		"include/**.hpp",
	})

  filter "configurations:Debug"
    defines { "DEBUG" }
    symbols "On"

  filter "configurations:Release"
    defines { "NDEBUG" }
    optimize "On"

  filter  "platforms:Win32"
    defines{"WIN32"}
    system "windows"
    architecture "x32"

    -- by now I only take into account MsVC, todo: I should add other Toolchain eg.: GCC, CLANG
	includedirs({
		"include",
		"thirdparty/wxWidgets/include",
		"thirdparty/wxWidgets/include/msvc",
	})
	
	libdirs({
		"thirdparty/wxWidgets/lib/vc_lib"
	})

  filter  "platforms:Win64"
    defines{"WIN64"}
    system "windows"
    architecture "x64"

	includedirs({
		"include",
		"thirdparty/wxWidgets/include",
		"thirdparty/wxWidgets/include/msvc"
	})
	
	libdirs({
		"thirdparty/wxWidgets/lib/vc_lib"
	})

  filter  "platforms:Linux"
    defines{"LINUX"}
    system "linux"

	includedirs({
		"include"
	})

	buildoptions{"`wx-config --cxxflags`"}
	linkoptions{"`wx-config --libs`"}