from conan import ConanFile
from conan.tools.cmake import cmake_layout
from conan.tools.files import copy


class ExampleRecipe(ConanFile):
    name = "ap-bundle"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"
    revision_mode = "scm"

    exports_sources = "include*", "src*", "CMakeLists.txt*", "*.cpp"

    def requirements(self):
        self.requires("gtest/1.15.0")

    def layout(self):
        cmake_layout(self)

    def set_version(self):
        self.version = "2.0"

    def build(self):
        breakpoint()
        self.run(f"cmake -S {self.source_folder} -B {self.build_folder}")
        self.run(f"cmake --build {self.build_folder}")

    def package(self):
        copy(self, "entrypoint", src=self.build_folder, dst=self.package_folder)
        copy(self, "*.a", src=self.build_folder, dst=self.package_folder)

    def package_info(self):
        pass
