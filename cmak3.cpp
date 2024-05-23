#include <iostream>
#include <fstream>
#include <sstream>
#include <print>
#include <random>
#include <algorithm>
#include <format>
#include <string>
#include <vector>
#include <filesystem>
#include <ranges>
#include <cstdint>
#include <windows.h>

#pragma region __CONSOLE__

namespace console
{
	enum class color : uint32_t
	{
		alice_blue = 0xF0F8FF,
		antique_white = 0xFAEBD7,
		aqua = 0x00FFFF,
		aquamarine = 0x7FFFD4,
		azure = 0xF0FFFF,
		beige = 0xF5F5DC,
		bisque = 0xFFE4C4,
		black = 0x000000,
		blanched_almond = 0xFFEBCD,
		blue = 0x0000FF,
		blue_violet = 0x8A2BE2,
		brown = 0xA52A2A,
		burly_wood = 0xDEB887,
		cadet_blue = 0x5F9EA0,
		chartreuse = 0x7FFF00,
		chocolate = 0xD2691E,
		coral = 0xFF7F50,
		cornflower_blue = 0x6495ED,
		cornsilk = 0xFFF8DC,
		crimson = 0xDC143C,
		cyan = 0x00FFFF,
		dark_blue = 0x00008B,
		dark_cyan = 0x008B8B,
		dark_golden_rod = 0xB8860B,
		dark_gray = 0xA9A9A9,
		dark_green = 0x006400,
		dark_khaki = 0xBDB76B,
		dark_magenta = 0x8B008B,
		dark_olive_green = 0x556B2F,
		dark_orange = 0xFF8C00,
		dark_orchid = 0x9932CC,
		dark_red = 0x8B0000,
		dark_salmon = 0xE9967A,
		dark_sea_green = 0x8FBC8F,
		dark_slate_blue = 0x483D8B,
		dark_slate_gray = 0x2F4F4F,
		dark_turquoise = 0x00CED1,
		dark_violet = 0x9400D3,
		deep_pink = 0xFF1493,
		deep_sky_blue = 0x00BFFF,
		dim_gray = 0x696969,
		dodger_blue = 0x1E90FF,
		fire_brick = 0xB22222,
		floral_white = 0xFFFAF0,
		forest_green = 0x228B22,
		fuchsia = 0xFF00FF,
		gainsboro = 0xDCDCDC,
		ghost_white = 0xF8F8FF,
		gold = 0xFFD700,
		golden_rod = 0xDAA520,
		gray = 0x808080,
		green = 0x008000,
		green_yellow = 0xADFF2F,
		honey_dew = 0xF0FFF0,
		hot_pink = 0xFF69B4,
		indian_red = 0xCD5C5C,
		indigo = 0x4B0082,
		ivory = 0xFFFFF0,
		khaki = 0xF0E68C,
		lavender = 0xE6E6FA,
		lavender_blush = 0xFFF0F5,
		lawn_green = 0x7CFC00,
		lemon_chiffon = 0xFFFACD,
		light_blue = 0xADD8E6,
		light_coral = 0xF08080,
		light_cyan = 0xE0FFFF,
		light_golden_rod_yellow = 0xFAFAD2,
		light_gray = 0xD3D3D3,
		light_green = 0x90EE90,
		light_pink = 0xFFB6C1,
		light_salmon = 0xFFA07A,
		light_sea_green = 0x20B2AA,
		light_sky_blue = 0x87CEFA,
		light_slate_gray = 0x778899,
		light_steel_blue = 0xB0C4DE,
		light_yellow = 0xFFFFE0,
		lime = 0x00FF00,
		lime_green = 0x32CD32,
		linen = 0xFAF0E6,
		magenta = 0xFF00FF,
		maroon = 0x800000,
		medium_aquamarine = 0x66CDAA,
		medium_blue = 0x0000CD,
		medium_orchid = 0xBA55D3,
		medium_purple = 0x9370DB,
		medium_sea_green = 0x3CB371,
		medium_slate_blue = 0x7B68EE,
		medium_spring_green = 0x00FA9A,
		medium_turquoise = 0x48D1CC,
		medium_violet_red = 0xC71585,
		midnight_blue = 0x191970,
		mint_cream = 0xF5FFFA,
		misty_rose = 0xFFE4E1,
		moccasin = 0xFFE4B5,
		navajo_white = 0xFFDEAD,
		navy = 0x000080,
		old_lace = 0xFDF5E6,
		olive = 0x808000,
		olive_drab = 0x6B8E23,
		orange = 0xFFA500,
		orange_red = 0xFF4500,
		orchid = 0xDA70D6,
		pale_golden_rod = 0xEEE8AA,
		pale_green = 0x98FB98,
		pale_turquoise = 0xAFEEEE,
		pale_violet_red = 0xDB7093,
		papaya_whip = 0xFFEFD5,
		peach_puff = 0xFFDAB9,
		peru = 0xCD853F,
		pink = 0xFFC0CB,
		plum = 0xDDA0DD,
		powder_blue = 0xB0E0E6,
		purple = 0x800080,
		rebecca_purple = 0x663399,
		red = 0xFF0000,
		rosy_brown = 0xBC8F8F,
		royal_blue = 0x4169E1,
		saddle_brown = 0x8B4513,
		salmon = 0xFA8072,
		sandy_brown = 0xF4A460,
		sea_green = 0x2E8B57,
		sea_shell = 0xFFF5EE,
		sienna = 0xA0522D,
		silver = 0xC0C0C0,
		sky_blue = 0x87CEEB,
		slate_blue = 0x6A5ACD,
		slate_gray = 0x708090,
		snow = 0xFFFAFA,
		spring_green = 0x00FF7F,
		steel_blue = 0x4682B4,
		tan = 0xD2B48C,
		teal = 0x008080,
		thistle = 0xD8BFD8,
		tomato = 0xFF6347,
		turquoise = 0x40E0D0,
		violet = 0xEE82EE,
		wheat = 0xF5DEB3,
		white = 0xFFFFFF,
		white_smoke = 0xF5F5F5,
		yellow = 0xFFFF00,
		yellow_green = 0x9ACD32
	};

