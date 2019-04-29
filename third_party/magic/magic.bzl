# Variable and function definitions to simplify Magic Bazel BUILD files.

# -----------------------------------------------------------------------------

def select_build_output_files_for_magic_bazel_platform(files = None):
    """ Standardizes select() structure for build output file sets.

    Defines one select format to choose libraries depending on a combination
    of build operating system, configuration, and cpu architecture. See the
    config_setting entries named "{os}_{config}_{arch}."

    Args:
       files: list of library file names, i.e. ["magic"].
    """
    return select({
        "linux_fastbuild_x86": ["linux/opt_x86/" + lib + ".a" for lib in files],
        "linux_opt_x86": ["linux/opt_x86/" + lib + ".a" for lib in files],
        "linux_dbg_x86": ["linux/dbg_x86/" + lib + ".a" for lib in files],
        "linux_fastbuild_x64": ["linux/opt_x64/" + lib + ".a" for lib in files],
        "linux_opt_x64": ["linux/opt_x64/" + lib + ".a" for lib in files],
        "linux_dbg_x64": ["linux/dbg_x64/" + lib + ".a" for lib in files],
        "windows_fastbuild_x86": ["win/opt_x86/" + lib + ".lib" for lib in files],
        "windows_opt_x86": ["win/opt_x86/" + lib + ".lib" for lib in files],
        "windows_dbg_x86": ["win/dbg_x86/" + lib + ".lib" for lib in files],
        "windows_fastbuild_x64": ["win/opt_x64/" + lib + ".lib" for lib in files],
        "windows_opt_x64": ["win/opt_x64/" + lib + ".lib" for lib in files],
        "windows_dbg_x64": ["win/dbg_x64/" + lib + ".lib" for lib in files],
    })
