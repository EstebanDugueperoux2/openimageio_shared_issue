
`conan create . --build missing -o */*:shared=True -s build_type=Debug --profile:build .conan/profiles/workstationFedora39 --profile:host .conan/profiles/workstationFedora39 -c tools.system.package_manager:mode=install &> build.log
`