	HANDLE handle;

	namespace sgr
	{
		const std::string reset = "\x1b[0m";
		const std::string bold = "\x1b[1m";
		const std::string faint = "\x1b[2m";
		const std::string italic = "\x1b[3m";
		const std::string underline = "\x1b[4m";
		const std::string blink = "\x1b[5m";
		const std::string reverse = "\x1b[7m";
		const std::string hide = "\x1b[8m";
		const std::string strike = "\x1b[9m";
		const std::string doubly = "\x1b[21m";
	}

	void init()
	{
		// FIXME
		// Global HANDLE
		handle = GetStdHandle(STD_OUTPUT_HANDLE);

		// Enable UTF-8
		SetConsoleOutputCP(65001);

		// Enable ANSI escape characters
		DWORD lpMode;
		GetConsoleMode(handle, &lpMode);
		SetConsoleMode(handle, lpMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	}

	std::string fg(uint8_t r, uint8_t g, uint8_t b)
	{
		return std::format("\x1b[38;2;{:d};{:d};{:d}m", r, g, b);
	}

	std::string fg(const color& c)
	{
		uint8_t r = uint32_t(c) >> 16;
		uint8_t g = uint32_t(c) >> 8;
		uint8_t b = uint32_t(c);
		return fg(r, g, b);
	}

	std::string bg(uint8_t r, uint8_t g, uint8_t b)
	{
		return std::format("\x1b[48;2;{:d};{:d};{:d}m", r, g, b);
	}

	std::string bg(const color& c)
	{
		uint8_t r = uint32_t(c) >> 16;
		uint8_t g = uint32_t(c) >> 8;
		uint8_t b = uint32_t(c);
		return bg(r, g, b);
	}

	void clear()
	{
		// FIXME
		SetConsoleCursorPosition(handle, { .X = 0, .Y = 0 });
	}

	void set_cursor(uint16_t x, uint16_t y)
	{
		// FIXME
		SetConsoleCursorPosition(handle, {int16_t(x), int16_t(y)});
	}
}

#pragma endregion __CONSOLE__

#pragma region __UTILS__

namespace utils
{
	std::vector<std::string> get_args(int argc, char ***argv)
	{
		std::vector<std::string> args;

		for (int32_t i = 1; i < argc; i++)
			args.push_back((*argv)[i]);

		return args;
	}

