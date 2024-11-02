#include<string>
#include<iostream>

#include<boost/program_options.hpp>

namespace options = boost::program_options;

int main(int argc, char** argv) {
    options::options_description desc("allowed options");
    desc.add_options()
        ("help,h", "help message")
        ("conf,c", options::value<std::string>(), "remote config addr");

    options::variables_map vm;
    try {
        // auto commands = options::parse_command_line(argc, argv, desc);
        options::store(options::parse_command_line(argc, argv, desc), vm);
    } catch(const options::error& e) {
        std::cerr << "error: " << e.what() << std::endl;
        return 1;
    }
    
    if(vm.count("conf") > 0) {
        std::cout << "config: " << vm["conf"].as<std::string>() << std::endl;
    } else {
        std::cout << "config not exist" << std::endl;
    }

    return 0;
} 