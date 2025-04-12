from conan import ConanFile
from conan.tools.cmake import cmake_layout
from conan.tools.files import copy


class FibonacciSequenceConanfile(ConanFile):
    name = "fbs"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"
    revision_mode = "scm"

    exports_sources = "include*", "src*", "CMakeLists.txt*", "*.cpp"

    def requirements(self):
        self.requires("gtest/[>=1.10.0, <=1.15.0]")
        self.requires("ap-bundle/5.0")

    def layout(self):
        cmake_layout(self)

    def set_version(self):
        self.version = "1.0"

    def build(self):
        self.run(f"cmake -S {self.source_folder} -B {self.build_folder}")
        self.run(f"cmake --build {self.build_folder}")