	std::string tolower(const std::string &string)
	{
		std::string result(string);
		std::transform(result.begin(), result.end(), result.begin(), [](char c){ return std::tolower(c); });
		return result;
	}

	// Check if the first given file is older than the 2nd one
	bool older(const std::filesystem::path &path1, const std::filesystem::path &path2)
	{
		std::filesystem::file_time_type time1 = std::filesystem::last_write_time(path1);
		std::filesystem::file_time_type time2 = std::filesystem::last_write_time(path2);

		return time1 < time2;
	}

	std::vector<std::string> get_lines(const std::filesystem::path &path)
	{
		std::vector<std::string> lines;

		std::ifstream file(path);
		for(std::string line; std::getline(file, line);)
			lines.push_back(line);

		file.close();
		return lines;	
	}

	// Returns the absolute paths of the specified file extension inside folder
	std::vector<std::filesystem::path> get_file_paths(const std::filesystem::path &folder_path, const std::string &extension)
	{
		std::vector<std::filesystem::path> file_paths;

		for (const std::filesystem::directory_entry &directory_entry : std::filesystem::recursive_directory_iterator(folder_path))
		{
			if (std::filesystem::is_regular_file(directory_entry) and (directory_entry.path().extension().string() == extension))
				file_paths.push_back(directory_entry.path());
		}

		return file_paths;
	}

	std::string remove_substring(const std::string &string, const std::string &substring)
	{
		std::string result = string;
		size_t position = result.find(substring);

		if (position != std::string::npos)
		{
			result.erase(position, substring.length());

			// Remove any extra spaces after removal
			while (position < result.length() && result[position] == ' ')
				result.erase(position, 1);
		}

		return result;
	}

	bool empty_string(const std::string &string)
	{
		for (char c : string)
			if (!std::isspace(c))
				return false;
		return true;
	}

	std::string get_next_string(std::string &string, const char delimiter = ' ')
	{
		std::string next;
		std::istringstream input(string);
		std::getline(input, next, delimiter);
		string = utils::remove_substring(string, next);

		while (!string.empty() and string[0] == delimiter)
			string.erase(0, 1);

		return next;
	}
}

#pragma endregion __UTILS__

#pragma region __MESSAGES__

namespace messages
{
	// const std::string version = "cmak3 version 0.1\n2024";
	const std::string version = "cmak3 version 0.1\n2024";
	
	void print_version_extended()
	{
		static const std::vector<std::string> rows =
		{
			"                                                                :PB?                    :^^::.     ",
			"                                                                7@@&.               ^?P#@@@@&#P?:  ",
			"                                                                !@@@:              ~@@@BY?7?YG@@&7 ",
			"                                                                !@@@:              .!!:       !@@#.",
			"     :!?JJ7~:     .5#5.  :!?7~   :~!7!:           :^!77!^.      !@@&:      ~PBY               ?@@B ",
			"   ^5&@@&&@@@#?   ~@@@:~P@@@@@G7G@@@@@@5.      :JG@@@@@@@&G!    !@@&.    !G@@@J        .~7J5P#@@G^ ",
			"  7&@&J:..:~5G?   ~@@&5@@B?!@@@@&P?~?@@@?     J&@@P7^::~&@@?    7@@#  .7B@@&Y:         P@@@@@@#?.  ",
			" ?@@#^            :&@@@B!   #@@Y.    J@@G    P@@#~     ^@@@:    7@@#~Y#@@#?.           .^~!?P&@@#7 ",
			"~@@&:             .&@@J     B@@7     ^@@&:  !@@&^      ~@@&:    ?@@@@@@@@#!                  .Y@@@!",
			"J@@5              :@@@^     5@@Y     .#@@7  ?@@B       :&@&.    J@@@G?:7&@@P:                  #@@Y",
			"7@@B:        .    !@@&:     ?@@B      P@@5  ~@@@^       B@@~    P@@P    :5@@&?    :G#5.       ~&@@!",
			" J@@&Y!^^^!YB&B.  7@@&:     ~@@&:     J@@B   5@@&?^^^^7P@@@B.   B@@5      !#@@G:  .G@@&5?!!!JG@@&7 ",
			"  ^Y#@@@@@@@#P!   :#@&^     :@@@~     ~@@@:   7G&@@@@@&BYG@@Y   5@@?       .P@@J    !5B&@@@@@&G?.  ",
			"     :~777~:       :!^       5#G:      7Y7      .^!!!^.   ~7^   .^^          ^^        :^~~~^.     ",
		};

		std::random_device rd;
		std::default_random_engine gen(rd());
		static std::uniform_int_distribution<uint32_t> dist(0, static_cast<uint32_t>(console::color::yellow_green) + 1);

		// Hide the console cursor
		CONSOLE_CURSOR_INFO cursorInfo;
		GetConsoleCursorInfo(console::handle, &cursorInfo);
		cursorInfo.bVisible = false;
		SetConsoleCursorInfo(console::handle, &cursorInfo);

		// Clear screen
		std::system("cls");

		while (true)
		{
			// Print each row
			for (const auto &str : rows)
			{
				uint32_t random_index = dist(gen);
				console::color random_color = static_cast<console::color>(random_index);
				std::cout << console::fg(random_color) << str << "\n";
			}
			std::cout << console::sgr::reset << "\n";

			Sleep(150);
			console::clear();
		}
	}

	void print_unknown_argument(const std::string &arg)
	{
		std::println("Unknown argument: \"{}\" ", arg);
	}
}

#pragma endregion

#pragma region __CMAK3__

namespace cmak3
{
	struct project_properties
	{
		bool is_library;
		bool is_shared;

		uint32_t version_major;
		uint32_t version_minor;
		uint32_t version_patch;

		std::string project_name;
		std::vector<std::filesystem::path> folders_source;
		std::vector<std::filesystem::path> folders_include;
	};

	std::vector<std::string> extract_section(const std::vector<std::string> &lines, const std::string &section_name)
	{
		std::vector<std::string> section;

		// Find section
		auto i = std::find(lines.begin(), lines.end(), "#" + section_name);
		i++;

		// All lines after that section
		for (; i != lines.end() and i->operator[](0) != '#' and !utils::empty_string(*i); i++)
			section.push_back(*i);

		return section;
	}

	namespace parse
	{
		void project(const std::vector<std::string> &lines, cmak3::project_properties &project_properties)
		{
			auto section_content = extract_section(lines, "project");
			std::string string = section_content[0];

			project_properties.project_name = utils::get_next_string(string);
			project_properties.version_major = std::stoul(utils::get_next_string(string, '.'));
			project_properties.version_minor = std::stoul(utils::get_next_string(string, '.'));
			project_properties.version_patch = std::stoul(utils::get_next_string(string));

			string = utils::get_next_string(string);
			project_properties.is_library = (string == "static" or string == "shared");
			project_properties.is_shared = (string == "shared");
		}

		void source(const std::vector<std::string> &lines, cmak3::project_properties &project_properties)
		{
			auto section_content = extract_section(lines, "source");
			for (const auto &i : section_content)
				project_properties.folders_source.push_back(i);
		}

		void include(const std::vector<std::string> &lines, cmak3::project_properties &project_properties)
		{
			auto section_content = extract_section(lines, "include");
			for (const auto &i : section_content)
				project_properties.folders_include.push_back(i);
		}
	}

	cmak3::project_properties read_cmak3_file(const std::filesystem::path &path = "cmak3list")
	{
		cmak3::project_properties project_properties;
		auto lines = utils::get_lines(path);

		parse::project(lines, project_properties);
		parse::source(lines, project_properties);
		parse::include(lines, project_properties);

		return project_properties;
	}

	void build(const cmak3::project_properties &project_properties)
	{
		// FIXME
		bool gcc_installed = !std::system("gcc --version") ? true : false;
		std::system("cls");
		if (!gcc_installed)
			throw std::format("{}Error:{} gcc not found!",
				console::fg(console::color::red),
				console::sgr::reset).c_str();

		// FIXME
		// Check if cmak3list has been modified ?

		std::vector<std::filesystem::path> objects;
		bool executable_up_to_date = true;
 
		// Get files from each folder
		for (const auto &folder : project_properties.folders_source)
		{
			auto files = utils::get_file_paths(folder, ".cpp");

			// Compile each file
			for (const auto &source_path : files)
			{
				std::filesystem::path directory_path = source_path.parent_path();
				std::filesystem::path file_name = source_path.stem();
				std::filesystem::path object_path = "build" / std::filesystem::path((directory_path / file_name).generic_string() + ".o").relative_path();
				objects.push_back(object_path);
				std::filesystem::create_directories(object_path.parent_path());

				// Check if already up to date
				if (std::filesystem::exists(object_path) and utils::older(source_path, object_path))
				{
					std::println("{}Skipping:{} {} {}already up to date{}",
						console::fg(console::color::yellow_green),
						console::sgr::reset,
						object_path.generic_string(),
						console::fg(console::color::lime_green),
						console::sgr::reset);

					continue;
				}

				executable_up_to_date = false;

				// Include directories
				std::string compile_string = std::format("g++ -c {} -o {}", source_path.generic_string(), object_path.generic_string());
				for (const auto &i : project_properties.folders_include)
					compile_string += std::format(" -I {}", i.generic_string());

				std::println("{}", compile_string);

				int code = std::system(compile_string.c_str());
				if (code)
					throw std::format("{}Error:{} compilation terminated",
						console::fg(console::color::red),
						console::sgr::reset).c_str();
			}
		}

		// Link
		std::string link_string = "g++";
		for (const auto &i : objects)
			link_string += std::format(" {}", i.generic_string());
		
		// FIXME
		link_string += std::format(" -o build/{}.exe", project_properties.project_name);

		if (!executable_up_to_date)
		{
			std::println("{}", link_string);
			std::system(link_string.c_str());
		}
		else
			std::println("{}Skipping linking:{} build/{}.exe {}already up to date{}",
				console::fg(console::color::yellow_green),
				console::sgr::reset,
				project_properties.project_name,
				console::fg(console::color::lime_green),
				console::sgr::reset);
	}
}

#pragma endregion __CMAK3__

int main(int argc, char *argv[])
{
	auto args = utils::get_args(argc, &argv);
	console::init();

	switch (args.size())
	{
		// Default
		case 0:
		{
			try
			{
				auto project_properties = cmak3::read_cmak3_file();
				cmak3::build(project_properties);
			}
			catch(const char *error) { std::println("{}", error); return 1; }

			break;
		}

		case 1:
		{
			if (args[0] == "--version" or args[0] == "-v")
				std::println("{}", messages::version);
			else if (args[0] == "--help" or args[0] == "-h")
				std::println("TODO");
			else if (args[0] == "--v3rsion")
				messages::print_version_extended();
			else
				messages::print_unknown_argument(args[0]);

			break;
		}
	}

	return 0;
}
